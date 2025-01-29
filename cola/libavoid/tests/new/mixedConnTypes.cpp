#include "libavoid/libavoid.h"
#include "gtest/gtest.h"
#include "helpers.h"
/*
 * Test routing of mixed connections: router is configured as orthogonal and there are both orthogonal and polyline
 * connections.
 * */

using namespace Avoid;

typedef std::pair<ShapeRef*, ShapeConnectionPin*> ShapeWithPin;

class MixedConnTypes : public ::testing::Test {
protected:
    void SetUp() override {
        router = new Router(OrthogonalRouting | PolyLineRouting);
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

    ConnRef*  connectShapes(ShapeRef *shape1, unsigned int shape1ConnId, ShapeRef *shape2, ConnType connType) {
        ConnEnd srcPtEnd(shape1, shape1ConnId);
        ConnEnd dstPtEnd(shape2, 100);
        ConnRef *connection = new ConnRef(router, srcPtEnd, dstPtEnd);
        connection->setRoutingType(connType);
        return connection;
    }

    Router *router;
};

TEST_F(MixedConnTypes, RoutesAreCorrectForPolylineInOrthogonal) {
    // add two edges between shapes, remove one and another one should be exactly at the center between shapes
    ShapeWithPin leftShapeWithPin = addShape({ 100, 100 }, { 300, 300 }, 2, 5, 7);
    ShapeWithPin rightShapeWithPin = addShape({ 400, 400 }, { 600, 600 }, 9, 10, 11);

    ConnRef *leftToRightConn = connectShapes(leftShapeWithPin.first, 100, rightShapeWithPin.first, ConnType::ConnType_Orthogonal);
    ConnRef *rightToLeftConn = connectShapes(rightShapeWithPin.first, 100, leftShapeWithPin.first, ConnType::ConnType_PolyLine);

    router->processTransaction();
    router->deleteConnector(rightToLeftConn);
    router->processTransaction();

    router->outputDiagramSVG(IMAGE_OUTPUT_PATH "output/MixedConnTypes_RoutesAreCorrectForPolylineInOrthogonal");

    std::vector<Point> expectedleftToRight = { {200, 200}, {200, 500}, {500, 500} };
    EXPECT_THAT(leftToRightConn, IsEqualToRoute(expectedleftToRight));
}
