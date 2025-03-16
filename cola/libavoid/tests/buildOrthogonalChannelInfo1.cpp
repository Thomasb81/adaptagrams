#include "libavoid/libavoid.h"
#include <sstream>
using namespace Avoid;

void test()
{
	ConnEnd end1;
	ConnEnd end2;
	Polygon poly;
	Router * router1 = new Router(OrthogonalRouting);
	router1->setTransactionUse(true);
	router1->setRoutingPenalty(segmentPenalty);
	router1->setRoutingPenalty(crossingPenalty);
	router1->setRoutingPenalty(fixedSharedPathPenalty, 9000);
	router1->setRoutingOption(penaliseOrthogonalSharedPathsAtConnEnds, true);
	router1->setRoutingParameter(idealNudgingDistance, 25);
	poly = Polygon(4);
	poly.setPoint(0, Point(50760, 50691));
	poly.setPoint(1, Point(50760, 50775));
	poly.setPoint(2, Point(50640, 50775));
	poly.setPoint(3, Point(50640, 50691));
	auto  shape386142480 = ShapeRef::createShapeRef(router1, poly, 386142480);
	auto pin386142480_0 = shape386142480->createConnectionPin(1,                  0.5,  0.40476190476190477,                    true, 0, 13);
	pin386142480_0->setExclusive(true);
	auto pin386142480_1 = shape386142480->createConnectionPin(2,                  0.5,                    1,                   true, 10, 2);
	pin386142480_1->setExclusive(true);
	poly = Polygon(4);
	poly.setPoint(0, Point(51185, 50765));
	poly.setPoint(1, Point(51185, 50935));
	poly.setPoint(2, Point(50975, 50935));
	poly.setPoint(3, Point(50975, 50765));
	auto  shape300136482 = ShapeRef::createShapeRef(router1, poly, 300136482);
	auto pin300136482_0 = shape300136482->createConnectionPin(1,                    0,                  0.5,                   true, 10, 4);
	pin300136482_0->setExclusive(true);
	auto pin300136482_1 = shape300136482->createConnectionPin(2,  0.95238095238095233,                  0.5,                   true, 10, 8);
	pin300136482_1->setExclusive(true);
	poly = Polygon(4);
	poly.setPoint(0, Point(50854, 50840));
	poly.setPoint(1, Point(50854, 50935));
	poly.setPoint(2, Point(50796, 50935));
	poly.setPoint(3, Point(50796, 50840));
	auto  shape51003942 = ShapeRef::createShapeRef(router1, poly, 51003942);
	auto pin51003942_0 = shape51003942->createConnectionPin(1,                  0.5,  0.10526315789473684,                   true, 10, 1);
	pin51003942_0->setExclusive(true);
	auto  junction502411221 = JunctionRef::createJunctionRef(router1, Point(50825, 50850), 502411221);
	end1 = ConnEnd(shape386142480, 2);
	end2 = ConnEnd(junction502411221);
	ConnRef::createConnRef(router1, end1, end2);
	end1 = ConnEnd(junction502411221);
	end2 = ConnEnd(shape300136482, 1);
	ConnRef::createConnRef(router1, end1, end2);
	end1 = ConnEnd(shape51003942, 1);
	end2 = ConnEnd(junction502411221);
	ConnRef::createConnRef(router1, end1, end2);
	router1->processTransaction();

	router1->outputDiagram("output/buildOrthogonalChannelInfo1");
    delete router1;
}

extern "C" int main(void)
{
	test();
	return 0;
}
