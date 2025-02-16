// From bandgap_1_overlap_reduced_libavoid-debug.svg.
#include "libavoid/libavoid.h"
using namespace Avoid;
int main(void) {
    Router *router = new Router(
            PolyLineRouting | OrthogonalRouting);
    router->setRoutingPenalty((PenaltyType)0, 50);
    router->setRoutingPenalty((PenaltyType)1, 0);
    router->setRoutingPenalty((PenaltyType)2, 50);
    router->setRoutingPenalty((PenaltyType)3, 4000);
    router->setRoutingPenalty((PenaltyType)4, 110);
    router->setRoutingParameter(idealNudgingDistance, 25);

    Polygon poly143407352(4);
    poly143407352.ps[0] = Point(6035, 4390);
    poly143407352.ps[1] = Point(6035, 5085);
    poly143407352.ps[2] = Point(5675, 5085);
    poly143407352.ps[3] = Point(5675, 4390);
    ShapeRef::createShapeRef(router, poly143407352, 143407352);
    
    Polygon poly124950386(4);
    poly124950386.ps[0] = Point(4900, 4090);
    poly124950386.ps[1] = Point(4900, 4785);
    poly124950386.ps[2] = Point(4540, 4785);
    poly124950386.ps[3] = Point(4540, 4090);
    ShapeRef::createShapeRef(router, poly124950386, 124950386);
    
    ConnRef *connRef373967044 = ConnRef::createConnRef(router, 373967044).get();
    ConnEnd srcPt373967044(Point(4890, 4250), 8);
    connRef373967044->setSourceEndpoint(srcPt373967044);
    ConnEnd dstPt373967044(Point(5685, 4550), 4);
    connRef373967044->setDestEndpoint(dstPt373967044);
    connRef373967044->setRoutingType((ConnType)2);

    ConnRef *connRef681881486 = ConnRef::createConnRef(router, 681881486).get();
    ConnEnd srcPt681881486(Point(4890, 4325), 8);
    connRef681881486->setSourceEndpoint(srcPt681881486);
    ConnEnd dstPt681881486(Point(5685, 4625), 4);
    connRef681881486->setDestEndpoint(dstPt681881486);
    connRef681881486->setRoutingType((ConnType)2);

    ConnRef *connRef829752 = ConnRef::createConnRef(router, 829752).get();
    ConnEnd srcPt829752(Point(4890, 4400), 8);
    connRef829752->setSourceEndpoint(srcPt829752);
    ConnEnd dstPt829752(Point(5685, 4700), 4);
    connRef829752->setDestEndpoint(dstPt829752);
    connRef829752->setRoutingType((ConnType)2);

    ConnRef *connRef17625739 = ConnRef::createConnRef(router, 17625739).get();
    ConnEnd srcPt17625739(Point(4890, 4475), 8);
    connRef17625739->setSourceEndpoint(srcPt17625739);
    ConnEnd dstPt17625739(Point(5685, 4775), 4);
    connRef17625739->setDestEndpoint(dstPt17625739);
    connRef17625739->setRoutingType((ConnType)2);

    ConnRef *connRef223864175 = ConnRef::createConnRef(router, 223864175).get();
    ConnEnd srcPt223864175(Point(4890, 4550), 8);
    connRef223864175->setSourceEndpoint(srcPt223864175);
    ConnEnd dstPt223864175(Point(5685, 4850), 4);
    connRef223864175->setDestEndpoint(dstPt223864175);
    connRef223864175->setRoutingType((ConnType)2);

    ConnRef *connRef98144280 = ConnRef::createConnRef(router, 98144280).get();
    ConnEnd srcPt98144280(Point(4890, 4625), 8);
    connRef98144280->setSourceEndpoint(srcPt98144280);
    ConnEnd dstPt98144280(Point(5685, 4925), 4);
    connRef98144280->setDestEndpoint(dstPt98144280);
    connRef98144280->setRoutingType((ConnType)2);

    ConnRef *connRef283100856 = ConnRef::createConnRef(router, 283100856).get();
    ConnEnd srcPt283100856(Point(4890, 4700), 8);
    connRef283100856->setSourceEndpoint(srcPt283100856);
    ConnEnd dstPt283100856(Point(5685, 5000), 4);
    connRef283100856->setDestEndpoint(dstPt283100856);
    connRef283100856->setRoutingType((ConnType)2);

    ConnRef *connRef387080925 = ConnRef::createConnRef(router, 387080925).get();
    ConnEnd srcPt387080925(Point(5685, 4475), 4);
    connRef387080925->setSourceEndpoint(srcPt387080925);
    ConnEnd dstPt387080925(Point(4890, 4175), 8);
    connRef387080925->setDestEndpoint(dstPt387080925);
    connRef387080925->setRoutingType((ConnType)2);

    router->processTransaction();
    router->outputDiagram("output/orthordering-02");
    
    int crossings = router->existsCrossings();

    delete router;
    return (crossings > 0) ? 1 : 0;
};

