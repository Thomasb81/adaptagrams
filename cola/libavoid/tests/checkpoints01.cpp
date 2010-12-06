#include "libavoid/libavoid.h"
using namespace Avoid;
int main(void) {
    Router *router = new Router(OrthogonalRouting);
    router->setRoutingPenalty((PenaltyType)0, 50);
    router->setRoutingPenalty((PenaltyType)1, 0);
    router->setRoutingPenalty((PenaltyType)2, 0);
    router->setRoutingPenalty((PenaltyType)3, 4000);
    router->setRoutingPenalty((PenaltyType)4, 105);
    router->setOrthogonalNudgeDistance(25);
    Rectangle rect478845150(Point(50695, 51070), Point(50705, 51080));
    JunctionRef *junctionRef478845150 = new JunctionRef(router, 
		    Point(50700, 51075), 478845150);
    
    router->addJunction(junctionRef478845150);
    Rectangle rect92712048(Point(51246, 50475), Point(51304, 50585));
    ShapeRef *shapeRef92712048 = new ShapeRef(router, rect92712048, 92712048);
    router->addShape(shapeRef92712048);
    Rectangle rect23127921(Point(50365, 50766), Point(50485, 50834));
    ShapeRef *shapeRef23127921 = new ShapeRef(router, rect23127921, 23127921);
    router->addShape(shapeRef23127921);
    Rectangle rect159957148(Point(51740, 50891), Point(51860, 50959));
    ShapeRef *shapeRef159957148 = new ShapeRef(router, rect159957148, 159957148);
    router->addShape(shapeRef159957148);
    Rectangle rect1350214(Point(50375, 51015), Point(50625, 51135));
    ShapeRef *shapeRef1350214 = new ShapeRef(router, rect1350214, 1350214);
    router->addShape(shapeRef1350214);
    Rectangle rect247197258(Point(50265, 51046), Point(50375, 51104));
    ShapeRef *shapeRef247197258 = new ShapeRef(router, rect247197258, 247197258);
    router->addShape(shapeRef247197258);
    Rectangle rect281096654(Point(50700, 50390), Point(51000, 50610));
    ShapeRef *shapeRef281096654 = new ShapeRef(router, rect281096654, 281096654);
    router->addShape(shapeRef281096654);
    ConnEnd srcPt342420237(Point(50425, 50800), 15);
    ConnEnd dstPt342420237(Point(50710, 50450), 4);
    new ConnRef(router, srcPt342420237, dstPt342420237, 342420237);
    ConnEnd srcPt352019675(Point(50990, 50500), 8);
    ConnEnd dstPt352019675(junctionRef478845150);
    //ConnEnd dstPt352019675(Point(50700, 51075), 15);
    new ConnRef(router, srcPt352019675, dstPt352019675, 352019675);
    ConnEnd srcPt42699400(junctionRef478845150);
    //ConnEnd srcPt42699400(Point(50700, 51075), 15);
    ConnEnd dstPt42699400(Point(50615, 51075), 8);
    new ConnRef(router, srcPt42699400, dstPt42699400, 42699400);
    ConnEnd srcPt94712625(Point(50710, 50550), 4);
    ConnEnd dstPt94712625(junctionRef478845150);
    //ConnEnd dstPt94712625(Point(50700, 51075), 15);
    new ConnRef(router, srcPt94712625, dstPt94712625, 94712625);
    
    ConnEnd srcPt92802970(Point(50990, 50450), 8);
    ConnEnd dstPt92802970(Point(51275, 50485), 1);
    ConnRef *conn = new ConnRef(router, srcPt92802970, dstPt92802970, 92802970);
    std::vector<Point> checkpoints;
    checkpoints.push_back(Point(50000, 50000));
    checkpoints.push_back(Point(50200, 50000));
    checkpoints.push_back(Point(50200, 50200));
    conn->setRoutingCheckpoints(checkpoints);
    
    ConnEnd srcPt716502036(Point(50710, 50500), 4);
    ConnEnd dstPt716502036(Point(51800, 50925), 15);
    new ConnRef(router, srcPt716502036, dstPt716502036, 716502036);
    router->processTransaction();
    router->outputInstanceToSVG("test-checkpoints01-1");
    router->moveJunction(junctionRef478845150, 585, 0);
    router->processTransaction();
    router->outputInstanceToSVG("test-checkpoints01-2");
    delete router;
    return 0;
};