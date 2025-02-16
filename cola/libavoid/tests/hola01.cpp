// Regression test exercises a problem with nudging that would result in the 
// following assertion if a sub-problem was unsatisfiable because the right 
// channel edge but not the left had moved.
//    Assertion failed: (unsatisfiedRanges.size() > 0)
// Reported by Steve Kieffer and Tobias Czauderna.
//
// Problem happens if EDGE128 is defined.

#include "libavoid/libavoid.h"

using namespace Avoid;
int main(void) {
    Router *router = new Router(OrthogonalRouting);
    router->setRoutingParameter((RoutingParameter)0, 30);
    router->setRoutingParameter((RoutingParameter)1, 0);
    router->setRoutingParameter((RoutingParameter)2, 120);
    router->setRoutingParameter((RoutingParameter)3, 4000);
    router->setRoutingParameter((RoutingParameter)4, 0);
    router->setRoutingParameter((RoutingParameter)5, 0);
    router->setRoutingParameter((RoutingParameter)6, 7.5);
    router->setRoutingParameter((RoutingParameter)7, 4);
    router->setRoutingParameter((RoutingParameter)8, 0);
    router->setRoutingOption((RoutingOption)0, false);
    router->setRoutingOption((RoutingOption)1, true);
    router->setRoutingOption((RoutingOption)2, false);
    router->setRoutingOption((RoutingOption)3, false);
    router->setRoutingOption((RoutingOption)4, true);
    router->setRoutingOption((RoutingOption)5, false);
    router->setRoutingOption((RoutingOption)6, false);
    Polygon polygon;
    ConnRef *connRef = nullptr;
    ConnEnd srcPt;
    ConnEnd dstPt;
    ConnEnd heConnPt;
    PolyLine newRoute;

    // shapeRef1
    polygon = Polygon(4);
    polygon.ps[0] = Point(274.03, 356.334);
    polygon.ps[1] = Point(304.03, 356.334);
    polygon.ps[2] = Point(304.03, 386.334);
    polygon.ps[3] = Point(274.03, 386.334);
    ShapeRef::createShapeRef(router, polygon, 1);

    // shapeRef1
    polygon = Polygon(4);
    polygon.ps[0] = Point(214.034, 356.334);
    polygon.ps[1] = Point(244.034, 356.334);
    polygon.ps[2] = Point(244.034, 386.334);
    polygon.ps[3] = Point(214.034, 386.334);
    ShapeRef::createShapeRef(router, polygon, 1);

    // shapeRef2
    polygon = Polygon(4);
    polygon.ps[0] = Point(214.034, 439.168);
    polygon.ps[1] = Point(244.034, 439.168);
    polygon.ps[2] = Point(244.034, 469.168);
    polygon.ps[3] = Point(214.034, 469.168);
    ShapeRef::createShapeRef(router, polygon, 2);

    // shapeRef3
    polygon = Polygon(4);
    polygon.ps[0] = Point(354.024, 416.334);
    polygon.ps[1] = Point(384.024, 416.334);
    polygon.ps[2] = Point(384.024, 446.334);
    polygon.ps[3] = Point(354.024, 446.334);
    ShapeRef::createShapeRef(router, polygon, 3);

    // shapeRef4
    polygon = Polygon(4);
    polygon.ps[0] = Point(274.03, 276.334);
    polygon.ps[1] = Point(304.03, 276.334);
    polygon.ps[2] = Point(304.03, 306.334);
    polygon.ps[3] = Point(274.03, 306.334);
    ShapeRef::createShapeRef(router, polygon, 4);

    // shapeRef5
    polygon = Polygon(4);
    polygon.ps[0] = Point(534.011, 276.334);
    polygon.ps[1] = Point(564.011, 276.334);
    polygon.ps[2] = Point(564.011, 306.334);
    polygon.ps[3] = Point(534.011, 306.334);
    ShapeRef::createShapeRef(router, polygon, 5);

    // shapeRef6
    polygon = Polygon(4);
    polygon.ps[0] = Point(414.023, 416.334);
    polygon.ps[1] = Point(444.023, 416.334);
    polygon.ps[2] = Point(444.023, 446.334);
    polygon.ps[3] = Point(414.023, 446.334);
    ShapeRef::createShapeRef(router, polygon, 6);

    // shapeRef7
    polygon = Polygon(4);
    polygon.ps[0] = Point(594.052, 276.334);
    polygon.ps[1] = Point(624.052, 276.334);
    polygon.ps[2] = Point(624.052, 306.334);
    polygon.ps[3] = Point(594.052, 306.334);
    ShapeRef::createShapeRef(router, polygon, 7);

    // shapeRef8
    polygon = Polygon(4);
    polygon.ps[0] = Point(254.052, 386.334);
    polygon.ps[1] = Point(284.052, 386.334);
    polygon.ps[2] = Point(284.052, 416.334);
    polygon.ps[3] = Point(254.052, 416.334);
    ShapeRef::createShapeRef(router, polygon, 8);

    // shapeRef9
    polygon = Polygon(4);
    polygon.ps[0] = Point(474.011, 416.334);
    polygon.ps[1] = Point(504.011, 416.334);
    polygon.ps[2] = Point(504.011, 446.334);
    polygon.ps[3] = Point(474.011, 446.334);
    ShapeRef::createShapeRef(router, polygon, 9);

    // shapeRef10
    polygon = Polygon(4);
    polygon.ps[0] = Point(274.03, 76.3341);
    polygon.ps[1] = Point(304.03, 76.3341);
    polygon.ps[2] = Point(304.03, 106.334);
    polygon.ps[3] = Point(274.03, 106.334);
    ShapeRef::createShapeRef(router, polygon, 10);

    // shapeRef11
    polygon = Polygon(4);
    polygon.ps[0] = Point(354.034, 536.334);
    polygon.ps[1] = Point(384.034, 536.334);
    polygon.ps[2] = Point(384.034, 566.334);
    polygon.ps[3] = Point(354.034, 566.334);
    ShapeRef::createShapeRef(router, polygon, 11);

    // shapeRef12
    polygon = Polygon(4);
    polygon.ps[0] = Point(414.023, 476.334);
    polygon.ps[1] = Point(444.023, 476.334);
    polygon.ps[2] = Point(444.023, 506.334);
    polygon.ps[3] = Point(414.023, 506.334);
    ShapeRef::createShapeRef(router, polygon, 12);

    // shapeRef13
    polygon = Polygon(4);
    polygon.ps[0] = Point(354.034, 596.334);
    polygon.ps[1] = Point(384.034, 596.334);
    polygon.ps[2] = Point(384.034, 626.334);
    polygon.ps[3] = Point(354.034, 626.334);
    ShapeRef::createShapeRef(router, polygon, 13);

    // shapeRef14
    polygon = Polygon(4);
    polygon.ps[0] = Point(274.03, 446.334);
    polygon.ps[1] = Point(304.03, 446.334);
    polygon.ps[2] = Point(304.03, 476.334);
    polygon.ps[3] = Point(274.03, 476.334);
    ShapeRef::createShapeRef(router, polygon, 14);

    // shapeRef15
    polygon = Polygon(4);
    polygon.ps[0] = Point(131.696, 276.334);
    polygon.ps[1] = Point(161.696, 276.334);
    polygon.ps[2] = Point(161.696, 306.334);
    polygon.ps[3] = Point(131.696, 306.334);
    ShapeRef::createShapeRef(router, polygon, 15);

    // shapeRef16
    polygon = Polygon(4);
    polygon.ps[0] = Point(564.023, 416.334);
    polygon.ps[1] = Point(594.023, 416.334);
    polygon.ps[2] = Point(594.023, 446.334);
    polygon.ps[3] = Point(564.023, 446.334);
    ShapeRef::createShapeRef(router, polygon, 16);

    // shapeRef17
    polygon = Polygon(4);
    polygon.ps[0] = Point(8.56882, 276.334);
    polygon.ps[1] = Point(38.5688, 276.334);
    polygon.ps[2] = Point(38.5688, 306.334);
    polygon.ps[3] = Point(8.56882, 306.334);
    ShapeRef::createShapeRef(router, polygon, 17);

    // shapeRef18
    polygon = Polygon(4);
    polygon.ps[0] = Point(474.011, 216.334);
    polygon.ps[1] = Point(504.011, 216.334);
    polygon.ps[2] = Point(504.011, 246.334);
    polygon.ps[3] = Point(474.011, 246.334);
    ShapeRef::createShapeRef(router, polygon, 18);

    // shapeRef19
    polygon = Polygon(4);
    polygon.ps[0] = Point(474.011, 156.334);
    polygon.ps[1] = Point(504.011, 156.334);
    polygon.ps[2] = Point(504.011, 186.334);
    polygon.ps[3] = Point(474.011, 186.334);
    ShapeRef::createShapeRef(router, polygon, 19);

    // shapeRef20
    polygon = Polygon(4);
    polygon.ps[0] = Point(534.011, 216.334);
    polygon.ps[1] = Point(564.011, 216.334);
    polygon.ps[2] = Point(564.011, 246.334);
    polygon.ps[3] = Point(534.011, 246.334);
    ShapeRef::createShapeRef(router, polygon, 20);

    // shapeRef21
    polygon = Polygon(4);
    polygon.ps[0] = Point(474.011, 96.3341);
    polygon.ps[1] = Point(504.011, 96.3341);
    polygon.ps[2] = Point(504.011, 126.334);
    polygon.ps[3] = Point(474.011, 126.334);
    ShapeRef::createShapeRef(router, polygon, 21);

    // shapeRef22
    polygon = Polygon(4);
    polygon.ps[0] = Point(334.035, 356.334);
    polygon.ps[1] = Point(364.035, 356.334);
    polygon.ps[2] = Point(364.035, 386.334);
    polygon.ps[3] = Point(334.035, 386.334);
    ShapeRef::createShapeRef(router, polygon, 22);

    // shapeRef23
    polygon = Polygon(4);
    polygon.ps[0] = Point(414.023, 536.334);
    polygon.ps[1] = Point(444.023, 536.334);
    polygon.ps[2] = Point(444.023, 566.334);
    polygon.ps[3] = Point(414.023, 566.334);
    ShapeRef::createShapeRef(router, polygon, 23);

    // shapeRef25
    polygon = Polygon(4);
    polygon.ps[0] = Point(564.052, 180.582);
    polygon.ps[1] = Point(594.052, 180.582);
    polygon.ps[2] = Point(594.052, 210.582);
    polygon.ps[3] = Point(564.052, 210.582);
    ShapeRef::createShapeRef(router, polygon, 25);

    // shapeRef26
    polygon = Polygon(4);
    polygon.ps[0] = Point(154.041, 476.334);
    polygon.ps[1] = Point(184.041, 476.334);
    polygon.ps[2] = Point(184.041, 506.334);
    polygon.ps[3] = Point(154.041, 506.334);
    ShapeRef::createShapeRef(router, polygon, 26);

    // shapeRef27
    polygon = Polygon(4);
    polygon.ps[0] = Point(474.011, 300.457);
    polygon.ps[1] = Point(504.011, 300.457);
    polygon.ps[2] = Point(504.011, 330.457);
    polygon.ps[3] = Point(474.011, 330.457);
    ShapeRef::createShapeRef(router, polygon, 27);

    // shapeRef28
    polygon = Polygon(4);
    polygon.ps[0] = Point(134.045, 306.334);
    polygon.ps[1] = Point(164.045, 306.334);
    polygon.ps[2] = Point(164.045, 336.334);
    polygon.ps[3] = Point(134.045, 336.334);
    ShapeRef::createShapeRef(router, polygon, 28);

    // shapeRef29
    polygon = Polygon(4);
    polygon.ps[0] = Point(254.039, 216.334);
    polygon.ps[1] = Point(284.039, 216.334);
    polygon.ps[2] = Point(284.039, 246.334);
    polygon.ps[3] = Point(254.039, 246.334);
    ShapeRef::createShapeRef(router, polygon, 29);

    // shapeRef30
    polygon = Polygon(4);
    polygon.ps[0] = Point(134.045, 386.334);
    polygon.ps[1] = Point(164.045, 386.334);
    polygon.ps[2] = Point(164.045, 416.334);
    polygon.ps[3] = Point(134.045, 416.334);
    ShapeRef::createShapeRef(router, polygon, 30);

    // shapeRef31
    polygon = Polygon(4);
    polygon.ps[0] = Point(74.0462, 386.334);
    polygon.ps[1] = Point(104.046, 386.334);
    polygon.ps[2] = Point(104.046, 416.334);
    polygon.ps[3] = Point(74.0462, 416.334);
    ShapeRef::createShapeRef(router, polygon, 31);

    // shapeRef32
    polygon = Polygon(4);
    polygon.ps[0] = Point(594.052, 596.334);
    polygon.ps[1] = Point(624.052, 596.334);
    polygon.ps[2] = Point(624.052, 626.334);
    polygon.ps[3] = Point(594.052, 626.334);
    ShapeRef::createShapeRef(router, polygon, 32);

    // shapeRef34
    polygon = Polygon(4);
    polygon.ps[0] = Point(154.041, 356.334);
    polygon.ps[1] = Point(184.041, 356.334);
    polygon.ps[2] = Point(184.041, 386.334);
    polygon.ps[3] = Point(154.041, 386.334);
    ShapeRef::createShapeRef(router, polygon, 34);

    // shapeRef35
    polygon = Polygon(4);
    polygon.ps[0] = Point(474.011, 36.3341);
    polygon.ps[1] = Point(504.011, 36.3341);
    polygon.ps[2] = Point(504.011, 66.3341);
    polygon.ps[3] = Point(474.011, 66.3341);
    ShapeRef::createShapeRef(router, polygon, 35);

    // shapeRef38
    polygon = Polygon(4);
    polygon.ps[0] = Point(534.011, 386.334);
    polygon.ps[1] = Point(564.011, 386.334);
    polygon.ps[2] = Point(564.011, 416.334);
    polygon.ps[3] = Point(534.011, 416.334);
    ShapeRef::createShapeRef(router, polygon, 38);

    // shapeRef39
    polygon = Polygon(4);
    polygon.ps[0] = Point(564.023, 343.278);
    polygon.ps[1] = Point(594.023, 343.278);
    polygon.ps[2] = Point(594.023, 373.278);
    polygon.ps[3] = Point(564.023, 373.278);
    ShapeRef::createShapeRef(router, polygon, 39);

    // shapeRef40
    polygon = Polygon(4);
    polygon.ps[0] = Point(74.0462, 156.334);
    polygon.ps[1] = Point(104.046, 156.334);
    polygon.ps[2] = Point(104.046, 186.334);
    polygon.ps[3] = Point(74.0462, 186.334);
    ShapeRef::createShapeRef(router, polygon, 40);

    // shapeRef41
    polygon = Polygon(4);
    polygon.ps[0] = Point(214.034, 76.3341);
    polygon.ps[1] = Point(244.034, 76.3341);
    polygon.ps[2] = Point(244.034, 106.334);
    polygon.ps[3] = Point(214.034, 106.334);
    ShapeRef::createShapeRef(router, polygon, 41);

    // shapeRef42
    polygon = Polygon(4);
    polygon.ps[0] = Point(334.035, 136.334);
    polygon.ps[1] = Point(364.035, 136.334);
    polygon.ps[2] = Point(364.035, 166.334);
    polygon.ps[3] = Point(334.035, 166.334);
    ShapeRef::createShapeRef(router, polygon, 42);

    // shapeRef45
    polygon = Polygon(4);
    polygon.ps[0] = Point(354.024, 300.457);
    polygon.ps[1] = Point(384.024, 300.457);
    polygon.ps[2] = Point(384.024, 330.457);
    polygon.ps[3] = Point(354.024, 330.457);
    ShapeRef::createShapeRef(router, polygon, 45);

    // shapeRef46
    polygon = Polygon(4);
    polygon.ps[0] = Point(154.041, 416.334);
    polygon.ps[1] = Point(184.041, 416.334);
    polygon.ps[2] = Point(184.041, 446.334);
    polygon.ps[3] = Point(154.041, 446.334);
    ShapeRef::createShapeRef(router, polygon, 46);

    // shapeRef47
    polygon = Polygon(4);
    polygon.ps[0] = Point(214.034, 136.334);
    polygon.ps[1] = Point(244.034, 136.334);
    polygon.ps[2] = Point(244.034, 166.334);
    polygon.ps[3] = Point(214.034, 166.334);
    ShapeRef::createShapeRef(router, polygon, 47);

    // shapeRef48
    polygon = Polygon(4);
    polygon.ps[0] = Point(214.034, 296.334);
    polygon.ps[1] = Point(244.034, 296.334);
    polygon.ps[2] = Point(244.034, 326.334);
    polygon.ps[3] = Point(214.034, 326.334);
    ShapeRef::createShapeRef(router, polygon, 48);

    // shapeRef50
    polygon = Polygon(4);
    polygon.ps[0] = Point(74.0462, 296.334);
    polygon.ps[1] = Point(104.046, 296.334);
    polygon.ps[2] = Point(104.046, 326.334);
    polygon.ps[3] = Point(74.0462, 326.334);
    ShapeRef::createShapeRef(router, polygon, 50);

    // shapeRef51
    polygon = Polygon(4);
    polygon.ps[0] = Point(354.024, 36.3341);
    polygon.ps[1] = Point(384.024, 36.3341);
    polygon.ps[2] = Point(384.024, 66.3341);
    polygon.ps[3] = Point(354.024, 66.3341);
    ShapeRef::createShapeRef(router, polygon, 51);

    // shapeRef53
    polygon = Polygon(4);
    polygon.ps[0] = Point(354.024, 180.582);
    polygon.ps[1] = Point(384.024, 180.582);
    polygon.ps[2] = Point(384.024, 210.582);
    polygon.ps[3] = Point(354.024, 210.582);
    ShapeRef::createShapeRef(router, polygon, 53);

    // shapeRef54
    polygon = Polygon(4);
    polygon.ps[0] = Point(534.011, 596.334);
    polygon.ps[1] = Point(564.011, 596.334);
    polygon.ps[2] = Point(564.011, 626.334);
    polygon.ps[3] = Point(534.011, 626.334);
    ShapeRef::createShapeRef(router, polygon, 54);

    // shapeRef55
    polygon = Polygon(4);
    polygon.ps[0] = Point(8.56882, 156.334);
    polygon.ps[1] = Point(38.5688, 156.334);
    polygon.ps[2] = Point(38.5688, 186.334);
    polygon.ps[3] = Point(8.56882, 186.334);
    ShapeRef::createShapeRef(router, polygon, 55);

    // shapeRef57
    polygon = Polygon(4);
    polygon.ps[0] = Point(281.314, 476.334);
    polygon.ps[1] = Point(311.314, 476.334);
    polygon.ps[2] = Point(311.314, 506.334);
    polygon.ps[3] = Point(281.314, 506.334);
    ShapeRef::createShapeRef(router, polygon, 57);

    // shapeRef58
    polygon = Polygon(4);
    polygon.ps[0] = Point(254.039, 312.99);
    polygon.ps[1] = Point(284.039, 312.99);
    polygon.ps[2] = Point(284.039, 342.99);
    polygon.ps[3] = Point(254.039, 342.99);
    ShapeRef::createShapeRef(router, polygon, 58);

    // connRef59
    connRef = ConnRef::createConnRef(router, 59).get();
    srcPt = ConnEnd(Point(229.034, 371.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(289.03, 371.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef60
    connRef = ConnRef::createConnRef(router, 60).get();
    srcPt = ConnEnd(Point(169.041, 491.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(169.041, 431.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef61
    connRef = ConnRef::createConnRef(router, 61).get();
    srcPt = ConnEnd(Point(369.024, 315.457), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(369.024, 431.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef62
    connRef = ConnRef::createConnRef(router, 62).get();
    srcPt = ConnEnd(Point(23.5688, 291.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(23.5688, 171.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef63
    connRef = ConnRef::createConnRef(router, 63).get();
    srcPt = ConnEnd(Point(429.023, 551.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(429.023, 491.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef64
    connRef = ConnRef::createConnRef(router, 64).get();
    srcPt = ConnEnd(Point(549.011, 611.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(369.034, 611.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef65
    connRef = ConnRef::createConnRef(router, 65).get();
    srcPt = ConnEnd(Point(369.024, 431.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(229.034, 454.168), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef66
    connRef = ConnRef::createConnRef(router, 66).get();
    srcPt = ConnEnd(Point(429.023, 551.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(579.023, 431.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef67
    connRef = ConnRef::createConnRef(router, 67).get();
    srcPt = ConnEnd(Point(489.011, 231.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(269.039, 231.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef68
    connRef = ConnRef::createConnRef(router, 68).get();
    srcPt = ConnEnd(Point(369.034, 551.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(429.023, 551.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef69
    connRef = ConnRef::createConnRef(router, 69).get();
    srcPt = ConnEnd(Point(169.041, 371.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(149.045, 401.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef70
    connRef = ConnRef::createConnRef(router, 70).get();
    srcPt = ConnEnd(Point(169.041, 491.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(229.034, 371.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef71
    connRef = ConnRef::createConnRef(router, 71).get();
    srcPt = ConnEnd(Point(149.045, 401.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(149.045, 321.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef72
    connRef = ConnRef::createConnRef(router, 72).get();
    srcPt = ConnEnd(Point(489.011, 231.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(549.011, 291.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef73
    connRef = ConnRef::createConnRef(router, 73).get();
    srcPt = ConnEnd(Point(229.034, 91.3341), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(289.03, 91.3341), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef74
    connRef = ConnRef::createConnRef(router, 74).get();
    srcPt = ConnEnd(Point(369.024, 315.457), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(369.024, 195.582), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef75
    connRef = ConnRef::createConnRef(router, 75).get();
    srcPt = ConnEnd(Point(489.011, 171.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(489.011, 231.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef76
    connRef = ConnRef::createConnRef(router, 76).get();
    srcPt = ConnEnd(Point(146.696, 291.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(289.03, 291.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef77
    connRef = ConnRef::createConnRef(router, 77).get();
    srcPt = ConnEnd(Point(23.5688, 291.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(146.696, 291.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef78
    connRef = ConnRef::createConnRef(router, 78).get();
    srcPt = ConnEnd(Point(609.052, 611.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(289.03, 461.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef79
    connRef = ConnRef::createConnRef(router, 79).get();
    srcPt = ConnEnd(Point(489.011, 431.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(429.023, 431.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef80
    connRef = ConnRef::createConnRef(router, 80).get();
    srcPt = ConnEnd(Point(489.011, 315.457), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(489.011, 231.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef81
    connRef = ConnRef::createConnRef(router, 81).get();
    srcPt = ConnEnd(Point(229.034, 371.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(169.041, 371.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef82
    connRef = ConnRef::createConnRef(router, 82).get();
    srcPt = ConnEnd(Point(489.011, 431.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(489.011, 315.457), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef83
    connRef = ConnRef::createConnRef(router, 83).get();
    srcPt = ConnEnd(Point(89.0462, 171.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(489.011, 171.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef84
    connRef = ConnRef::createConnRef(router, 84).get();
    srcPt = ConnEnd(Point(229.034, 151.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(229.034, 91.3341), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef85
    connRef = ConnRef::createConnRef(router, 85).get();
    srcPt = ConnEnd(Point(289.03, 91.3341), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(289.03, 291.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef86
    connRef = ConnRef::createConnRef(router, 86).get();
    srcPt = ConnEnd(Point(89.0462, 311.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(89.0462, 171.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef87
    connRef = ConnRef::createConnRef(router, 87).get();
    srcPt = ConnEnd(Point(149.045, 321.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(489.011, 171.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef88
    connRef = ConnRef::createConnRef(router, 88).get();
    srcPt = ConnEnd(Point(489.011, 315.457), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(609.052, 291.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef89
    connRef = ConnRef::createConnRef(router, 89).get();
    srcPt = ConnEnd(Point(369.024, 195.582), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(369.024, 51.3341), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef90
    connRef = ConnRef::createConnRef(router, 90).get();
    srcPt = ConnEnd(Point(289.03, 461.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(289.03, 371.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef91
    connRef = ConnRef::createConnRef(router, 91).get();
    srcPt = ConnEnd(Point(296.314, 491.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(429.023, 491.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef92
    connRef = ConnRef::createConnRef(router, 92).get();
    srcPt = ConnEnd(Point(369.034, 611.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(369.034, 551.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef93
    connRef = ConnRef::createConnRef(router, 93).get();
    srcPt = ConnEnd(Point(609.052, 291.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(549.011, 291.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef94
    connRef = ConnRef::createConnRef(router, 94).get();
    srcPt = ConnEnd(Point(579.023, 431.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(579.023, 358.278), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef95
    connRef = ConnRef::createConnRef(router, 95).get();
    srcPt = ConnEnd(Point(549.011, 231.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(549.011, 291.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef96
    connRef = ConnRef::createConnRef(router, 96).get();
    srcPt = ConnEnd(Point(579.052, 195.582), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(549.011, 291.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef97
    connRef = ConnRef::createConnRef(router, 97).get();
    srcPt = ConnEnd(Point(489.011, 231.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(549.011, 231.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef98
    connRef = ConnRef::createConnRef(router, 98).get();
    srcPt = ConnEnd(Point(549.011, 291.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(289.03, 291.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef99
    connRef = ConnRef::createConnRef(router, 99).get();
    srcPt = ConnEnd(Point(149.045, 401.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(269.052, 401.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef100
    connRef = ConnRef::createConnRef(router, 100).get();
    srcPt = ConnEnd(Point(579.023, 431.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(489.011, 431.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef101
    connRef = ConnRef::createConnRef(router, 101).get();
    srcPt = ConnEnd(Point(229.034, 454.168), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(229.034, 371.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef102
    connRef = ConnRef::createConnRef(router, 102).get();
    srcPt = ConnEnd(Point(489.011, 111.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(489.011, 171.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef103
    connRef = ConnRef::createConnRef(router, 103).get();
    srcPt = ConnEnd(Point(369.024, 315.457), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(489.011, 315.457), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef104
    connRef = ConnRef::createConnRef(router, 104).get();
    srcPt = ConnEnd(Point(349.035, 371.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(489.011, 111.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef105
    connRef = ConnRef::createConnRef(router, 105).get();
    srcPt = ConnEnd(Point(429.023, 431.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(289.03, 291.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef106
    connRef = ConnRef::createConnRef(router, 106).get();
    srcPt = ConnEnd(Point(269.039, 231.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(349.035, 371.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef107
    connRef = ConnRef::createConnRef(router, 107).get();
    srcPt = ConnEnd(Point(289.03, 371.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(349.035, 371.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef108
    connRef = ConnRef::createConnRef(router, 108).get();
    srcPt = ConnEnd(Point(579.023, 358.278), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(549.011, 291.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef109
    connRef = ConnRef::createConnRef(router, 109).get();
    srcPt = ConnEnd(Point(429.023, 431.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(369.024, 431.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef110
    connRef = ConnRef::createConnRef(router, 110).get();
    srcPt = ConnEnd(Point(369.024, 51.3341), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(489.011, 51.3341), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef111
    connRef = ConnRef::createConnRef(router, 111).get();
    srcPt = ConnEnd(Point(296.314, 491.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(169.041, 491.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef112
    connRef = ConnRef::createConnRef(router, 112).get();
    srcPt = ConnEnd(Point(349.035, 151.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(349.035, 371.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef113
    connRef = ConnRef::createConnRef(router, 113).get();
    srcPt = ConnEnd(Point(229.034, 311.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(229.034, 371.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef114
    connRef = ConnRef::createConnRef(router, 114).get();
    srcPt = ConnEnd(Point(269.039, 327.99), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(169.041, 431.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef115
    connRef = ConnRef::createConnRef(router, 115).get();
    srcPt = ConnEnd(Point(369.034, 551.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(229.034, 371.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef116
    connRef = ConnRef::createConnRef(router, 116).get();
    srcPt = ConnEnd(Point(429.023, 491.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(429.023, 431.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef117
    connRef = ConnRef::createConnRef(router, 117).get();
    srcPt = ConnEnd(Point(89.0462, 401.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(149.045, 401.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef118
    connRef = ConnRef::createConnRef(router, 118).get();
    srcPt = ConnEnd(Point(349.035, 151.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(229.034, 151.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef119
    connRef = ConnRef::createConnRef(router, 119).get();
    srcPt = ConnEnd(Point(549.011, 401.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(549.011, 611.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef120
    connRef = ConnRef::createConnRef(router, 120).get();
    srcPt = ConnEnd(Point(369.024, 195.582), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(579.052, 195.582), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef121
    connRef = ConnRef::createConnRef(router, 121).get();
    srcPt = ConnEnd(Point(269.039, 327.99), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(269.039, 231.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef122
    connRef = ConnRef::createConnRef(router, 122).get();
    srcPt = ConnEnd(Point(169.041, 431.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(169.041, 371.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef123
    connRef = ConnRef::createConnRef(router, 123).get();
    srcPt = ConnEnd(Point(369.024, 431.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(169.041, 431.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef124
    connRef = ConnRef::createConnRef(router, 124).get();
    srcPt = ConnEnd(Point(229.034, 151.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(229.034, 311.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef125
    connRef = ConnRef::createConnRef(router, 125).get();
    srcPt = ConnEnd(Point(549.011, 401.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(269.052, 401.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef126
    connRef = ConnRef::createConnRef(router, 126).get();
    srcPt = ConnEnd(Point(549.011, 401.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(549.011, 291.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

    // connRef127
    connRef = ConnRef::createConnRef(router, 127).get();
    srcPt = ConnEnd(Point(269.052, 401.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(289.03, 291.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);

#define EDGE128
#ifdef EDGE128
    // connRef128
    connRef = ConnRef::createConnRef(router, 128).get();
    srcPt = ConnEnd(Point(289.03, 291.334), 15);
    connRef->setSourceEndpoint(srcPt);
    dstPt = ConnEnd(Point(289.03, 371.334), 15);
    connRef->setDestEndpoint(dstPt);
    connRef->setRoutingType((ConnType)2);
#endif

    router->processTransaction();
    router->outputDiagram("output/hola01");
    delete router;
    return 0;
};

