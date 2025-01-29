#include "libavoid/libavoid.h"
#include "gtest/gtest.h"
#include "helpers.h"
/*
 * Test routing after moving existing shape connection pins that have routes.
 * */

using namespace Avoid;

typedef std::pair<ShapeRef*, ShapeConnectionPin*> ShapeWithPin;

class MoveShapeConnectionPins : public ::testing::Test {
protected:
    void SetUp() override {
        router = new Router(OrthogonalRouting);
        router->setRoutingParameter(RoutingParameter::shapeBufferDistance, 16);
        router->setRoutingParameter(RoutingParameter::segmentPenalty, 50);
        router->setRoutingParameter(RoutingParameter::idealNudgingDistance, 16);
        router->setRoutingOption(RoutingOption::nudgeOrthogonalSegmentsConnectedToShapes, true);
        router->setRoutingOption(RoutingOption::nudgeOrthogonalTouchingColinearSegments, false);
    }

    void TearDown() override {
        delete router;
    }

    ShapeWithPin addShape(Point topLeft, Point bottomRight, unsigned int shapeId, unsigned int connectionId, unsigned int connectionId2 = 0) {
        Rectangle shapeRectangle(topLeft, bottomRight);
        ShapeRef *shape = new ShapeRef(router, shapeRectangle, shapeId);
        auto pin = new ShapeConnectionPin(shape, 100,
                                          ATTACH_POS_CENTRE, ATTACH_POS_CENTRE, true, 0.0, ConnDirNone);
        pin->setExclusive(false);
        ShapeWithPin result(shape, pin);
        return result;
    }

    ConnRef*  connectShapes(ShapeRef *shape1, unsigned int shape1ConnId, ShapeRef *shape2) {
        ConnEnd srcPtEnd(shape1, shape1ConnId);
        ConnEnd dstPtEnd(shape2, 100);
        ConnRef *connection = new ConnRef(router, srcPtEnd, dstPtEnd);
        return connection;
    }

    Router *router;
};

TEST_F(MoveShapeConnectionPins, RoutesAreUpdatedAfterMovingShapeConnectionPins) {
    // add two edges between shapes, remove one and another one should be exactly at the center between shapes
    ShapeWithPin leftShapeWithPin = addShape({ 100, 100 }, { 300, 300 }, 2, 5, 7);
    ShapeWithPin rightShapeWithPin = addShape({ 400, 100 }, { 600, 300 }, 9, 10, 11);

    ConnRef *leftToRightConn = connectShapes(leftShapeWithPin.first, 100, rightShapeWithPin.first);
    ConnRef *rightToLeftConn = connectShapes(rightShapeWithPin.first, 100, leftShapeWithPin.first);

    router->processTransaction();
    Point newPosition(1, 1);
    leftShapeWithPin.second->updatePosition(newPosition);
    router->processTransaction();

    router->outputDiagramSVG(IMAGE_OUTPUT_PATH "output/MoveShapeConnectionPins_RoutesAreUpdatedAfterMovingShapeConnectionPins");

    std::vector<Point> expectedleftToRight = { {300, 300}, {358, 300}, {358, 208}, { 500, 208 } };
    std::vector<Point> expectedRightToLeft = { {500, 192}, {342, 192}, {342, 284}, { 300, 284 } };
    EXPECT_THAT(leftToRightConn, IsEqualToRoute(expectedleftToRight));
    EXPECT_THAT(rightToLeftConn, IsEqualToRoute(expectedRightToLeft));
}

// TODO: test moving shape connection pins with absolute coordinates

TEST_F(MoveShapeConnectionPins, RoutesAreUpdatedAfterMovingShapeAndShapeConnectionPins) {
    // add two edges between shapes, remove one and another one should be exactly at the center between shapes
    ShapeWithPin leftShapeWithPin = addShape({ 100, 100 }, { 300, 300 }, 2, 5, 7);
    ShapeWithPin rightShapeWithPin = addShape({ 400, 100 }, { 600, 300 }, 9, 10, 11);

    ConnRef *leftToRightConn = connectShapes(leftShapeWithPin.first, 100, rightShapeWithPin.first);
    ConnRef *rightToLeftConn = connectShapes(rightShapeWithPin.first, 100, leftShapeWithPin.first);

    router->processTransaction();
    router->moveShape(rightShapeWithPin.first, 100, 100);
    Point newPosition(1, 1);
    rightShapeWithPin.second->updatePosition(newPosition);
    router->processTransaction();

    router->outputDiagramSVG(IMAGE_OUTPUT_PATH "output/MoveShapeConnectionPins_RoutesAreUpdatedAfterMovingShapeAndShapeConnectionPins");

    std::vector<Point> expectedleftToRight = { {192, 200}, { 192, 400}, {700, 400} };
    std::vector<Point> expectedRightToLeft = { {700, 384}, {208, 384}, {208, 200} };
    EXPECT_THAT(leftToRightConn, IsEqualToRoute(expectedleftToRight));
    EXPECT_THAT(rightToLeftConn, IsEqualToRoute(expectedRightToLeft));
}
