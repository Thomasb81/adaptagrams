// Test case that triggers the orderSwapped after a second call 
// to the PtOrder::addPoints method.

#include "libavoid/libavoid.h"
using namespace Avoid;
int main(void) {
    Router *router = new Router(
            PolyLineRouting | OrthogonalRouting);
    router->setRoutingPenalty((PenaltyType)0, 50);
    router->setRoutingPenalty((PenaltyType)1, 0);
    router->setRoutingPenalty((PenaltyType)2, 0);
    router->setRoutingPenalty((PenaltyType)3, 4000);
    router->setRoutingPenalty((PenaltyType)4, 0);

    Polygon poly73(4);
    poly73.ps[0] = Point(232, 362);
    poly73.ps[1] = Point(232, 402);
    poly73.ps[2] = Point(192, 402);
    poly73.ps[3] = Point(192, 362);
    ShapeRef::createShapeRef(router, poly73, 73);
    
    Polygon poly74(4);
    poly74.ps[0] = Point(125, 362);
    poly74.ps[1] = Point(125, 402);
    poly74.ps[2] = Point(85, 402);
    poly74.ps[3] = Point(85, 362);
    ShapeRef::createShapeRef(router, poly74, 74);
    
    Polygon poly75(4);
    poly75.ps[0] = Point(77.5, 716);
    poly75.ps[1] = Point(77.5, 880);
    poly75.ps[2] = Point(20.5, 880);
    poly75.ps[3] = Point(20.5, 716);
    ShapeRef::createShapeRef(router, poly75, 75);
    
    Polygon poly76(4);
    poly76.ps[0] = Point(187, 713);
    poly76.ps[1] = Point(187, 733);
    poly76.ps[2] = Point(167, 733);
    poly76.ps[3] = Point(167, 713);
    ShapeRef::createShapeRef(router, poly76, 76);
    
    Polygon poly77(4);
    poly77.ps[0] = Point(139, 714);
    poly77.ps[1] = Point(139, 754);
    poly77.ps[2] = Point(99, 754);
    poly77.ps[3] = Point(99, 714);
    ShapeRef::createShapeRef(router, poly77, 77);
    
    Polygon poly78(4);
    poly78.ps[0] = Point(422, 951);
    poly78.ps[1] = Point(422, 971);
    poly78.ps[2] = Point(402, 971);
    poly78.ps[3] = Point(402, 951);
    ShapeRef::createShapeRef(router, poly78, 78);
    
    Polygon poly79(4);
    poly79.ps[0] = Point(187, 734);
    poly79.ps[1] = Point(187, 754);
    poly79.ps[2] = Point(167, 754);
    poly79.ps[3] = Point(167, 734);
    ShapeRef::createShapeRef(router, poly79, 79);
    
    Polygon poly80(4);
    poly80.ps[0] = Point(470, 951);
    poly80.ps[1] = Point(470, 971);
    poly80.ps[2] = Point(450, 971);
    poly80.ps[3] = Point(450, 951);
    ShapeRef::createShapeRef(router, poly80, 80);
    
    Polygon poly81(4);
    poly81.ps[0] = Point(669.5, 899.5);
    poly81.ps[1] = Point(669.5, 934.5);
    poly81.ps[2] = Point(532.5, 934.5);
    poly81.ps[3] = Point(532.5, 899.5);
    ShapeRef::createShapeRef(router, poly81, 81);
    
    Polygon poly82(4);
    poly82.ps[0] = Point(491, 471);
    poly82.ps[1] = Point(491, 491);
    poly82.ps[2] = Point(471, 491);
    poly82.ps[3] = Point(471, 471);
    ShapeRef::createShapeRef(router, poly82, 82);
    
    Polygon poly83(4);
    poly83.ps[0] = Point(565, 512);
    poly83.ps[1] = Point(565, 532);
    poly83.ps[2] = Point(545, 532);
    poly83.ps[3] = Point(545, 512);
    ShapeRef::createShapeRef(router, poly83, 83);
    
    Polygon poly84(4);
    poly84.ps[0] = Point(538, 531);
    poly84.ps[1] = Point(538, 551);
    poly84.ps[2] = Point(518, 551);
    poly84.ps[3] = Point(518, 531);
    ShapeRef::createShapeRef(router, poly84, 84);
    
    Polygon poly85(4);
    poly85.ps[0] = Point(272, 782);
    poly85.ps[1] = Point(272, 802);
    poly85.ps[2] = Point(252, 802);
    poly85.ps[3] = Point(252, 782);
    ShapeRef::createShapeRef(router, poly85, 85);
    
    Polygon poly86(4);
    poly86.ps[0] = Point(515, 512);
    poly86.ps[1] = Point(515, 532);
    poly86.ps[2] = Point(495, 532);
    poly86.ps[3] = Point(495, 512);
    ShapeRef::createShapeRef(router, poly86, 86);
    
    Polygon poly87(4);
    poly87.ps[0] = Point(391, 534);
    poly87.ps[1] = Point(391, 574);
    poly87.ps[2] = Point(351, 574);
    poly87.ps[3] = Point(351, 534);
    ShapeRef::createShapeRef(router, poly87, 87);
    
    Polygon poly88(4);
    poly88.ps[0] = Point(420, 573);
    poly88.ps[1] = Point(420, 593);
    poly88.ps[2] = Point(400, 593);
    poly88.ps[3] = Point(400, 573);
    ShapeRef::createShapeRef(router, poly88, 88);
    
    Polygon poly89(4);
    poly89.ps[0] = Point(421, 509);
    poly89.ps[1] = Point(421, 529);
    poly89.ps[2] = Point(401, 529);
    poly89.ps[3] = Point(401, 509);
    ShapeRef::createShapeRef(router, poly89, 89);
    
    Polygon poly90(4);
    poly90.ps[0] = Point(476, 426);
    poly90.ps[1] = Point(476, 466);
    poly90.ps[2] = Point(436, 466);
    poly90.ps[3] = Point(436, 426);
    ShapeRef::createShapeRef(router, poly90, 90);
    
    Polygon poly91(4);
    poly91.ps[0] = Point(290, 970);
    poly91.ps[1] = Point(290, 1010);
    poly91.ps[2] = Point(234, 1010);
    poly91.ps[3] = Point(234, 970);
    ShapeRef::createShapeRef(router, poly91, 91);
    
    Polygon poly92(4);
    poly92.ps[0] = Point(77, 888);
    poly92.ps[1] = Point(77, 928);
    poly92.ps[2] = Point(21, 928);
    poly92.ps[3] = Point(21, 888);
    ShapeRef::createShapeRef(router, poly92, 92);
    
    Polygon poly93(4);
    poly93.ps[0] = Point(360, 991);
    poly93.ps[1] = Point(360, 1031);
    poly93.ps[2] = Point(304, 1031);
    poly93.ps[3] = Point(304, 991);
    ShapeRef::createShapeRef(router, poly93, 93);
    
    Polygon poly94(4);
    poly94.ps[0] = Point(449, 889);
    poly94.ps[1] = Point(449, 929);
    poly94.ps[2] = Point(393, 929);
    poly94.ps[3] = Point(393, 889);
    ShapeRef::createShapeRef(router, poly94, 94);
    
    Polygon poly95(4);
    poly95.ps[0] = Point(488, 970);
    poly95.ps[1] = Point(488, 1010);
    poly95.ps[2] = Point(432, 1010);
    poly95.ps[3] = Point(432, 970);
    ShapeRef::createShapeRef(router, poly95, 95);
    
    Polygon poly96(4);
    poly96.ps[0] = Point(440, 970);
    poly96.ps[1] = Point(440, 1010);
    poly96.ps[2] = Point(384, 1010);
    poly96.ps[3] = Point(384, 970);
    ShapeRef::createShapeRef(router, poly96, 96);
    
    Polygon poly97(4);
    poly97.ps[0] = Point(432, 801);
    poly97.ps[1] = Point(432, 841);
    poly97.ps[2] = Point(376, 841);
    poly97.ps[3] = Point(376, 801);
    ShapeRef::createShapeRef(router, poly97, 97);
    
    Polygon poly98(4);
    poly98.ps[0] = Point(502, 780);
    poly98.ps[1] = Point(502, 820);
    poly98.ps[2] = Point(446, 820);
    poly98.ps[3] = Point(446, 780);
    ShapeRef::createShapeRef(router, poly98, 98);
    
    Polygon poly99(4);
    poly99.ps[0] = Point(320, 792);
    poly99.ps[1] = Point(320, 832);
    poly99.ps[2] = Point(264, 832);
    poly99.ps[3] = Point(264, 792);
    ShapeRef::createShapeRef(router, poly99, 99);
    
    Polygon poly100(4);
    poly100.ps[0] = Point(211, 792);
    poly100.ps[1] = Point(211, 832);
    poly100.ps[2] = Point(155, 832);
    poly100.ps[3] = Point(155, 792);
    ShapeRef::createShapeRef(router, poly100, 100);
    
    Polygon poly101(4);
    poly101.ps[0] = Point(559, 791);
    poly101.ps[1] = Point(559, 831);
    poly101.ps[2] = Point(503, 831);
    poly101.ps[3] = Point(503, 791);
    ShapeRef::createShapeRef(router, poly101, 101);
    
    Polygon poly102(4);
    poly102.ps[0] = Point(554, 747);
    poly102.ps[1] = Point(554, 787);
    poly102.ps[2] = Point(498, 787);
    poly102.ps[3] = Point(498, 747);
    ShapeRef::createShapeRef(router, poly102, 102);
    
    Polygon poly103(4);
    poly103.ps[0] = Point(554, 678);
    poly103.ps[1] = Point(554, 718);
    poly103.ps[2] = Point(498, 718);
    poly103.ps[3] = Point(498, 678);
    ShapeRef::createShapeRef(router, poly103, 103);
    
    Polygon poly104(4);
    poly104.ps[0] = Point(555, 606);
    poly104.ps[1] = Point(555, 646);
    poly104.ps[2] = Point(499, 646);
    poly104.ps[3] = Point(499, 606);
    ShapeRef::createShapeRef(router, poly104, 104);
    
    Polygon poly105(4);
    poly105.ps[0] = Point(389, 461);
    poly105.ps[1] = Point(389, 501);
    poly105.ps[2] = Point(333, 501);
    poly105.ps[3] = Point(333, 461);
    ShapeRef::createShapeRef(router, poly105, 105);
    
    Polygon poly106(4);
    poly106.ps[0] = Point(404, 377);
    poly106.ps[1] = Point(404, 417);
    poly106.ps[2] = Point(348, 417);
    poly106.ps[3] = Point(348, 377);
    ShapeRef::createShapeRef(router, poly106, 106);
    
    Polygon poly107(4);
    poly107.ps[0] = Point(554, 381);
    poly107.ps[1] = Point(554, 421);
    poly107.ps[2] = Point(498, 421);
    poly107.ps[3] = Point(498, 381);
    ShapeRef::createShapeRef(router, poly107, 107);
    
    Polygon poly108(4);
    poly108.ps[0] = Point(554, 315);
    poly108.ps[1] = Point(554, 355);
    poly108.ps[2] = Point(498, 355);
    poly108.ps[3] = Point(498, 315);
    ShapeRef::createShapeRef(router, poly108, 108);
    
    Polygon poly109(4);
    poly109.ps[0] = Point(431, 265);
    poly109.ps[1] = Point(431, 305);
    poly109.ps[2] = Point(375, 305);
    poly109.ps[3] = Point(375, 265);
    ShapeRef::createShapeRef(router, poly109, 109);
    
    Polygon poly110(4);
    poly110.ps[0] = Point(553, 122);
    poly110.ps[1] = Point(553, 162);
    poly110.ps[2] = Point(497, 162);
    poly110.ps[3] = Point(497, 122);
    ShapeRef::createShapeRef(router, poly110, 110);
    
    Polygon poly111(4);
    poly111.ps[0] = Point(554, 245);
    poly111.ps[1] = Point(554, 285);
    poly111.ps[2] = Point(498, 285);
    poly111.ps[3] = Point(498, 245);
    ShapeRef::createShapeRef(router, poly111, 111);
    
    Polygon poly112(4);
    poly112.ps[0] = Point(414, 150);
    poly112.ps[1] = Point(414, 190);
    poly112.ps[2] = Point(358, 190);
    poly112.ps[3] = Point(358, 150);
    ShapeRef::createShapeRef(router, poly112, 112);
    
    Polygon poly113(4);
    poly113.ps[0] = Point(404, 229);
    poly113.ps[1] = Point(404, 269);
    poly113.ps[2] = Point(348, 269);
    poly113.ps[3] = Point(348, 229);
    ShapeRef::createShapeRef(router, poly113, 113);
    
    Polygon poly114(4);
    poly114.ps[0] = Point(319, 310);
    poly114.ps[1] = Point(319, 350);
    poly114.ps[2] = Point(263, 350);
    poly114.ps[3] = Point(263, 310);
    ShapeRef::createShapeRef(router, poly114, 114);
    
    Polygon poly115(4);
    poly115.ps[0] = Point(249, 229);
    poly115.ps[1] = Point(249, 269);
    poly115.ps[2] = Point(193, 269);
    poly115.ps[3] = Point(193, 229);
    ShapeRef::createShapeRef(router, poly115, 115);
    
    Polygon poly116(4);
    poly116.ps[0] = Point(358, 196);
    poly116.ps[1] = Point(358, 236);
    poly116.ps[2] = Point(302, 236);
    poly116.ps[3] = Point(302, 196);
    ShapeRef::createShapeRef(router, poly116, 116);
    
    Polygon poly117(4);
    poly117.ps[0] = Point(308, 196);
    poly117.ps[1] = Point(308, 236);
    poly117.ps[2] = Point(252, 236);
    poly117.ps[3] = Point(252, 196);
    ShapeRef::createShapeRef(router, poly117, 117);
    
    Polygon poly118(4);
    poly118.ps[0] = Point(112, 241);
    poly118.ps[1] = Point(112, 281);
    poly118.ps[2] = Point(56, 281);
    poly118.ps[3] = Point(56, 241);
    ShapeRef::createShapeRef(router, poly118, 118);
    
    Polygon poly119(4);
    poly119.ps[0] = Point(249, 154);
    poly119.ps[1] = Point(249, 194);
    poly119.ps[2] = Point(193, 194);
    poly119.ps[3] = Point(193, 154);
    ShapeRef::createShapeRef(router, poly119, 119);
    
    Polygon poly120(4);
    poly120.ps[0] = Point(249, 135);
    poly120.ps[1] = Point(249, 175);
    poly120.ps[2] = Point(193, 175);
    poly120.ps[3] = Point(193, 135);
    ShapeRef::createShapeRef(router, poly120, 120);
    
    Polygon poly121(4);
    poly121.ps[0] = Point(317, 113);
    poly121.ps[1] = Point(317, 153);
    poly121.ps[2] = Point(261, 153);
    poly121.ps[3] = Point(261, 113);
    ShapeRef::createShapeRef(router, poly121, 121);
    
    Polygon poly122(4);
    poly122.ps[0] = Point(344, 81);
    poly122.ps[1] = Point(344, 121);
    poly122.ps[2] = Point(288, 121);
    poly122.ps[3] = Point(288, 81);
    ShapeRef::createShapeRef(router, poly122, 122);
    
    Polygon poly123(4);
    poly123.ps[0] = Point(344, 160);
    poly123.ps[1] = Point(344, 200);
    poly123.ps[2] = Point(288, 200);
    poly123.ps[3] = Point(288, 160);
    ShapeRef::createShapeRef(router, poly123, 123);
    
    Polygon poly124(4);
    poly124.ps[0] = Point(263, 835);
    poly124.ps[1] = Point(263, 875);
    poly124.ps[2] = Point(207, 875);
    poly124.ps[3] = Point(207, 835);
    ShapeRef::createShapeRef(router, poly124, 124);
    
    Polygon poly125(4);
    poly125.ps[0] = Point(554, 533);
    poly125.ps[1] = Point(554, 573);
    poly125.ps[2] = Point(498, 573);
    poly125.ps[3] = Point(498, 533);
    ShapeRef::createShapeRef(router, poly125, 125);
    
    Polygon poly126(4);
    poly126.ps[0] = Point(249, 173);
    poly126.ps[1] = Point(249, 213);
    poly126.ps[2] = Point(193, 213);
    poly126.ps[3] = Point(193, 173);
    ShapeRef::createShapeRef(router, poly126, 126);
    
    Polygon poly127(4);
    poly127.ps[0] = Point(319, 248);
    poly127.ps[1] = Point(319, 288);
    poly127.ps[2] = Point(263, 288);
    poly127.ps[3] = Point(263, 248);
    ShapeRef::createShapeRef(router, poly127, 127);
    
    Polygon poly128(4);
    poly128.ps[0] = Point(182, 287);
    poly128.ps[1] = Point(182, 327);
    poly128.ps[2] = Point(126, 327);
    poly128.ps[3] = Point(126, 287);
    ShapeRef::createShapeRef(router, poly128, 128);
    
    Polygon poly129(4);
    poly129.ps[0] = Point(182, 413);
    poly129.ps[1] = Point(182, 453);
    poly129.ps[2] = Point(126, 453);
    poly129.ps[3] = Point(126, 413);
    ShapeRef::createShapeRef(router, poly129, 129);
    
    Polygon poly130(4);
    poly130.ps[0] = Point(292, 286);
    poly130.ps[1] = Point(292, 326);
    poly130.ps[2] = Point(236, 326);
    poly130.ps[3] = Point(236, 286);
    ShapeRef::createShapeRef(router, poly130, 130);
    
    Polygon poly131(4);
    poly131.ps[0] = Point(292, 412);
    poly131.ps[1] = Point(292, 452);
    poly131.ps[2] = Point(236, 452);
    poly131.ps[3] = Point(236, 412);
    ShapeRef::createShapeRef(router, poly131, 131);
    
    Polygon poly132(4);
    poly132.ps[0] = Point(205, 653);
    poly132.ps[1] = Point(205, 693);
    poly132.ps[2] = Point(149, 693);
    poly132.ps[3] = Point(149, 653);
    ShapeRef::createShapeRef(router, poly132, 132);
    
    Polygon poly133(4);
    poly133.ps[0] = Point(510, 891);
    poly133.ps[1] = Point(510, 931);
    poly133.ps[2] = Point(454, 931);
    poly133.ps[3] = Point(454, 891);
    ShapeRef::createShapeRef(router, poly133, 133);
    
    Polygon poly134(4);
    poly134.ps[0] = Point(275, 674);
    poly134.ps[1] = Point(275, 714);
    poly134.ps[2] = Point(219, 714);
    poly134.ps[3] = Point(219, 674);
    ShapeRef::createShapeRef(router, poly134, 134);
    
    Polygon poly135(4);
    poly135.ps[0] = Point(488, 891);
    poly135.ps[1] = Point(488, 931);
    poly135.ps[2] = Point(432, 931);
    poly135.ps[3] = Point(432, 891);
    ShapeRef::createShapeRef(router, poly135, 135);
    
    Polygon poly136(4);
    poly136.ps[0] = Point(579, 461);
    poly136.ps[1] = Point(579, 501);
    poly136.ps[2] = Point(523, 501);
    poly136.ps[3] = Point(523, 461);
    ShapeRef::createShapeRef(router, poly136, 136);
    
    Polygon poly137(4);
    poly137.ps[0] = Point(583, 452);
    poly137.ps[1] = Point(583, 492);
    poly137.ps[2] = Point(527, 492);
    poly137.ps[3] = Point(527, 452);
    ShapeRef::createShapeRef(router, poly137, 137);
    
    Polygon poly138(4);
    poly138.ps[0] = Point(556, 571);
    poly138.ps[1] = Point(556, 611);
    poly138.ps[2] = Point(500, 611);
    poly138.ps[3] = Point(500, 571);
    ShapeRef::createShapeRef(router, poly138, 138);
    
    Polygon poly139(4);
    poly139.ps[0] = Point(290, 722);
    poly139.ps[1] = Point(290, 762);
    poly139.ps[2] = Point(234, 762);
    poly139.ps[3] = Point(234, 722);
    ShapeRef::createShapeRef(router, poly139, 139);
    
    Polygon poly140(4);
    poly140.ps[0] = Point(603, 502);
    poly140.ps[1] = Point(603, 542);
    poly140.ps[2] = Point(547, 542);
    poly140.ps[3] = Point(547, 502);
    ShapeRef::createShapeRef(router, poly140, 140);
    
    Polygon poly141(4);
    poly141.ps[0] = Point(438, 613);
    poly141.ps[1] = Point(438, 653);
    poly141.ps[2] = Point(382, 653);
    poly141.ps[3] = Point(382, 613);
    ShapeRef::createShapeRef(router, poly141, 141);
    
    Polygon poly142(4);
    poly142.ps[0] = Point(439, 449);
    poly142.ps[1] = Point(439, 489);
    poly142.ps[2] = Point(383, 489);
    poly142.ps[3] = Point(383, 449);
    ShapeRef::createShapeRef(router, poly142, 142);
    
    ConnRef *connRef143 = ConnRef::createConnRef(router, 143).get();
    ConnEnd srcPt143(Point(262, 940), 15);
    connRef143->setSourceEndpoint(srcPt143);
    ConnEnd dstPt143(Point(119, 951), 15);
    connRef143->setDestEndpoint(dstPt143);
    connRef143->setRoutingType((ConnType)2);

    ConnRef *connRef144 = ConnRef::createConnRef(router, 144).get();
    ConnEnd srcPt144(Point(262, 940), 15);
    connRef144->setSourceEndpoint(srcPt144);
    ConnEnd dstPt144(Point(351, 951), 15);
    connRef144->setDestEndpoint(dstPt144);
    connRef144->setRoutingType((ConnType)2);

    ConnRef *connRef145 = ConnRef::createConnRef(router, 145).get();
    ConnEnd srcPt145(Point(119, 908), 15);
    connRef145->setSourceEndpoint(srcPt145);
    ConnEnd dstPt145(Point(119, 951), 15);
    connRef145->setDestEndpoint(dstPt145);
    connRef145->setRoutingType((ConnType)2);

    ConnRef *connRef146 = ConnRef::createConnRef(router, 146).get();
    ConnEnd srcPt146(Point(119, 908), 15);
    connRef146->setSourceEndpoint(srcPt146);
    ConnEnd dstPt146(Point(119, 861), 15);
    connRef146->setDestEndpoint(dstPt146);
    connRef146->setRoutingType((ConnType)2);

    ConnRef *connRef147 = ConnRef::createConnRef(router, 147).get();
    ConnEnd srcPt147(Point(262, 961), 15);
    connRef147->setSourceEndpoint(srcPt147);
    ConnEnd dstPt147(Point(119, 951), 15);
    connRef147->setDestEndpoint(dstPt147);
    connRef147->setRoutingType((ConnType)2);

    ConnRef *connRef148 = ConnRef::createConnRef(router, 148).get();
    ConnEnd srcPt148(Point(262, 961), 15);
    connRef148->setSourceEndpoint(srcPt148);
    ConnEnd dstPt148(Point(351, 951), 15);
    connRef148->setDestEndpoint(dstPt148);
    connRef148->setRoutingType((ConnType)2);

    ConnRef *connRef149 = ConnRef::createConnRef(router, 149).get();
    ConnEnd srcPt149(Point(629, 336), 15);
    connRef149->setSourceEndpoint(srcPt149);
    ConnEnd dstPt149(Point(456, 446), 15);
    connRef149->setDestEndpoint(dstPt149);
    connRef149->setRoutingType((ConnType)2);

    ConnRef *connRef150 = ConnRef::createConnRef(router, 150).get();
    ConnEnd srcPt150(Point(351, 909), 15);
    connRef150->setSourceEndpoint(srcPt150);
    ConnEnd dstPt150(Point(351, 951), 15);
    connRef150->setDestEndpoint(dstPt150);
    connRef150->setRoutingType((ConnType)2);

    ConnRef *connRef151 = ConnRef::createConnRef(router, 151).get();
    ConnEnd srcPt151(Point(460, 940), 15);
    connRef151->setSourceEndpoint(srcPt151);
    ConnEnd dstPt151(Point(351, 951), 15);
    connRef151->setDestEndpoint(dstPt151);
    connRef151->setRoutingType((ConnType)2);

    ConnRef *connRef152 = ConnRef::createConnRef(router, 152).get();
    ConnEnd srcPt152(Point(412, 940), 15);
    connRef152->setSourceEndpoint(srcPt152);
    ConnEnd dstPt152(Point(351, 951), 15);
    connRef152->setDestEndpoint(dstPt152);
    connRef152->setRoutingType((ConnType)2);

    ConnRef *connRef153 = ConnRef::createConnRef(router, 153).get();
    ConnEnd srcPt153(Point(404, 871), 15);
    connRef153->setSourceEndpoint(srcPt153);
    ConnEnd dstPt153(Point(456, 861), 15);
    connRef153->setDestEndpoint(dstPt153);
    connRef153->setRoutingType((ConnType)2);

    ConnRef *connRef154 = ConnRef::createConnRef(router, 154).get();
    ConnEnd srcPt154(Point(404, 871), 15);
    connRef154->setSourceEndpoint(srcPt154);
    ConnEnd dstPt154(Point(351, 861), 15);
    connRef154->setDestEndpoint(dstPt154);
    connRef154->setRoutingType((ConnType)2);

    ConnRef *connRef155 = ConnRef::createConnRef(router, 155).get();
    ConnEnd srcPt155(Point(404, 850), 15);
    connRef155->setSourceEndpoint(srcPt155);
    ConnEnd dstPt155(Point(456, 861), 15);
    connRef155->setDestEndpoint(dstPt155);
    connRef155->setRoutingType((ConnType)2);

    ConnRef *connRef156 = ConnRef::createConnRef(router, 156).get();
    ConnEnd srcPt156(Point(404, 850), 15);
    connRef156->setSourceEndpoint(srcPt156);
    ConnEnd dstPt156(Point(351, 861), 15);
    connRef156->setDestEndpoint(dstPt156);
    connRef156->setRoutingType((ConnType)2);

    ConnRef *connRef157 = ConnRef::createConnRef(router, 157).get();
    ConnEnd srcPt157(Point(292, 862), 15);
    connRef157->setSourceEndpoint(srcPt157);
    ConnEnd dstPt157(Point(287, 904), 15);
    connRef157->setDestEndpoint(dstPt157);
    connRef157->setRoutingType((ConnType)2);

    ConnRef *connRef158 = ConnRef::createConnRef(router, 158).get();
    ConnEnd srcPt158(Point(292, 862), 15);
    connRef158->setSourceEndpoint(srcPt158);
    ConnEnd dstPt158(Point(351, 861), 15);
    connRef158->setDestEndpoint(dstPt158);
    connRef158->setRoutingType((ConnType)2);

    ConnRef *connRef159 = ConnRef::createConnRef(router, 159).get();
    ConnEnd srcPt159(Point(292, 862), 15);
    connRef159->setSourceEndpoint(srcPt159);
    ConnEnd dstPt159(Point(351, 818), 15);
    connRef159->setDestEndpoint(dstPt159);
    connRef159->setRoutingType((ConnType)2);

    ConnRef *connRef160 = ConnRef::createConnRef(router, 160).get();
    ConnEnd srcPt160(Point(292, 862), 15);
    connRef160->setSourceEndpoint(srcPt160);
    ConnEnd dstPt160(Point(238, 861), 15);
    connRef160->setDestEndpoint(dstPt160);
    connRef160->setRoutingType((ConnType)2);

    ConnRef *connRef161 = ConnRef::createConnRef(router, 161).get();
    ConnEnd srcPt161(Point(183, 862), 15);
    connRef161->setSourceEndpoint(srcPt161);
    ConnEnd dstPt161(Point(119, 861), 15);
    connRef161->setDestEndpoint(dstPt161);
    connRef161->setRoutingType((ConnType)2);

    ConnRef *connRef162 = ConnRef::createConnRef(router, 162).get();
    ConnEnd srcPt162(Point(183, 862), 15);
    connRef162->setSourceEndpoint(srcPt162);
    ConnEnd dstPt162(Point(238, 861), 15);
    connRef162->setDestEndpoint(dstPt162);
    connRef162->setRoutingType((ConnType)2);

    ConnRef *connRef163 = ConnRef::createConnRef(router, 163).get();
    ConnEnd srcPt163(Point(183, 862), 15);
    connRef163->setSourceEndpoint(srcPt163);
    ConnEnd dstPt163(Point(185, 904), 15);
    connRef163->setDestEndpoint(dstPt163);
    connRef163->setRoutingType((ConnType)2);

    ConnRef *connRef164 = ConnRef::createConnRef(router, 164).get();
    ConnEnd srcPt164(Point(531, 861), 15);
    connRef164->setSourceEndpoint(srcPt164);
    ConnEnd dstPt164(Point(600, 861), 15);
    connRef164->setDestEndpoint(dstPt164);
    connRef164->setRoutingType((ConnType)2);

    ConnRef *connRef165 = ConnRef::createConnRef(router, 165).get();
    ConnEnd srcPt165(Point(531, 861), 15);
    connRef165->setSourceEndpoint(srcPt165);
    ConnEnd dstPt165(Point(456, 861), 15);
    connRef165->setDestEndpoint(dstPt165);
    connRef165->setRoutingType((ConnType)2);

    ConnRef *connRef166 = ConnRef::createConnRef(router, 166).get();
    ConnEnd srcPt166(Point(456, 767), 15);
    connRef166->setSourceEndpoint(srcPt166);
    ConnEnd dstPt166(Point(456, 734), 15);
    connRef166->setDestEndpoint(dstPt166);
    connRef166->setRoutingType((ConnType)2);

    ConnRef *connRef167 = ConnRef::createConnRef(router, 167).get();
    ConnEnd srcPt167(Point(456, 767), 15);
    connRef167->setSourceEndpoint(srcPt167);
    ConnEnd dstPt167(Point(456, 861), 15);
    connRef167->setDestEndpoint(dstPt167);
    connRef167->setRoutingType((ConnType)2);

    ConnRef *connRef168 = ConnRef::createConnRef(router, 168).get();
    ConnEnd srcPt168(Point(456, 698), 15);
    connRef168->setSourceEndpoint(srcPt168);
    ConnEnd dstPt168(Point(456, 662), 15);
    connRef168->setDestEndpoint(dstPt168);
    connRef168->setRoutingType((ConnType)2);

    ConnRef *connRef169 = ConnRef::createConnRef(router, 169).get();
    ConnEnd srcPt169(Point(456, 698), 15);
    connRef169->setSourceEndpoint(srcPt169);
    ConnEnd dstPt169(Point(456, 734), 15);
    connRef169->setDestEndpoint(dstPt169);
    connRef169->setRoutingType((ConnType)2);

    ConnRef *connRef170 = ConnRef::createConnRef(router, 170).get();
    ConnEnd srcPt170(Point(457, 626), 15);
    connRef170->setSourceEndpoint(srcPt170);
    ConnEnd dstPt170(Point(456, 662), 15);
    connRef170->setDestEndpoint(dstPt170);
    connRef170->setRoutingType((ConnType)2);

    ConnRef *connRef171 = ConnRef::createConnRef(router, 171).get();
    ConnEnd srcPt171(Point(457, 626), 15);
    connRef171->setSourceEndpoint(srcPt171);
    ConnEnd dstPt171(Point(456, 590), 15);
    connRef171->setDestEndpoint(dstPt171);
    connRef171->setRoutingType((ConnType)2);

    ConnRef *connRef172 = ConnRef::createConnRef(router, 172).get();
    ConnEnd srcPt172(Point(431, 481), 15);
    connRef172->setSourceEndpoint(srcPt172);
    ConnEnd dstPt172(Point(456, 518), 15);
    connRef172->setDestEndpoint(dstPt172);
    connRef172->setRoutingType((ConnType)2);

    ConnRef *connRef173 = ConnRef::createConnRef(router, 173).get();
    ConnEnd srcPt173(Point(431, 481), 15);
    connRef173->setSourceEndpoint(srcPt173);
    ConnEnd dstPt173(Point(456, 446), 15);
    connRef173->setDestEndpoint(dstPt173);
    connRef173->setRoutingType((ConnType)2);

    ConnRef *connRef174 = ConnRef::createConnRef(router, 174).get();
    ConnEnd srcPt174(Point(376, 447), 15);
    connRef174->setSourceEndpoint(srcPt174);
    ConnEnd dstPt174(Point(305, 446), 15);
    connRef174->setDestEndpoint(dstPt174);
    connRef174->setRoutingType((ConnType)2);

    ConnRef *connRef175 = ConnRef::createConnRef(router, 175).get();
    ConnEnd srcPt175(Point(376, 447), 15);
    connRef175->setSourceEndpoint(srcPt175);
    ConnEnd dstPt175(Point(456, 446), 15);
    connRef175->setDestEndpoint(dstPt175);
    connRef175->setRoutingType((ConnType)2);

    ConnRef *connRef176 = ConnRef::createConnRef(router, 176).get();
    ConnEnd srcPt176(Point(456, 401), 15);
    connRef176->setSourceEndpoint(srcPt176);
    ConnEnd dstPt176(Point(305, 446), 15);
    connRef176->setDestEndpoint(dstPt176);
    connRef176->setRoutingType((ConnType)2);

    ConnRef *connRef177 = ConnRef::createConnRef(router, 177).get();
    ConnEnd srcPt177(Point(456, 401), 15);
    connRef177->setSourceEndpoint(srcPt177);
    ConnEnd dstPt177(Point(456, 371), 15);
    connRef177->setDestEndpoint(dstPt177);
    connRef177->setRoutingType((ConnType)2);

    ConnRef *connRef178 = ConnRef::createConnRef(router, 178).get();
    ConnEnd srcPt178(Point(456, 401), 15);
    connRef178->setSourceEndpoint(srcPt178);
    ConnEnd dstPt178(Point(456, 446), 15);
    connRef178->setDestEndpoint(dstPt178);
    connRef178->setRoutingType((ConnType)2);

    ConnRef *connRef179 = ConnRef::createConnRef(router, 179).get();
    ConnEnd srcPt179(Point(456, 335), 15);
    connRef179->setSourceEndpoint(srcPt179);
    ConnEnd dstPt179(Point(456, 301), 15);
    connRef179->setDestEndpoint(dstPt179);
    connRef179->setRoutingType((ConnType)2);

    ConnRef *connRef180 = ConnRef::createConnRef(router, 180).get();
    ConnEnd srcPt180(Point(456, 335), 15);
    connRef180->setSourceEndpoint(srcPt180);
    ConnEnd dstPt180(Point(456, 371), 15);
    connRef180->setDestEndpoint(dstPt180);
    connRef180->setRoutingType((ConnType)2);

    ConnRef *connRef181 = ConnRef::createConnRef(router, 181).get();
    ConnEnd srcPt181(Point(403, 335), 15);
    connRef181->setSourceEndpoint(srcPt181);
    ConnEnd dstPt181(Point(456, 301), 15);
    connRef181->setDestEndpoint(dstPt181);
    connRef181->setRoutingType((ConnType)2);

    ConnRef *connRef182 = ConnRef::createConnRef(router, 182).get();
    ConnEnd srcPt182(Point(525, 192), 15);
    connRef182->setSourceEndpoint(srcPt182);
    ConnEnd dstPt182(Point(456, 228), 15);
    connRef182->setDestEndpoint(dstPt182);
    connRef182->setRoutingType((ConnType)2);

    ConnRef *connRef183 = ConnRef::createConnRef(router, 183).get();
    ConnEnd srcPt183(Point(456, 265), 15);
    connRef183->setSourceEndpoint(srcPt183);
    ConnEnd dstPt183(Point(456, 228), 15);
    connRef183->setDestEndpoint(dstPt183);
    connRef183->setRoutingType((ConnType)2);

    ConnRef *connRef184 = ConnRef::createConnRef(router, 184).get();
    ConnEnd srcPt184(Point(456, 265), 15);
    connRef184->setSourceEndpoint(srcPt184);
    ConnEnd dstPt184(Point(456, 301), 15);
    connRef184->setDestEndpoint(dstPt184);
    connRef184->setRoutingType((ConnType)2);

    ConnRef *connRef185 = ConnRef::createConnRef(router, 185).get();
    ConnEnd srcPt185(Point(456, 170), 15);
    connRef185->setSourceEndpoint(srcPt185);
    ConnEnd dstPt185(Point(456, 141), 15);
    connRef185->setDestEndpoint(dstPt185);
    connRef185->setRoutingType((ConnType)2);

    ConnRef *connRef186 = ConnRef::createConnRef(router, 186).get();
    ConnEnd srcPt186(Point(456, 170), 15);
    connRef186->setSourceEndpoint(srcPt186);
    ConnEnd dstPt186(Point(456, 228), 15);
    connRef186->setDestEndpoint(dstPt186);
    connRef186->setRoutingType((ConnType)2);

    ConnRef *connRef187 = ConnRef::createConnRef(router, 187).get();
    ConnEnd srcPt187(Point(376, 299), 15);
    connRef187->setSourceEndpoint(srcPt187);
    ConnEnd dstPt187(Point(305, 299), 15);
    connRef187->setDestEndpoint(dstPt187);
    connRef187->setRoutingType((ConnType)2);

    ConnRef *connRef188 = ConnRef::createConnRef(router, 188).get();
    ConnEnd srcPt188(Point(376, 299), 15);
    connRef188->setSourceEndpoint(srcPt188);
    ConnEnd dstPt188(Point(456, 301), 15);
    connRef188->setDestEndpoint(dstPt188);
    connRef188->setRoutingType((ConnType)2);

    ConnRef *connRef189 = ConnRef::createConnRef(router, 189).get();
    ConnEnd srcPt189(Point(221, 280), 15);
    connRef189->setSourceEndpoint(srcPt189);
    ConnEnd dstPt189(Point(154, 299), 15);
    connRef189->setDestEndpoint(dstPt189);
    connRef189->setRoutingType((ConnType)2);

    ConnRef *connRef190 = ConnRef::createConnRef(router, 190).get();
    ConnEnd srcPt190(Point(221, 280), 15);
    connRef190->setSourceEndpoint(srcPt190);
    ConnEnd dstPt190(Point(305, 299), 15);
    connRef190->setDestEndpoint(dstPt190);
    connRef190->setRoutingType((ConnType)2);

    ConnRef *connRef191 = ConnRef::createConnRef(router, 191).get();
    ConnEnd srcPt191(Point(221, 299), 15);
    connRef191->setSourceEndpoint(srcPt191);
    ConnEnd dstPt191(Point(154, 299), 15);
    connRef191->setDestEndpoint(dstPt191);
    connRef191->setRoutingType((ConnType)2);

    ConnRef *connRef192 = ConnRef::createConnRef(router, 192).get();
    ConnEnd srcPt192(Point(221, 299), 15);
    connRef192->setSourceEndpoint(srcPt192);
    ConnEnd dstPt192(Point(305, 299), 15);
    connRef192->setDestEndpoint(dstPt192);
    connRef192->setRoutingType((ConnType)2);

    ConnRef *connRef193 = ConnRef::createConnRef(router, 193).get();
    ConnEnd srcPt193(Point(330, 266), 15);
    connRef193->setSourceEndpoint(srcPt193);
    ConnEnd dstPt193(Point(305, 299), 15);
    connRef193->setDestEndpoint(dstPt193);
    connRef193->setRoutingType((ConnType)2);

    ConnRef *connRef194 = ConnRef::createConnRef(router, 194).get();
    ConnEnd srcPt194(Point(330, 266), 15);
    connRef194->setSourceEndpoint(srcPt194);
    ConnEnd dstPt194(Point(456, 228), 15);
    connRef194->setDestEndpoint(dstPt194);
    connRef194->setRoutingType((ConnType)2);

    ConnRef *connRef195 = ConnRef::createConnRef(router, 195).get();
    ConnEnd srcPt195(Point(280, 266), 15);
    connRef195->setSourceEndpoint(srcPt195);
    ConnEnd dstPt195(Point(305, 299), 15);
    connRef195->setDestEndpoint(dstPt195);
    connRef195->setRoutingType((ConnType)2);

    ConnRef *connRef196 = ConnRef::createConnRef(router, 196).get();
    ConnEnd srcPt196(Point(280, 266), 15);
    connRef196->setSourceEndpoint(srcPt196);
    ConnEnd dstPt196(Point(456, 228), 15);
    connRef196->setDestEndpoint(dstPt196);
    connRef196->setRoutingType((ConnType)2);

    ConnRef *connRef197 = ConnRef::createConnRef(router, 197).get();
    ConnEnd srcPt197(Point(154, 261), 15);
    connRef197->setSourceEndpoint(srcPt197);
    ConnEnd dstPt197(Point(154, 226), 15);
    connRef197->setDestEndpoint(dstPt197);
    connRef197->setRoutingType((ConnType)2);

    ConnRef *connRef198 = ConnRef::createConnRef(router, 198).get();
    ConnEnd srcPt198(Point(154, 261), 15);
    connRef198->setSourceEndpoint(srcPt198);
    ConnEnd dstPt198(Point(154, 299), 15);
    connRef198->setDestEndpoint(dstPt198);
    connRef198->setRoutingType((ConnType)2);

    ConnRef *connRef199 = ConnRef::createConnRef(router, 199).get();
    ConnEnd srcPt199(Point(221, 224), 15);
    connRef199->setSourceEndpoint(srcPt199);
    ConnEnd dstPt199(Point(154, 226), 15);
    connRef199->setDestEndpoint(dstPt199);
    connRef199->setRoutingType((ConnType)2);

    ConnRef *connRef200 = ConnRef::createConnRef(router, 200).get();
    ConnEnd srcPt200(Point(221, 224), 15);
    connRef200->setSourceEndpoint(srcPt200);
    ConnEnd dstPt200(Point(456, 228), 15);
    connRef200->setDestEndpoint(dstPt200);
    connRef200->setRoutingType((ConnType)2);

    ConnRef *connRef201 = ConnRef::createConnRef(router, 201).get();
    ConnEnd srcPt201(Point(221, 205), 15);
    connRef201->setSourceEndpoint(srcPt201);
    ConnEnd dstPt201(Point(154, 226), 15);
    connRef201->setDestEndpoint(dstPt201);
    connRef201->setRoutingType((ConnType)2);

    ConnRef *connRef202 = ConnRef::createConnRef(router, 202).get();
    ConnEnd srcPt202(Point(221, 205), 15);
    connRef202->setSourceEndpoint(srcPt202);
    ConnEnd dstPt202(Point(456, 228), 15);
    connRef202->setDestEndpoint(dstPt202);
    connRef202->setRoutingType((ConnType)2);

    ConnRef *connRef203 = ConnRef::createConnRef(router, 203).get();
    ConnEnd srcPt203(Point(289, 183), 15);
    connRef203->setSourceEndpoint(srcPt203);
    ConnEnd dstPt203(Point(154, 226), 15);
    connRef203->setDestEndpoint(dstPt203);
    connRef203->setRoutingType((ConnType)2);

    ConnRef *connRef204 = ConnRef::createConnRef(router, 204).get();
    ConnEnd srcPt204(Point(289, 183), 15);
    connRef204->setSourceEndpoint(srcPt204);
    ConnEnd dstPt204(Point(456, 228), 15);
    connRef204->setDestEndpoint(dstPt204);
    connRef204->setRoutingType((ConnType)2);

    ConnRef *connRef205 = ConnRef::createConnRef(router, 205).get();
    ConnEnd srcPt205(Point(316, 151), 15);
    connRef205->setSourceEndpoint(srcPt205);
    ConnEnd dstPt205(Point(456, 141), 15);
    connRef205->setDestEndpoint(dstPt205);
    connRef205->setRoutingType((ConnType)2);

    ConnRef *connRef206 = ConnRef::createConnRef(router, 206).get();
    ConnEnd srcPt206(Point(316, 151), 15);
    connRef206->setSourceEndpoint(srcPt206);
    ConnEnd dstPt206(Point(154, 226), 15);
    connRef206->setDestEndpoint(dstPt206);
    connRef206->setRoutingType((ConnType)2);

    ConnRef *connRef207 = ConnRef::createConnRef(router, 207).get();
    ConnEnd srcPt207(Point(316, 130), 15);
    connRef207->setSourceEndpoint(srcPt207);
    ConnEnd dstPt207(Point(456, 141), 15);
    connRef207->setDestEndpoint(dstPt207);
    connRef207->setRoutingType((ConnType)2);

    ConnRef *connRef208 = ConnRef::createConnRef(router, 208).get();
    ConnEnd srcPt208(Point(316, 130), 15);
    connRef208->setSourceEndpoint(srcPt208);
    ConnEnd dstPt208(Point(154, 226), 15);
    connRef208->setDestEndpoint(dstPt208);
    connRef208->setRoutingType((ConnType)2);

    ConnRef *connRef209 = ConnRef::createConnRef(router, 209).get();
    ConnEnd srcPt209(Point(235, 905), 15);
    connRef209->setSourceEndpoint(srcPt209);
    ConnEnd dstPt209(Point(287, 904), 15);
    connRef209->setDestEndpoint(dstPt209);
    connRef209->setRoutingType((ConnType)2);

    ConnRef *connRef210 = ConnRef::createConnRef(router, 210).get();
    ConnEnd srcPt210(Point(456, 553), 15);
    connRef210->setSourceEndpoint(srcPt210);
    ConnEnd dstPt210(Point(456, 590), 15);
    connRef210->setDestEndpoint(dstPt210);
    connRef210->setRoutingType((ConnType)2);

    ConnRef *connRef211 = ConnRef::createConnRef(router, 211).get();
    ConnEnd srcPt211(Point(456, 553), 15);
    connRef211->setSourceEndpoint(srcPt211);
    ConnEnd dstPt211(Point(456, 518), 15);
    connRef211->setDestEndpoint(dstPt211);
    connRef211->setRoutingType((ConnType)2);

    ConnRef *connRef212 = ConnRef::createConnRef(router, 212).get();
    ConnEnd srcPt212(Point(221, 243), 15);
    connRef212->setSourceEndpoint(srcPt212);
    ConnEnd dstPt212(Point(456, 228), 15);
    connRef212->setDestEndpoint(dstPt212);
    connRef212->setRoutingType((ConnType)2);

    ConnRef *connRef213 = ConnRef::createConnRef(router, 213).get();
    ConnEnd srcPt213(Point(221, 318), 15);
    connRef213->setSourceEndpoint(srcPt213);
    ConnEnd dstPt213(Point(305, 299), 15);
    connRef213->setDestEndpoint(dstPt213);
    connRef213->setRoutingType((ConnType)2);

    ConnRef *connRef214 = ConnRef::createConnRef(router, 214).get();
    ConnEnd srcPt214(Point(154, 357), 15);
    connRef214->setSourceEndpoint(srcPt214);
    ConnEnd dstPt214(Point(212, 356), 15);
    connRef214->setDestEndpoint(dstPt214);
    connRef214->setRoutingType((ConnType)2);

    ConnRef *connRef215 = ConnRef::createConnRef(router, 215).get();
    ConnEnd srcPt215(Point(154, 383), 15);
    connRef215->setSourceEndpoint(srcPt215);
    ConnEnd dstPt215(Point(212, 382), 15);
    connRef215->setDestEndpoint(dstPt215);
    connRef215->setRoutingType((ConnType)2);

    ConnRef *connRef216 = ConnRef::createConnRef(router, 216).get();
    ConnEnd srcPt216(Point(264, 356), 15);
    connRef216->setSourceEndpoint(srcPt216);
    ConnEnd dstPt216(Point(305, 299), 15);
    connRef216->setDestEndpoint(dstPt216);
    connRef216->setRoutingType((ConnType)2);

    ConnRef *connRef217 = ConnRef::createConnRef(router, 217).get();
    ConnEnd srcPt217(Point(264, 382), 15);
    connRef217->setSourceEndpoint(srcPt217);
    ConnEnd dstPt217(Point(305, 299), 15);
    connRef217->setDestEndpoint(dstPt217);
    connRef217->setRoutingType((ConnType)2);

    ConnRef *connRef218 = ConnRef::createConnRef(router, 218).get();
    ConnEnd srcPt218(Point(574, 193), 15);
    connRef218->setSourceEndpoint(srcPt218);
    ConnEnd dstPt218(Point(525, 192), 15);
    connRef218->setDestEndpoint(dstPt218);
    connRef218->setRoutingType((ConnType)2);

    ConnRef *connRef219 = ConnRef::createConnRef(router, 219).get();
    ConnEnd srcPt219(Point(456, 141), 15);
    connRef219->setSourceEndpoint(srcPt219);
    ConnEnd dstPt219(Point(458, 74), 15);
    connRef219->setDestEndpoint(dstPt219);
    connRef219->setRoutingType((ConnType)2);

    ConnRef *connRef220 = ConnRef::createConnRef(router, 220).get();
    ConnEnd srcPt220(Point(456, 662), 15);
    connRef220->setSourceEndpoint(srcPt220);
    ConnEnd dstPt220(Point(629, 336), 15);
    connRef220->setDestEndpoint(dstPt220);
    connRef220->setRoutingType((ConnType)2);

    ConnRef *connRef221 = ConnRef::createConnRef(router, 221).get();
    ConnEnd srcPt221(Point(154, 226), 15);
    connRef221->setSourceEndpoint(srcPt221);
    ConnEnd dstPt221(Point(221, 243), 15);
    connRef221->setDestEndpoint(dstPt221);
    connRef221->setRoutingType((ConnType)2);

    ConnRef *connRef222 = ConnRef::createConnRef(router, 222).get();
    ConnEnd srcPt222(Point(221, 318), 15);
    connRef222->setSourceEndpoint(srcPt222);
    ConnEnd dstPt222(Point(154, 299), 15);
    connRef222->setDestEndpoint(dstPt222);
    connRef222->setRoutingType((ConnType)2);

    ConnRef *connRef223 = ConnRef::createConnRef(router, 223).get();
    ConnEnd srcPt223(Point(456, 228), 15);
    connRef223->setSourceEndpoint(srcPt223);
    ConnEnd dstPt223(Point(629, 336), 15);
    connRef223->setDestEndpoint(dstPt223);
    connRef223->setRoutingType((ConnType)2);

    ConnRef *connRef224 = ConnRef::createConnRef(router, 224).get();
    ConnEnd srcPt224(Point(456, 734), 15);
    connRef224->setSourceEndpoint(srcPt224);
    ConnEnd dstPt224(Point(49, 798), 15);
    connRef224->setDestEndpoint(dstPt224);
    connRef224->setRoutingType((ConnType)2);

    ConnRef *connRef225 = ConnRef::createConnRef(router, 225).get();
    ConnEnd srcPt225(Point(177, 744), 15);
    connRef225->setSourceEndpoint(srcPt225);
    ConnEnd dstPt225(Point(456, 734), 15);
    connRef225->setDestEndpoint(dstPt225);
    connRef225->setRoutingType((ConnType)2);

    ConnRef *connRef226 = ConnRef::createConnRef(router, 226).get();
    ConnEnd srcPt226(Point(456, 590), 15);
    connRef226->setSourceEndpoint(srcPt226);
    ConnEnd dstPt226(Point(278, 597), 15);
    connRef226->setDestEndpoint(dstPt226);
    connRef226->setRoutingType((ConnType)2);

    ConnRef *connRef227 = ConnRef::createConnRef(router, 227).get();
    ConnEnd srcPt227(Point(555, 522), 15);
    connRef227->setSourceEndpoint(srcPt227);
    ConnEnd dstPt227(Point(456, 590), 15);
    connRef227->setDestEndpoint(dstPt227);
    connRef227->setRoutingType((ConnType)2);

    ConnRef *connRef228 = ConnRef::createConnRef(router, 228).get();
    ConnEnd srcPt228(Point(528, 541), 15);
    connRef228->setSourceEndpoint(srcPt228);
    ConnEnd dstPt228(Point(456, 590), 15);
    connRef228->setDestEndpoint(dstPt228);
    connRef228->setRoutingType((ConnType)2);

    ConnRef *connRef229 = ConnRef::createConnRef(router, 229).get();
    ConnEnd srcPt229(Point(505, 522), 15);
    connRef229->setSourceEndpoint(srcPt229);
    ConnEnd dstPt229(Point(456, 590), 15);
    connRef229->setDestEndpoint(dstPt229);
    connRef229->setRoutingType((ConnType)2);

    ConnRef *connRef230 = ConnRef::createConnRef(router, 230).get();
    ConnEnd srcPt230(Point(481, 481), 15);
    connRef230->setSourceEndpoint(srcPt230);
    ConnEnd dstPt230(Point(456, 518), 15);
    connRef230->setDestEndpoint(dstPt230);
    connRef230->setRoutingType((ConnType)2);

    ConnRef *connRef231 = ConnRef::createConnRef(router, 231).get();
    ConnEnd srcPt231(Point(411, 519), 15);
    connRef231->setSourceEndpoint(srcPt231);
    ConnEnd dstPt231(Point(456, 518), 15);
    connRef231->setDestEndpoint(dstPt231);
    connRef231->setRoutingType((ConnType)2);

    ConnRef *connRef232 = ConnRef::createConnRef(router, 232).get();
    ConnEnd srcPt232(Point(600, 861), 15);
    connRef232->setSourceEndpoint(srcPt232);
    ConnEnd dstPt232(Point(601, 917), 15);
    connRef232->setDestEndpoint(dstPt232);
    connRef232->setRoutingType((ConnType)2);

    ConnRef *connRef233 = ConnRef::createConnRef(router, 233).get();
    ConnEnd srcPt233(Point(460, 940), 15);
    connRef233->setSourceEndpoint(srcPt233);
    ConnEnd dstPt233(Point(523, 951), 15);
    connRef233->setDestEndpoint(dstPt233);
    connRef233->setRoutingType((ConnType)2);

    ConnRef *connRef234 = ConnRef::createConnRef(router, 234).get();
    ConnEnd srcPt234(Point(412, 940), 15);
    connRef234->setSourceEndpoint(srcPt234);
    ConnEnd dstPt234(Point(523, 951), 15);
    connRef234->setDestEndpoint(dstPt234);
    connRef234->setRoutingType((ConnType)2);

    ConnRef *connRef235 = ConnRef::createConnRef(router, 235).get();
    ConnEnd srcPt235(Point(523, 951), 15);
    connRef235->setSourceEndpoint(srcPt235);
    ConnEnd dstPt235(Point(412, 961), 15);
    connRef235->setDestEndpoint(dstPt235);
    connRef235->setRoutingType((ConnType)2);

    ConnRef *connRef236 = ConnRef::createConnRef(router, 236).get();
    ConnEnd srcPt236(Point(460, 961), 15);
    connRef236->setSourceEndpoint(srcPt236);
    ConnEnd dstPt236(Point(523, 951), 15);
    connRef236->setDestEndpoint(dstPt236);
    connRef236->setRoutingType((ConnType)2);

    ConnRef *connRef237 = ConnRef::createConnRef(router, 237).get();
    ConnEnd srcPt237(Point(456, 861), 15);
    connRef237->setSourceEndpoint(srcPt237);
    ConnEnd dstPt237(Point(629, 336), 15);
    connRef237->setDestEndpoint(dstPt237);
    connRef237->setRoutingType((ConnType)2);

    ConnRef *connRef238 = ConnRef::createConnRef(router, 238).get();
    ConnEnd srcPt238(Point(456, 861), 15);
    connRef238->setSourceEndpoint(srcPt238);
    ConnEnd dstPt238(Point(49, 798), 15);
    connRef238->setDestEndpoint(dstPt238);
    connRef238->setRoutingType((ConnType)2);

    ConnRef *connRef239 = ConnRef::createConnRef(router, 239).get();
    ConnEnd srcPt239(Point(262, 792), 15);
    connRef239->setSourceEndpoint(srcPt239);
    ConnEnd dstPt239(Point(456, 861), 15);
    connRef239->setDestEndpoint(dstPt239);
    connRef239->setRoutingType((ConnType)2);

    ConnRef *connRef240 = ConnRef::createConnRef(router, 240).get();
    ConnEnd srcPt240(Point(351, 861), 15);
    connRef240->setSourceEndpoint(srcPt240);
    ConnEnd dstPt240(Point(351, 909), 15);
    connRef240->setDestEndpoint(dstPt240);
    connRef240->setRoutingType((ConnType)2);

    ConnRef *connRef241 = ConnRef::createConnRef(router, 241).get();
    ConnEnd srcPt241(Point(351, 818), 15);
    connRef241->setSourceEndpoint(srcPt241);
    ConnEnd dstPt241(Point(404, 871), 15);
    connRef241->setDestEndpoint(dstPt241);
    connRef241->setRoutingType((ConnType)2);

    ConnRef *connRef242 = ConnRef::createConnRef(router, 242).get();
    ConnEnd srcPt242(Point(351, 818), 15);
    connRef242->setSourceEndpoint(srcPt242);
    ConnEnd dstPt242(Point(404, 850), 15);
    connRef242->setDestEndpoint(dstPt242);
    connRef242->setRoutingType((ConnType)2);

    ConnRef *connRef243 = ConnRef::createConnRef(router, 243).get();
    ConnEnd srcPt243(Point(119, 861), 15);
    connRef243->setSourceEndpoint(srcPt243);
    ConnEnd dstPt243(Point(49, 798), 15);
    connRef243->setDestEndpoint(dstPt243);
    connRef243->setRoutingType((ConnType)2);

    ConnRef *connRef244 = ConnRef::createConnRef(router, 244).get();
    ConnEnd srcPt244(Point(262, 792), 15);
    connRef244->setSourceEndpoint(srcPt244);
    ConnEnd dstPt244(Point(119, 861), 15);
    connRef244->setDestEndpoint(dstPt244);
    connRef244->setRoutingType((ConnType)2);

    ConnRef *connRef245 = ConnRef::createConnRef(router, 245).get();
    ConnEnd srcPt245(Point(412, 961), 15);
    connRef245->setSourceEndpoint(srcPt245);
    ConnEnd dstPt245(Point(351, 951), 15);
    connRef245->setDestEndpoint(dstPt245);
    connRef245->setRoutingType((ConnType)2);

    ConnRef *connRef246 = ConnRef::createConnRef(router, 246).get();
    ConnEnd srcPt246(Point(460, 961), 15);
    connRef246->setSourceEndpoint(srcPt246);
    ConnEnd dstPt246(Point(351, 951), 15);
    connRef246->setDestEndpoint(dstPt246);
    connRef246->setRoutingType((ConnType)2);

    ConnRef *connRef247 = ConnRef::createConnRef(router, 247).get();
    ConnEnd srcPt247(Point(235, 905), 15);
    connRef247->setSourceEndpoint(srcPt247);
    ConnEnd dstPt247(Point(185, 904), 15);
    connRef247->setDestEndpoint(dstPt247);
    connRef247->setRoutingType((ConnType)2);

    ConnRef *connRef248 = ConnRef::createConnRef(router, 248).get();
    ConnEnd srcPt248(Point(456, 371), 15);
    connRef248->setSourceEndpoint(srcPt248);
    ConnEnd dstPt248(Point(403, 335), 15);
    connRef248->setDestEndpoint(dstPt248);
    connRef248->setRoutingType((ConnType)2);

    ConnRef *connRef249 = ConnRef::createConnRef(router, 249).get();
    ConnEnd srcPt249(Point(105, 356), 15);
    connRef249->setSourceEndpoint(srcPt249);
    ConnEnd dstPt249(Point(154, 357), 15);
    connRef249->setDestEndpoint(dstPt249);
    connRef249->setRoutingType((ConnType)2);

    ConnRef *connRef250 = ConnRef::createConnRef(router, 250).get();
    ConnEnd srcPt250(Point(212, 356), 15);
    connRef250->setSourceEndpoint(srcPt250);
    ConnEnd dstPt250(Point(264, 356), 15);
    connRef250->setDestEndpoint(dstPt250);
    connRef250->setRoutingType((ConnType)2);

    ConnRef *connRef251 = ConnRef::createConnRef(router, 251).get();
    ConnEnd srcPt251(Point(212, 382), 15);
    connRef251->setSourceEndpoint(srcPt251);
    ConnEnd dstPt251(Point(264, 382), 15);
    connRef251->setDestEndpoint(dstPt251);
    connRef251->setRoutingType((ConnType)2);

    ConnRef *connRef252 = ConnRef::createConnRef(router, 252).get();
    ConnEnd srcPt252(Point(105, 382), 15);
    connRef252->setSourceEndpoint(srcPt252);
    ConnEnd dstPt252(Point(154, 383), 15);
    connRef252->setDestEndpoint(dstPt252);
    connRef252->setRoutingType((ConnType)2);

    ConnRef *connRef253 = ConnRef::createConnRef(router, 253).get();
    ConnEnd srcPt253(Point(49, 798), 15);
    connRef253->setSourceEndpoint(srcPt253);
    ConnEnd dstPt253(Point(119, 734), 15);
    connRef253->setDestEndpoint(dstPt253);
    connRef253->setRoutingType((ConnType)2);

    ConnRef *connRef254 = ConnRef::createConnRef(router, 254).get();
    ConnEnd srcPt254(Point(177, 723), 15);
    connRef254->setSourceEndpoint(srcPt254);
    ConnEnd dstPt254(Point(456, 734), 15);
    connRef254->setDestEndpoint(dstPt254);
    connRef254->setRoutingType((ConnType)2);

    ConnRef *connRef255 = ConnRef::createConnRef(router, 255).get();
    ConnEnd srcPt255(Point(119, 734), 15);
    connRef255->setSourceEndpoint(srcPt255);
    ConnEnd dstPt255(Point(177, 723), 15);
    connRef255->setDestEndpoint(dstPt255);
    connRef255->setRoutingType((ConnType)2);

    ConnRef *connRef256 = ConnRef::createConnRef(router, 256).get();
    ConnEnd srcPt256(Point(119, 734), 15);
    connRef256->setSourceEndpoint(srcPt256);
    ConnEnd dstPt256(Point(177, 744), 15);
    connRef256->setDestEndpoint(dstPt256);
    connRef256->setRoutingType((ConnType)2);

    ConnRef *connRef257 = ConnRef::createConnRef(router, 257).get();
    ConnEnd srcPt257(Point(481, 481), 15);
    connRef257->setSourceEndpoint(srcPt257);
    ConnEnd dstPt257(Point(456, 446), 15);
    connRef257->setDestEndpoint(dstPt257);
    connRef257->setRoutingType((ConnType)2);

    ConnRef *connRef258 = ConnRef::createConnRef(router, 258).get();
    ConnEnd srcPt258(Point(410, 583), 15);
    connRef258->setSourceEndpoint(srcPt258);
    ConnEnd dstPt258(Point(371, 554), 15);
    connRef258->setDestEndpoint(dstPt258);
    connRef258->setRoutingType((ConnType)2);

    ConnRef *connRef259 = ConnRef::createConnRef(router, 259).get();
    ConnEnd srcPt259(Point(410, 583), 15);
    connRef259->setSourceEndpoint(srcPt259);
    ConnEnd dstPt259(Point(456, 590), 15);
    connRef259->setDestEndpoint(dstPt259);
    connRef259->setRoutingType((ConnType)2);

    ConnRef *connRef260 = ConnRef::createConnRef(router, 260).get();
    ConnEnd srcPt260(Point(411, 519), 15);
    connRef260->setSourceEndpoint(srcPt260);
    ConnEnd dstPt260(Point(371, 554), 15);
    connRef260->setDestEndpoint(dstPt260);
    connRef260->setRoutingType((ConnType)2);

    ConnRef *connRef261 = ConnRef::createConnRef(router, 261).get();
    ConnEnd srcPt261(Point(456, 446), 15);
    connRef261->setSourceEndpoint(srcPt261);
    ConnEnd dstPt261(Point(555, 522), 15);
    connRef261->setDestEndpoint(dstPt261);
    connRef261->setRoutingType((ConnType)2);

    ConnRef *connRef262 = ConnRef::createConnRef(router, 262).get();
    ConnEnd srcPt262(Point(456, 446), 15);
    connRef262->setSourceEndpoint(srcPt262);
    ConnEnd dstPt262(Point(528, 541), 15);
    connRef262->setDestEndpoint(dstPt262);
    connRef262->setRoutingType((ConnType)2);

    ConnRef *connRef263 = ConnRef::createConnRef(router, 263).get();
    ConnEnd srcPt263(Point(456, 446), 15);
    connRef263->setSourceEndpoint(srcPt263);
    ConnEnd dstPt263(Point(505, 522), 15);
    connRef263->setDestEndpoint(dstPt263);
    connRef263->setRoutingType((ConnType)2);

    ConnRef *connRef264 = ConnRef::createConnRef(router, 264).get();
    ConnEnd srcPt264(Point(262, 990), 15);
    connRef264->setSourceEndpoint(srcPt264);
    ConnEnd dstPt264(Point(262, 940), 15);
    connRef264->setDestEndpoint(dstPt264);
    connRef264->setRoutingType((ConnType)2);

    ConnRef *connRef265 = ConnRef::createConnRef(router, 265).get();
    ConnEnd srcPt265(Point(49, 908), 15);
    connRef265->setSourceEndpoint(srcPt265);
    ConnEnd dstPt265(Point(119, 908), 15);
    connRef265->setDestEndpoint(dstPt265);
    connRef265->setRoutingType((ConnType)2);

    ConnRef *connRef266 = ConnRef::createConnRef(router, 266).get();
    ConnEnd srcPt266(Point(332, 1011), 15);
    connRef266->setSourceEndpoint(srcPt266);
    ConnEnd dstPt266(Point(262, 961), 15);
    connRef266->setDestEndpoint(dstPt266);
    connRef266->setRoutingType((ConnType)2);

    ConnRef *connRef267 = ConnRef::createConnRef(router, 267).get();
    ConnEnd srcPt267(Point(421, 909), 15);
    connRef267->setSourceEndpoint(srcPt267);
    ConnEnd dstPt267(Point(351, 909), 15);
    connRef267->setDestEndpoint(dstPt267);
    connRef267->setRoutingType((ConnType)2);

    ConnRef *connRef268 = ConnRef::createConnRef(router, 268).get();
    ConnEnd srcPt268(Point(460, 990), 15);
    connRef268->setSourceEndpoint(srcPt268);
    ConnEnd dstPt268(Point(460, 940), 15);
    connRef268->setDestEndpoint(dstPt268);
    connRef268->setRoutingType((ConnType)2);

    ConnRef *connRef269 = ConnRef::createConnRef(router, 269).get();
    ConnEnd srcPt269(Point(412, 990), 15);
    connRef269->setSourceEndpoint(srcPt269);
    ConnEnd dstPt269(Point(412, 940), 15);
    connRef269->setDestEndpoint(dstPt269);
    connRef269->setRoutingType((ConnType)2);

    ConnRef *connRef270 = ConnRef::createConnRef(router, 270).get();
    ConnEnd srcPt270(Point(404, 821), 15);
    connRef270->setSourceEndpoint(srcPt270);
    ConnEnd dstPt270(Point(404, 871), 15);
    connRef270->setDestEndpoint(dstPt270);
    connRef270->setRoutingType((ConnType)2);

    ConnRef *connRef271 = ConnRef::createConnRef(router, 271).get();
    ConnEnd srcPt271(Point(474, 800), 15);
    connRef271->setSourceEndpoint(srcPt271);
    ConnEnd dstPt271(Point(404, 850), 15);
    connRef271->setDestEndpoint(dstPt271);
    connRef271->setRoutingType((ConnType)2);

    ConnRef *connRef272 = ConnRef::createConnRef(router, 272).get();
    ConnEnd srcPt272(Point(292, 812), 15);
    connRef272->setSourceEndpoint(srcPt272);
    ConnEnd dstPt272(Point(292, 862), 15);
    connRef272->setDestEndpoint(dstPt272);
    connRef272->setRoutingType((ConnType)2);

    ConnRef *connRef273 = ConnRef::createConnRef(router, 273).get();
    ConnEnd srcPt273(Point(183, 812), 15);
    connRef273->setSourceEndpoint(srcPt273);
    ConnEnd dstPt273(Point(183, 862), 15);
    connRef273->setDestEndpoint(dstPt273);
    connRef273->setRoutingType((ConnType)2);

    ConnRef *connRef274 = ConnRef::createConnRef(router, 274).get();
    ConnEnd srcPt274(Point(531, 811), 15);
    connRef274->setSourceEndpoint(srcPt274);
    ConnEnd dstPt274(Point(531, 861), 15);
    connRef274->setDestEndpoint(dstPt274);
    connRef274->setRoutingType((ConnType)2);

    ConnRef *connRef275 = ConnRef::createConnRef(router, 275).get();
    ConnEnd srcPt275(Point(526, 767), 15);
    connRef275->setSourceEndpoint(srcPt275);
    ConnEnd dstPt275(Point(456, 767), 15);
    connRef275->setDestEndpoint(dstPt275);
    connRef275->setRoutingType((ConnType)2);

    ConnRef *connRef276 = ConnRef::createConnRef(router, 276).get();
    ConnEnd srcPt276(Point(526, 698), 15);
    connRef276->setSourceEndpoint(srcPt276);
    ConnEnd dstPt276(Point(456, 698), 15);
    connRef276->setDestEndpoint(dstPt276);
    connRef276->setRoutingType((ConnType)2);

    ConnRef *connRef277 = ConnRef::createConnRef(router, 277).get();
    ConnEnd srcPt277(Point(527, 626), 15);
    connRef277->setSourceEndpoint(srcPt277);
    ConnEnd dstPt277(Point(457, 626), 15);
    connRef277->setDestEndpoint(dstPt277);
    connRef277->setRoutingType((ConnType)2);

    ConnRef *connRef278 = ConnRef::createConnRef(router, 278).get();
    ConnEnd srcPt278(Point(361, 481), 15);
    connRef278->setSourceEndpoint(srcPt278);
    ConnEnd dstPt278(Point(431, 481), 15);
    connRef278->setDestEndpoint(dstPt278);
    connRef278->setRoutingType((ConnType)2);

    ConnRef *connRef279 = ConnRef::createConnRef(router, 279).get();
    ConnEnd srcPt279(Point(376, 397), 15);
    connRef279->setSourceEndpoint(srcPt279);
    ConnEnd dstPt279(Point(376, 447), 15);
    connRef279->setDestEndpoint(dstPt279);
    connRef279->setRoutingType((ConnType)2);

    ConnRef *connRef280 = ConnRef::createConnRef(router, 280).get();
    ConnEnd srcPt280(Point(526, 401), 15);
    connRef280->setSourceEndpoint(srcPt280);
    ConnEnd dstPt280(Point(456, 401), 15);
    connRef280->setDestEndpoint(dstPt280);
    connRef280->setRoutingType((ConnType)2);

    ConnRef *connRef281 = ConnRef::createConnRef(router, 281).get();
    ConnEnd srcPt281(Point(526, 335), 15);
    connRef281->setSourceEndpoint(srcPt281);
    ConnEnd dstPt281(Point(456, 335), 15);
    connRef281->setDestEndpoint(dstPt281);
    connRef281->setRoutingType((ConnType)2);

    ConnRef *connRef282 = ConnRef::createConnRef(router, 282).get();
    ConnEnd srcPt282(Point(403, 285), 15);
    connRef282->setSourceEndpoint(srcPt282);
    ConnEnd dstPt282(Point(403, 335), 15);
    connRef282->setDestEndpoint(dstPt282);
    connRef282->setRoutingType((ConnType)2);

    ConnRef *connRef283 = ConnRef::createConnRef(router, 283).get();
    ConnEnd srcPt283(Point(525, 142), 15);
    connRef283->setSourceEndpoint(srcPt283);
    ConnEnd dstPt283(Point(525, 192), 15);
    connRef283->setDestEndpoint(dstPt283);
    connRef283->setRoutingType((ConnType)2);

    ConnRef *connRef284 = ConnRef::createConnRef(router, 284).get();
    ConnEnd srcPt284(Point(526, 265), 15);
    connRef284->setSourceEndpoint(srcPt284);
    ConnEnd dstPt284(Point(456, 265), 15);
    connRef284->setDestEndpoint(dstPt284);
    connRef284->setRoutingType((ConnType)2);

    ConnRef *connRef285 = ConnRef::createConnRef(router, 285).get();
    ConnEnd srcPt285(Point(386, 170), 15);
    connRef285->setSourceEndpoint(srcPt285);
    ConnEnd dstPt285(Point(456, 170), 15);
    connRef285->setDestEndpoint(dstPt285);
    connRef285->setRoutingType((ConnType)2);

    ConnRef *connRef286 = ConnRef::createConnRef(router, 286).get();
    ConnEnd srcPt286(Point(376, 249), 15);
    connRef286->setSourceEndpoint(srcPt286);
    ConnEnd dstPt286(Point(376, 299), 15);
    connRef286->setDestEndpoint(dstPt286);
    connRef286->setRoutingType((ConnType)2);

    ConnRef *connRef287 = ConnRef::createConnRef(router, 287).get();
    ConnEnd srcPt287(Point(291, 330), 15);
    connRef287->setSourceEndpoint(srcPt287);
    ConnEnd dstPt287(Point(221, 280), 15);
    connRef287->setDestEndpoint(dstPt287);
    connRef287->setRoutingType((ConnType)2);

    ConnRef *connRef288 = ConnRef::createConnRef(router, 288).get();
    ConnEnd srcPt288(Point(221, 249), 15);
    connRef288->setSourceEndpoint(srcPt288);
    ConnEnd dstPt288(Point(221, 299), 15);
    connRef288->setDestEndpoint(dstPt288);
    connRef288->setRoutingType((ConnType)2);

    ConnRef *connRef289 = ConnRef::createConnRef(router, 289).get();
    ConnEnd srcPt289(Point(330, 216), 15);
    connRef289->setSourceEndpoint(srcPt289);
    ConnEnd dstPt289(Point(330, 266), 15);
    connRef289->setDestEndpoint(dstPt289);
    connRef289->setRoutingType((ConnType)2);

    ConnRef *connRef290 = ConnRef::createConnRef(router, 290).get();
    ConnEnd srcPt290(Point(280, 216), 15);
    connRef290->setSourceEndpoint(srcPt290);
    ConnEnd dstPt290(Point(280, 266), 15);
    connRef290->setDestEndpoint(dstPt290);
    connRef290->setRoutingType((ConnType)2);

    ConnRef *connRef291 = ConnRef::createConnRef(router, 291).get();
    ConnEnd srcPt291(Point(84, 261), 15);
    connRef291->setSourceEndpoint(srcPt291);
    ConnEnd dstPt291(Point(154, 261), 15);
    connRef291->setDestEndpoint(dstPt291);
    connRef291->setRoutingType((ConnType)2);

    ConnRef *connRef292 = ConnRef::createConnRef(router, 292).get();
    ConnEnd srcPt292(Point(221, 174), 15);
    connRef292->setSourceEndpoint(srcPt292);
    ConnEnd dstPt292(Point(221, 224), 15);
    connRef292->setDestEndpoint(dstPt292);
    connRef292->setRoutingType((ConnType)2);

    ConnRef *connRef293 = ConnRef::createConnRef(router, 293).get();
    ConnEnd srcPt293(Point(221, 155), 15);
    connRef293->setSourceEndpoint(srcPt293);
    ConnEnd dstPt293(Point(221, 205), 15);
    connRef293->setDestEndpoint(dstPt293);
    connRef293->setRoutingType((ConnType)2);

    ConnRef *connRef294 = ConnRef::createConnRef(router, 294).get();
    ConnEnd srcPt294(Point(289, 133), 15);
    connRef294->setSourceEndpoint(srcPt294);
    ConnEnd dstPt294(Point(289, 183), 15);
    connRef294->setDestEndpoint(dstPt294);
    connRef294->setRoutingType((ConnType)2);

    ConnRef *connRef295 = ConnRef::createConnRef(router, 295).get();
    ConnEnd srcPt295(Point(316, 101), 15);
    connRef295->setSourceEndpoint(srcPt295);
    ConnEnd dstPt295(Point(316, 151), 15);
    connRef295->setDestEndpoint(dstPt295);
    connRef295->setRoutingType((ConnType)2);

    ConnRef *connRef296 = ConnRef::createConnRef(router, 296).get();
    ConnEnd srcPt296(Point(316, 180), 15);
    connRef296->setSourceEndpoint(srcPt296);
    ConnEnd dstPt296(Point(316, 130), 15);
    connRef296->setDestEndpoint(dstPt296);
    connRef296->setRoutingType((ConnType)2);

    ConnRef *connRef297 = ConnRef::createConnRef(router, 297).get();
    ConnEnd srcPt297(Point(235, 855), 15);
    connRef297->setSourceEndpoint(srcPt297);
    ConnEnd dstPt297(Point(235, 905), 15);
    connRef297->setDestEndpoint(dstPt297);
    connRef297->setRoutingType((ConnType)2);

    ConnRef *connRef298 = ConnRef::createConnRef(router, 298).get();
    ConnEnd srcPt298(Point(526, 553), 15);
    connRef298->setSourceEndpoint(srcPt298);
    ConnEnd dstPt298(Point(456, 553), 15);
    connRef298->setDestEndpoint(dstPt298);
    connRef298->setRoutingType((ConnType)2);

    ConnRef *connRef299 = ConnRef::createConnRef(router, 299).get();
    ConnEnd srcPt299(Point(221, 193), 15);
    connRef299->setSourceEndpoint(srcPt299);
    ConnEnd dstPt299(Point(221, 243), 15);
    connRef299->setDestEndpoint(dstPt299);
    connRef299->setRoutingType((ConnType)2);

    ConnRef *connRef300 = ConnRef::createConnRef(router, 300).get();
    ConnEnd srcPt300(Point(291, 268), 15);
    connRef300->setSourceEndpoint(srcPt300);
    ConnEnd dstPt300(Point(221, 318), 15);
    connRef300->setDestEndpoint(dstPt300);
    connRef300->setRoutingType((ConnType)2);

    ConnRef *connRef301 = ConnRef::createConnRef(router, 301).get();
    ConnEnd srcPt301(Point(154, 307), 15);
    connRef301->setSourceEndpoint(srcPt301);
    ConnEnd dstPt301(Point(154, 357), 15);
    connRef301->setDestEndpoint(dstPt301);
    connRef301->setRoutingType((ConnType)2);

    ConnRef *connRef302 = ConnRef::createConnRef(router, 302).get();
    ConnEnd srcPt302(Point(154, 433), 15);
    connRef302->setSourceEndpoint(srcPt302);
    ConnEnd dstPt302(Point(154, 383), 15);
    connRef302->setDestEndpoint(dstPt302);
    connRef302->setRoutingType((ConnType)2);

    ConnRef *connRef303 = ConnRef::createConnRef(router, 303).get();
    ConnEnd srcPt303(Point(264, 306), 15);
    connRef303->setSourceEndpoint(srcPt303);
    ConnEnd dstPt303(Point(264, 356), 15);
    connRef303->setDestEndpoint(dstPt303);
    connRef303->setRoutingType((ConnType)2);

    ConnRef *connRef304 = ConnRef::createConnRef(router, 304).get();
    ConnEnd srcPt304(Point(264, 432), 15);
    connRef304->setSourceEndpoint(srcPt304);
    ConnEnd dstPt304(Point(264, 382), 15);
    connRef304->setDestEndpoint(dstPt304);
    connRef304->setRoutingType((ConnType)2);

    ConnRef *connRef305 = ConnRef::createConnRef(router, 305).get();
    ConnEnd srcPt305(Point(177, 673), 15);
    connRef305->setSourceEndpoint(srcPt305);
    ConnEnd dstPt305(Point(177, 723), 15);
    connRef305->setDestEndpoint(dstPt305);
    connRef305->setRoutingType((ConnType)2);

    ConnRef *connRef306 = ConnRef::createConnRef(router, 306).get();
    ConnEnd srcPt306(Point(482, 911), 15);
    connRef306->setSourceEndpoint(srcPt306);
    ConnEnd dstPt306(Point(412, 961), 15);
    connRef306->setDestEndpoint(dstPt306);
    connRef306->setRoutingType((ConnType)2);

    ConnRef *connRef307 = ConnRef::createConnRef(router, 307).get();
    ConnEnd srcPt307(Point(247, 694), 15);
    connRef307->setSourceEndpoint(srcPt307);
    ConnEnd dstPt307(Point(177, 744), 15);
    connRef307->setDestEndpoint(dstPt307);
    connRef307->setRoutingType((ConnType)2);

    ConnRef *connRef308 = ConnRef::createConnRef(router, 308).get();
    ConnEnd srcPt308(Point(460, 911), 15);
    connRef308->setSourceEndpoint(srcPt308);
    ConnEnd dstPt308(Point(460, 961), 15);
    connRef308->setDestEndpoint(dstPt308);
    connRef308->setRoutingType((ConnType)2);

    ConnRef *connRef309 = ConnRef::createConnRef(router, 309).get();
    ConnEnd srcPt309(Point(551, 481), 15);
    connRef309->setSourceEndpoint(srcPt309);
    ConnEnd dstPt309(Point(481, 481), 15);
    connRef309->setDestEndpoint(dstPt309);
    connRef309->setRoutingType((ConnType)2);

    ConnRef *connRef310 = ConnRef::createConnRef(router, 310).get();
    ConnEnd srcPt310(Point(555, 472), 15);
    connRef310->setSourceEndpoint(srcPt310);
    ConnEnd dstPt310(Point(555, 522), 15);
    connRef310->setDestEndpoint(dstPt310);
    connRef310->setRoutingType((ConnType)2);

    ConnRef *connRef311 = ConnRef::createConnRef(router, 311).get();
    ConnEnd srcPt311(Point(528, 591), 15);
    connRef311->setSourceEndpoint(srcPt311);
    ConnEnd dstPt311(Point(528, 541), 15);
    connRef311->setDestEndpoint(dstPt311);
    connRef311->setRoutingType((ConnType)2);

    ConnRef *connRef312 = ConnRef::createConnRef(router, 312).get();
    ConnEnd srcPt312(Point(262, 742), 15);
    connRef312->setSourceEndpoint(srcPt312);
    ConnEnd dstPt312(Point(262, 792), 15);
    connRef312->setDestEndpoint(dstPt312);
    connRef312->setRoutingType((ConnType)2);

    ConnRef *connRef313 = ConnRef::createConnRef(router, 313).get();
    ConnEnd srcPt313(Point(575, 522), 15);
    connRef313->setSourceEndpoint(srcPt313);
    ConnEnd dstPt313(Point(505, 522), 15);
    connRef313->setDestEndpoint(dstPt313);
    connRef313->setRoutingType((ConnType)2);

    ConnRef *connRef314 = ConnRef::createConnRef(router, 314).get();
    ConnEnd srcPt314(Point(410, 633), 15);
    connRef314->setSourceEndpoint(srcPt314);
    ConnEnd dstPt314(Point(410, 583), 15);
    connRef314->setDestEndpoint(dstPt314);
    connRef314->setRoutingType((ConnType)2);

    ConnRef *connRef315 = ConnRef::createConnRef(router, 315).get();
    ConnEnd srcPt315(Point(411, 469), 15);
    connRef315->setSourceEndpoint(srcPt315);
    ConnEnd dstPt315(Point(411, 519), 15);
    connRef315->setDestEndpoint(dstPt315);
    connRef315->setRoutingType((ConnType)2);

    router->processTransaction();
    router->outputDiagram("output/orderassertion");
    delete router;
    return 0;
};
