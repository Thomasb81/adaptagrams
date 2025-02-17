// KEGG -> SBGN example #10
//
#include "libavoid/libavoid.h"
using namespace Avoid;
int main(void) {
    Router *router = new Router(
            PolyLineRouting | OrthogonalRouting);
    router->setRoutingParameter((RoutingParameter)0, 50);
    router->setRoutingParameter((RoutingParameter)1, 0);
    router->setRoutingParameter((RoutingParameter)2, 0);
    router->setRoutingParameter((RoutingParameter)3, 4000);
    router->setRoutingParameter((RoutingParameter)4, 0);
    router->setRoutingParameter((RoutingParameter)5, 100);
    router->setRoutingOption((RoutingOption)0, true);
    router->setRoutingOption((RoutingOption)1, true);
    router->setRoutingOption((RoutingOption)2, false);


    Polygon poly1(4);
    poly1.ps[0] = Point(1201.5, 1180.75);
    poly1.ps[1] = Point(1201.5, 1212.75);
    poly1.ps[2] = Point(1181.5, 1212.75);
    poly1.ps[3] = Point(1181.5, 1180.75);
    ShapeRef::createShapeRef(router, poly1, 1);

#ifdef ALL
    Polygon poly2(4);
    poly2.ps[0] = Point(785.5, 2338.79);
    poly2.ps[1] = Point(785.5, 2358.79);
    poly2.ps[2] = Point(753.5, 2358.79);
    poly2.ps[3] = Point(753.5, 2338.79);
    ShapeRef::createShapeRef(router, poly2, 2);

    Polygon poly3(4);
    poly3.ps[0] = Point(261.5, 2215.42);
    poly3.ps[1] = Point(261.5, 2247.42);
    poly3.ps[2] = Point(241.5, 2247.42);
    poly3.ps[3] = Point(241.5, 2215.42);
    ShapeRef::createShapeRef(router, poly3, 3);

    Polygon poly4(4);
    poly4.ps[0] = Point(785.5, 2400.79);
    poly4.ps[1] = Point(785.5, 2420.79);
    poly4.ps[2] = Point(753.5, 2420.79);
    poly4.ps[3] = Point(753.5, 2400.79);
    ShapeRef::createShapeRef(router, poly4, 4);

    Polygon poly5(4);
    poly5.ps[0] = Point(282.5, 2348.79);
    poly5.ps[1] = Point(282.5, 2410.79);
    poly5.ps[2] = Point(220.5, 2410.79);
    poly5.ps[3] = Point(220.5, 2348.79);
    ShapeRef::createShapeRef(router, poly5, 5);
#endif

    Polygon poly6(4);
    poly6.ps[0] = Point(1643.5, 817.25);
    poly6.ps[1] = Point(1643.5, 1194.25);
    poly6.ps[2] = Point(1421.5, 1194.25);
    poly6.ps[3] = Point(1421.5, 817.25);
    ShapeRef::createShapeRef(router, poly6, 6);

#ifdef ALL
    Polygon poly7(4);
    poly7.ps[0] = Point(1311.5, 45);
    poly7.ps[1] = Point(1311.5, 219);
    poly7.ps[2] = Point(1191.5, 219);
    poly7.ps[3] = Point(1191.5, 45);
    ShapeRef::createShapeRef(router, poly7, 7);

    Polygon poly8(4);
    poly8.ps[0] = Point(839.5, 2301.79);
    poly8.ps[1] = Point(839.5, 2333.79);
    poly8.ps[2] = Point(819.5, 2333.79);
    poly8.ps[3] = Point(819.5, 2301.79);
    ShapeRef::createShapeRef(router, poly8, 8);

    Polygon poly9(4);
    poly9.ps[0] = Point(1105.5, 2263.79);
    poly9.ps[1] = Point(1105.5, 2283.79);
    poly9.ps[2] = Point(1073.5, 2283.79);
    poly9.ps[3] = Point(1073.5, 2263.79);
    ShapeRef::createShapeRef(router, poly9, 9);

    Polygon poly10(4);
    poly10.ps[0] = Point(1105.5, 2338.79);
    poly10.ps[1] = Point(1105.5, 2358.79);
    poly10.ps[2] = Point(1073.5, 2358.79);
    poly10.ps[3] = Point(1073.5, 2338.79);
    ShapeRef::createShapeRef(router, poly10, 10);

    Polygon poly11(4);
    poly11.ps[0] = Point(1027.5, 2169.79);
    poly11.ps[1] = Point(1027.5, 2189.79);
    poly11.ps[2] = Point(995.5, 2189.79);
    poly11.ps[3] = Point(995.5, 2169.79);
    ShapeRef::createShapeRef(router, poly11, 11);

    Polygon poly12(4);
    poly12.ps[0] = Point(1021.5, 2082.42);
    poly12.ps[1] = Point(1021.5, 2114.42);
    poly12.ps[2] = Point(1001.5, 2114.42);
    poly12.ps[3] = Point(1001.5, 2082.42);
    ShapeRef::createShapeRef(router, poly12, 12);

    Polygon poly13(4);
    poly13.ps[0] = Point(721.5, 2159.42);
    poly13.ps[1] = Point(721.5, 2179.42);
    poly13.ps[2] = Point(689.5, 2179.42);
    poly13.ps[3] = Point(689.5, 2159.42);
    ShapeRef::createShapeRef(router, poly13, 13);

    Polygon poly14(4);
    poly14.ps[0] = Point(391.5, 2159.42);
    poly14.ps[1] = Point(391.5, 2179.42);
    poly14.ps[2] = Point(359.5, 2179.42);
    poly14.ps[3] = Point(359.5, 2159.42);
    ShapeRef::createShapeRef(router, poly14, 14);

    Polygon poly15(4);
    poly15.ps[0] = Point(1374.5, 2159.42);
    poly15.ps[1] = Point(1374.5, 2179.42);
    poly15.ps[2] = Point(1342.5, 2179.42);
    poly15.ps[3] = Point(1342.5, 2159.42);
    ShapeRef::createShapeRef(router, poly15, 15);

    Polygon poly16(4);
    poly16.ps[0] = Point(923.421, 1631.86);
    poly16.ps[1] = Point(923.421, 1675.86);
    poly16.ps[2] = Point(835.421, 1675.86);
    poly16.ps[3] = Point(835.421, 1631.86);
    ShapeRef::createShapeRef(router, poly16, 16);

    Polygon poly17(4);
    poly17.ps[0] = Point(1201.5, 1949.42);
    poly17.ps[1] = Point(1201.5, 1981.42);
    poly17.ps[2] = Point(1181.5, 1981.42);
    poly17.ps[3] = Point(1181.5, 1949.42);
    ShapeRef::createShapeRef(router, poly17, 17);

    Polygon poly18(4);
    poly18.ps[0] = Point(252, 1963.42);
    poly18.ps[1] = Point(252, 2127.42);
    poly18.ps[2] = Point(45, 2127.42);
    poly18.ps[3] = Point(45, 1963.42);
    ShapeRef::createShapeRef(router, poly18, 18);

    Polygon poly19(4);
    poly19.ps[0] = Point(1201.5, 1825.42);
    poly19.ps[1] = Point(1201.5, 1857.42);
    poly19.ps[2] = Point(1181.5, 1857.42);
    poly19.ps[3] = Point(1181.5, 1825.42);
    ShapeRef::createShapeRef(router, poly19, 19);

    Polygon poly20(4);
    poly20.ps[0] = Point(1201.5, 1701.42);
    poly20.ps[1] = Point(1201.5, 1733.42);
    poly20.ps[2] = Point(1181.5, 1733.42);
    poly20.ps[3] = Point(1181.5, 1701.42);
    ShapeRef::createShapeRef(router, poly20, 20);

    Polygon poly21(4);
    poly21.ps[0] = Point(1170.5, 1327.42);
    poly21.ps[1] = Point(1170.5, 1359.42);
    poly21.ps[2] = Point(1150.5, 1359.42);
    poly21.ps[3] = Point(1150.5, 1327.42);
    ShapeRef::createShapeRef(router, poly21, 21);

    Polygon poly22(4);
    poly22.ps[0] = Point(741, 1632.42);
    poly22.ps[1] = Point(741, 1692.42);
    poly22.ps[2] = Point(428, 1692.42);
    poly22.ps[3] = Point(428, 1632.42);
    ShapeRef::createShapeRef(router, poly22, 22);

    Polygon poly23(4);
    poly23.ps[0] = Point(996.5, 1281.42);
    poly23.ps[1] = Point(996.5, 1301.42);
    poly23.ps[2] = Point(964.5, 1301.42);
    poly23.ps[3] = Point(964.5, 1281.42);
    ShapeRef::createShapeRef(router, poly23, 23);

    Polygon poly24(4);
    poly24.ps[0] = Point(1232.5, 1047.75);
    poly24.ps[1] = Point(1232.5, 1079.75);
    poly24.ps[2] = Point(1212.5, 1079.75);
    poly24.ps[3] = Point(1212.5, 1047.75);
    ShapeRef::createShapeRef(router, poly24, 24);

    Polygon poly25(4);
    poly25.ps[0] = Point(1170.5, 1047.75);
    poly25.ps[1] = Point(1170.5, 1079.75);
    poly25.ps[2] = Point(1150.5, 1079.75);
    poly25.ps[3] = Point(1150.5, 1047.75);
    ShapeRef::createShapeRef(router, poly25, 25);

    Polygon poly26(4);
    poly26.ps[0] = Point(1343.5, 540.5);
    poly26.ps[1] = Point(1343.5, 560.5);
    poly26.ps[2] = Point(1311.5, 560.5);
    poly26.ps[3] = Point(1311.5, 540.5);
    ShapeRef::createShapeRef(router, poly26, 26);

    Polygon poly27(4);
    poly27.ps[0] = Point(1201.5, 724);
    poly27.ps[1] = Point(1201.5, 756);
    poly27.ps[2] = Point(1181.5, 756);
    poly27.ps[3] = Point(1181.5, 724);
    ShapeRef::createShapeRef(router, poly27, 27);

    Polygon poly28(4);
    poly28.ps[0] = Point(1201.5, 462);
    poly28.ps[1] = Point(1201.5, 494);
    poly28.ps[2] = Point(1181.5, 494);
    poly28.ps[3] = Point(1181.5, 462);
    ShapeRef::createShapeRef(router, poly28, 28);

    Polygon poly29(4);
    poly29.ps[0] = Point(934.5, 873);
    poly29.ps[1] = Point(934.5, 893);
    poly29.ps[2] = Point(902.5, 893);
    poly29.ps[3] = Point(902.5, 873);
    ShapeRef::createShapeRef(router, poly29, 29);

    Polygon poly30(4);
    poly30.ps[0] = Point(492.5, 767);
    poly30.ps[1] = Point(492.5, 787);
    poly30.ps[2] = Point(460.5, 787);
    poly30.ps[3] = Point(460.5, 767);
    ShapeRef::createShapeRef(router, poly30, 30);

    Polygon poly31(4);
    poly31.ps[0] = Point(492.5, 842);
    poly31.ps[1] = Point(492.5, 862);
    poly31.ps[2] = Point(460.5, 862);
    poly31.ps[3] = Point(460.5, 842);
    ShapeRef::createShapeRef(router, poly31, 31);

    Polygon poly32(4);
    poly32.ps[0] = Point(814.5, 730);
    poly32.ps[1] = Point(814.5, 750);
    poly32.ps[2] = Point(782.5, 750);
    poly32.ps[3] = Point(782.5, 730);
    ShapeRef::createShapeRef(router, poly32, 32);

    Polygon poly33(4);
    poly33.ps[0] = Point(653.5, 724);
    poly33.ps[1] = Point(653.5, 756);
    poly33.ps[2] = Point(633.5, 756);
    poly33.ps[3] = Point(633.5, 724);
    ShapeRef::createShapeRef(router, poly33, 33);

    Polygon poly34(4);
    poly34.ps[0] = Point(296.5, 724);
    poly34.ps[1] = Point(296.5, 756);
    poly34.ps[2] = Point(276.5, 756);
    poly34.ps[3] = Point(276.5, 724);
    ShapeRef::createShapeRef(router, poly34, 34);

    Polygon poly35(4);
    poly35.ps[0] = Point(723.5, 468);
    poly35.ps[1] = Point(723.5, 488);
    poly35.ps[2] = Point(691.5, 488);
    poly35.ps[3] = Point(691.5, 468);
    ShapeRef::createShapeRef(router, poly35, 35);

    Polygon poly36(4);
    poly36.ps[0] = Point(723.5, 543);
    poly36.ps[1] = Point(723.5, 563);
    poly36.ps[2] = Point(691.5, 563);
    poly36.ps[3] = Point(691.5, 543);
    ShapeRef::createShapeRef(router, poly36, 36);

    Polygon poly37(4);
    poly37.ps[0] = Point(723.5, 393);
    poly37.ps[1] = Point(723.5, 413);
    poly37.ps[2] = Point(691.5, 413);
    poly37.ps[3] = Point(691.5, 393);
    ShapeRef::createShapeRef(router, poly37, 37);

    Polygon poly38(4);
    poly38.ps[0] = Point(783.5, 331);
    poly38.ps[1] = Point(783.5, 351);
    poly38.ps[2] = Point(751.5, 351);
    poly38.ps[3] = Point(751.5, 331);
    ShapeRef::createShapeRef(router, poly38, 38);

    Polygon poly39(4);
    poly39.ps[0] = Point(783.5, 229);
    poly39.ps[1] = Point(783.5, 249);
    poly39.ps[2] = Point(751.5, 249);
    poly39.ps[3] = Point(751.5, 229);
    ShapeRef::createShapeRef(router, poly39, 39);

    Polygon poly40(4);
    poly40.ps[0] = Point(402, 96.5);
    poly40.ps[1] = Point(402, 131.5);
    poly40.ps[2] = Point(141, 131.5);
    poly40.ps[3] = Point(141, 96.5);
    ShapeRef::createShapeRef(router, poly40, 40);

    Polygon poly41(4);
    poly41.ps[0] = Point(508.5, 2302.46);
    poly41.ps[1] = Point(508.5, 2322.46);
    poly41.ps[2] = Point(476.5, 2322.46);
    poly41.ps[3] = Point(476.5, 2302.46);
    ShapeRef::createShapeRef(router, poly41, 41);

    Polygon poly42(4);
    poly42.ps[0] = Point(1201.5, 1553.42);
    poly42.ps[1] = Point(1201.5, 1585.42);
    poly42.ps[2] = Point(1181.5, 1585.42);
    poly42.ps[3] = Point(1181.5, 1553.42);
    ShapeRef::createShapeRef(router, poly42, 42);

    Polygon poly43(4);
    poly43.ps[0] = Point(723.5, 605);
    poly43.ps[1] = Point(723.5, 625);
    poly43.ps[2] = Point(691.5, 625);
    poly43.ps[3] = Point(691.5, 605);
    ShapeRef::createShapeRef(router, poly43, 43);

    Polygon poly44(4);
    poly44.ps[0] = Point(492.5, 904);
    poly44.ps[1] = Point(492.5, 924);
    poly44.ps[2] = Point(460.5, 924);
    poly44.ps[3] = Point(460.5, 904);
    ShapeRef::createShapeRef(router, poly44, 44);

    Polygon poly45(4);
    poly45.ps[0] = Point(302.5, 1066);
    poly45.ps[1] = Point(302.5, 1086);
    poly45.ps[2] = Point(270.5, 1086);
    poly45.ps[3] = Point(270.5, 1066);
    ShapeRef::createShapeRef(router, poly45, 45);

    Polygon poly46(4);
    poly46.ps[0] = Point(302.5, 1168);
    poly46.ps[1] = Point(302.5, 1188);
    poly46.ps[2] = Point(270.5, 1188);
    poly46.ps[3] = Point(270.5, 1168);
    ShapeRef::createShapeRef(router, poly46, 46);

    Polygon poly47(4);
    poly47.ps[0] = Point(570.5, 1066);
    poly47.ps[1] = Point(570.5, 1086);
    poly47.ps[2] = Point(538.5, 1086);
    poly47.ps[3] = Point(538.5, 1066);
    ShapeRef::createShapeRef(router, poly47, 47);

    Polygon poly48(4);
    poly48.ps[0] = Point(570.5, 1168);
    poly48.ps[1] = Point(570.5, 1188);
    poly48.ps[2] = Point(538.5, 1188);
    poly48.ps[3] = Point(538.5, 1168);
    ShapeRef::createShapeRef(router, poly48, 48);

    Polygon poly49(4);
    poly49.ps[0] = Point(1432.5, 519.5);
    poly49.ps[1] = Point(1432.5, 581.5);
    poly49.ps[2] = Point(1370.5, 581.5);
    poly49.ps[3] = Point(1370.5, 519.5);
    ShapeRef::createShapeRef(router, poly49, 49);

    Polygon poly50(4);
    poly50.ps[0] = Point(1222.5, 249);
    poly50.ps[1] = Point(1222.5, 311);
    poly50.ps[2] = Point(1160.5, 311);
    poly50.ps[3] = Point(1160.5, 249);
    ShapeRef::createShapeRef(router, poly50, 50);

    Polygon poly51(4);
    poly51.ps[0] = Point(1222.5, 1748.42);
    poly51.ps[1] = Point(1222.5, 1810.42);
    poly51.ps[2] = Point(1160.5, 1810.42);
    poly51.ps[3] = Point(1160.5, 1748.42);
    ShapeRef::createShapeRef(router, poly51, 51);

    Polygon poly52(4);
    poly52.ps[0] = Point(317.5, 553);
    poly52.ps[1] = Point(317.5, 615);
    poly52.ps[2] = Point(255.5, 615);
    poly52.ps[3] = Point(255.5, 553);
    ShapeRef::createShapeRef(router, poly52, 52);

    Polygon poly53(4);
    poly53.ps[0] = Point(317.5, 852);
    poly53.ps[1] = Point(317.5, 914);
    poly53.ps[2] = Point(255.5, 914);
    poly53.ps[3] = Point(255.5, 852);
    ShapeRef::createShapeRef(router, poly53, 53);

    Polygon poly54(4);
    poly54.ps[0] = Point(767.5, 1260.42);
    poly54.ps[1] = Point(767.5, 1322.42);
    poly54.ps[2] = Point(705.5, 1322.42);
    poly54.ps[3] = Point(705.5, 1260.42);
    ShapeRef::createShapeRef(router, poly54, 54);

    Polygon poly55(4);
    poly55.ps[0] = Point(767.5, 852);
    poly55.ps[1] = Point(767.5, 914);
    poly55.ps[2] = Point(705.5, 914);
    poly55.ps[3] = Point(705.5, 852);
    ShapeRef::createShapeRef(router, poly55, 55);

    Polygon poly56(4);
    poly56.ps[0] = Point(1222.5, 553);
    poly56.ps[1] = Point(1222.5, 615);
    poly56.ps[2] = Point(1160.5, 615);
    poly56.ps[3] = Point(1160.5, 553);
    ShapeRef::createShapeRef(router, poly56, 56);

    Polygon poly57(4);
    poly57.ps[0] = Point(1222.5, 852);
    poly57.ps[1] = Point(1222.5, 914);
    poly57.ps[2] = Point(1160.5, 914);
    poly57.ps[3] = Point(1160.5, 852);
    ShapeRef::createShapeRef(router, poly57, 57);

    Polygon poly58(4);
    poly58.ps[0] = Point(1222.5, 1872.42);
    poly58.ps[1] = Point(1222.5, 1934.42);
    poly58.ps[2] = Point(1160.5, 1934.42);
    poly58.ps[3] = Point(1160.5, 1872.42);
    ShapeRef::createShapeRef(router, poly58, 58);

    Polygon poly59(4);
    poly59.ps[0] = Point(1222.5, 1624.42);
    poly59.ps[1] = Point(1222.5, 1686.42);
    poly59.ps[2] = Point(1160.5, 1686.42);
    poly59.ps[3] = Point(1160.5, 1624.42);
    ShapeRef::createShapeRef(router, poly59, 59);
#endif

    Polygon poly60(4);
    poly60.ps[0] = Point(1222.5, 1424.42);
    poly60.ps[1] = Point(1222.5, 1486.42);
    poly60.ps[2] = Point(1160.5, 1486.42);
    poly60.ps[3] = Point(1160.5, 1424.42);
    ShapeRef::createShapeRef(router, poly60, 60);

#ifdef ALL
    Polygon poly61(4);
    poly61.ps[0] = Point(1463.5, 2138.42);
    poly61.ps[1] = Point(1463.5, 2200.42);
    poly61.ps[2] = Point(1401.5, 2200.42);
    poly61.ps[3] = Point(1401.5, 2138.42);
    ShapeRef::createShapeRef(router, poly61, 61);

    Polygon poly62(4);
    poly62.ps[0] = Point(705.5, 2281.46);
    poly62.ps[1] = Point(705.5, 2343.46);
    poly62.ps[2] = Point(643.5, 2343.46);
    poly62.ps[3] = Point(643.5, 2281.46);
    ShapeRef::createShapeRef(router, poly62, 62);

    Polygon poly63(4);
    poly63.ps[0] = Point(1358.5, 2348.79);
    poly63.ps[1] = Point(1358.5, 2410.79);
    poly63.ps[2] = Point(1296.5, 2410.79);
    poly63.ps[3] = Point(1296.5, 2348.79);
    ShapeRef::createShapeRef(router, poly63, 63);

    Polygon poly64(4);
    poly64.ps[0] = Point(1222.5, 2138.42);
    poly64.ps[1] = Point(1222.5, 2200.42);
    poly64.ps[2] = Point(1160.5, 2200.42);
    poly64.ps[3] = Point(1160.5, 2138.42);
    ShapeRef::createShapeRef(router, poly64, 64);

    Polygon poly65(4);
    poly65.ps[0] = Point(860.5, 2138.42);
    poly65.ps[1] = Point(860.5, 2200.42);
    poly65.ps[2] = Point(798.5, 2200.42);
    poly65.ps[3] = Point(798.5, 2138.42);
    ShapeRef::createShapeRef(router, poly65, 65);

    Polygon poly66(4);
    poly66.ps[0] = Point(282.5, 2138.42);
    poly66.ps[1] = Point(282.5, 2200.42);
    poly66.ps[2] = Point(220.5, 2200.42);
    poly66.ps[3] = Point(220.5, 2138.42);
    ShapeRef::createShapeRef(router, poly66, 66);

    Polygon poly67(4);
    poly67.ps[0] = Point(860.5, 2348.79);
    poly67.ps[1] = Point(860.5, 2410.79);
    poly67.ps[2] = Point(798.5, 2410.79);
    poly67.ps[3] = Point(798.5, 2348.79);
    ShapeRef::createShapeRef(router, poly67, 67);

    Polygon poly68(4);
    poly68.ps[0] = Point(554.5, 2138.42);
    poly68.ps[1] = Point(554.5, 2200.42);
    poly68.ps[2] = Point(492.5, 2200.42);
    poly68.ps[3] = Point(492.5, 2138.42);
    ShapeRef::createShapeRef(router, poly68, 68);

    Polygon poly69(4);
    poly69.ps[0] = Point(406.5, 2281.46);
    poly69.ps[1] = Point(406.5, 2343.46);
    poly69.ps[2] = Point(344.5, 2343.46);
    poly69.ps[3] = Point(344.5, 2281.46);
    ShapeRef::createShapeRef(router, poly69, 69);

    Polygon poly70(4);
    poly70.ps[0] = Point(1222.5, 1084.75);
    poly70.ps[1] = Point(1222.5, 1146.75);
    poly70.ps[2] = Point(1160.5, 1146.75);
    poly70.ps[3] = Point(1160.5, 1084.75);
    ShapeRef::createShapeRef(router, poly70, 70);

    Polygon poly71(4);
    poly71.ps[0] = Point(247.5, 1045);
    poly71.ps[1] = Point(247.5, 1107);
    poly71.ps[2] = Point(185.5, 1107);
    poly71.ps[3] = Point(185.5, 1045);
    ShapeRef::createShapeRef(router, poly71, 71);

    Polygon poly72(4);
    poly72.ps[0] = Point(437.5, 1045);
    poly72.ps[1] = Point(437.5, 1107);
    poly72.ps[2] = Point(375.5, 1107);
    poly72.ps[3] = Point(375.5, 1045);
    ShapeRef::createShapeRef(router, poly72, 72);

    Polygon poly73(4);
    poly73.ps[0] = Point(437.5, 1147);
    poly73.ps[1] = Point(437.5, 1209);
    poly73.ps[2] = Point(375.5, 1209);
    poly73.ps[3] = Point(375.5, 1147);
    ShapeRef::createShapeRef(router, poly73, 73);

    Polygon poly74(4);
    poly74.ps[0] = Point(247.5, 1147);
    poly74.ps[1] = Point(247.5, 1209);
    poly74.ps[2] = Point(185.5, 1209);
    poly74.ps[3] = Point(185.5, 1147);
    ShapeRef::createShapeRef(router, poly74, 74);
    
    Polygon poly75(4);
    poly75.ps[0] = Point(715.439, 1924.42);
    poly75.ps[1] = Point(715.439, 1944.42);
    poly75.ps[2] = Point(683.439, 1944.42);
    poly75.ps[3] = Point(683.439, 1924.42);
    ShapeRef::createShapeRef(router, poly75, 75);

    Polygon poly76(4);
    poly76.ps[0] = Point(282.5, 1872.42);
    poly76.ps[1] = Point(282.5, 1934.42);
    poly76.ps[2] = Point(220.5, 1934.42);
    poly76.ps[3] = Point(220.5, 1872.42);
    ShapeRef::createShapeRef(router, poly76, 76);

    Polygon poly77(4);
    poly77.ps[0] = Point(1105.5, 2400.79);
    poly77.ps[1] = Point(1105.5, 2420.79);
    poly77.ps[2] = Point(1073.5, 2420.79);
    poly77.ps[3] = Point(1073.5, 2400.79);
    ShapeRef::createShapeRef(router, poly77, 77);

    Polygon poly78(4);
    poly78.ps[0] = Point(715.439, 1862.42);
    poly78.ps[1] = Point(715.439, 1882.42);
    poly78.ps[2] = Point(683.439, 1882.42);
    poly78.ps[3] = Point(683.439, 1862.42);
    ShapeRef::createShapeRef(router, poly78, 78);

    Polygon poly79(4);
    poly79.ps[0] = Point(1506.5, 2243.29);
    poly79.ps[1] = Point(1506.5, 2408.29);
    poly79.ps[2] = Point(1369.5, 2408.29);
    poly79.ps[3] = Point(1369.5, 2243.29);
    ShapeRef::createShapeRef(router, poly79, 79);

    Polygon poly80(4);
    poly80.ps[0] = Point(1232.5, 1327.42);
    poly80.ps[1] = Point(1232.5, 1359.42);
    poly80.ps[2] = Point(1212.5, 1359.42);
    poly80.ps[3] = Point(1212.5, 1327.42);
    ShapeRef::createShapeRef(router, poly80, 80);
#endif

    Polygon poly81(4);
    poly81.ps[0] = Point(1250.5, 1491.42);
    poly81.ps[1] = Point(1250.5, 1523.42);
    poly81.ps[2] = Point(1230.5, 1523.42);
    poly81.ps[3] = Point(1230.5, 1491.42);
    ShapeRef::createShapeRef(router, poly81, 81);

    Polygon poly82(4);
    poly82.ps[0] = Point(1341.5, 1491.42);
    poly82.ps[1] = Point(1341.5, 1523.42);
    poly82.ps[2] = Point(1321.5, 1523.42);
    poly82.ps[3] = Point(1321.5, 1491.42);
    ShapeRef::createShapeRef(router, poly82, 82);

#ifdef ALL
    Polygon poly83(4);
    poly83.ps[0] = Point(570.5, 2030.42);
    poly83.ps[1] = Point(570.5, 2050.42);
    poly83.ps[2] = Point(538.5, 2050.42);
    poly83.ps[3] = Point(538.5, 2030.42);
    ShapeRef::createShapeRef(router, poly83, 83);
#endif

    Polygon poly84(4);
    poly84.ps[0] = Point(1432.5, 1491.42);
    poly84.ps[1] = Point(1432.5, 1523.42);
    poly84.ps[2] = Point(1412.5, 1523.42);
    poly84.ps[3] = Point(1412.5, 1491.42);
    ShapeRef::createShapeRef(router, poly84, 84);

#ifdef ALL
    Polygon poly85(4);
    poly85.ps[0] = Point(980.5, 1538.42);
    poly85.ps[1] = Point(980.5, 1600.42);
    poly85.ps[2] = Point(918.5, 1600.42);
    poly85.ps[3] = Point(918.5, 1538.42);
    ShapeRef::createShapeRef(router, poly85, 85);

    Polygon poly86(4);
    poly86.ps[0] = Point(1116.5, 1639.42);
    poly86.ps[1] = Point(1116.5, 1659.42);
    poly86.ps[2] = Point(1084.5, 1659.42);
    poly86.ps[3] = Point(1084.5, 1639.42);
    ShapeRef::createShapeRef(router, poly86, 86);

    Polygon poly87(4);
    poly87.ps[0] = Point(1116.5, 1445.42);
    poly87.ps[1] = Point(1116.5, 1465.42);
    poly87.ps[2] = Point(1084.5, 1465.42);
    poly87.ps[3] = Point(1084.5, 1445.42);
    ShapeRef::createShapeRef(router, poly87, 87);
#endif

    Polygon poly88(4);
    poly88.ps[0] = Point(1222.5, 1260.42);
    poly88.ps[1] = Point(1222.5, 1322.42);
    poly88.ps[2] = Point(1160.5, 1322.42);
    poly88.ps[3] = Point(1160.5, 1260.42);
    ShapeRef::createShapeRef(router, poly88, 88);

#ifdef ALL
    Polygon poly89(4);
    poly89.ps[0] = Point(170.5, 2215.42);
    poly89.ps[1] = Point(170.5, 2247.42);
    poly89.ps[2] = Point(150.5, 2247.42);
    poly89.ps[3] = Point(150.5, 2215.42);
    ShapeRef::createShapeRef(router, poly89, 89);

    Polygon poly90(4);
    poly90.ps[0] = Point(1323.5, 1047.75);
    poly90.ps[1] = Point(1323.5, 1079.75);
    poly90.ps[2] = Point(1303.5, 1079.75);
    poly90.ps[3] = Point(1303.5, 1047.75);
    ShapeRef::createShapeRef(router, poly90, 90);

    Polygon poly91(4);
    poly91.ps[0] = Point(723.5, 680);
    poly91.ps[1] = Point(723.5, 700);
    poly91.ps[2] = Point(691.5, 700);
    poly91.ps[3] = Point(691.5, 680);
    ShapeRef::createShapeRef(router, poly91, 91);

    Polygon poly92(4);
    poly92.ps[0] = Point(492.5, 979);
    poly92.ps[1] = Point(492.5, 999);
    poly92.ps[2] = Point(460.5, 999);
    poly92.ps[3] = Point(460.5, 979);
    ShapeRef::createShapeRef(router, poly92, 92);

    Polygon poly93(4);
    poly93.ps[0] = Point(1105.5, 2475.79);
    poly93.ps[1] = Point(1105.5, 2495.79);
    poly93.ps[2] = Point(1073.5, 2495.79);
    poly93.ps[3] = Point(1073.5, 2475.79);
    ShapeRef::createShapeRef(router, poly93, 93);

    Polygon poly94(4);
    poly94.ps[0] = Point(860.5, 2034.42);
    poly94.ps[1] = Point(860.5, 2096.42);
    poly94.ps[2] = Point(798.5, 2096.42);
    poly94.ps[3] = Point(798.5, 2034.42);
    ShapeRef::createShapeRef(router, poly94, 94);

    Polygon poly95(4);
    poly95.ps[0] = Point(1277.5, 1176.75);
    poly95.ps[1] = Point(1277.5, 1216.75);
    poly95.ps[2] = Point(1201.5, 1216.75);
    poly95.ps[3] = Point(1201.5, 1176.75);
    ShapeRef::createShapeRef(router, poly95, 95);

    Polygon poly96(4);
    poly96.ps[0] = Point(797.5, 2278.79);
    poly96.ps[1] = Point(797.5, 2338.79);
    poly96.ps[2] = Point(741.5, 2338.79);
    poly96.ps[3] = Point(741.5, 2278.79);
    ShapeRef::createShapeRef(router, poly96, 96);

    Polygon poly97(4);
    poly97.ps[0] = Point(241.5, 2211.42);
    poly97.ps[1] = Point(241.5, 2251.42);
    poly97.ps[2] = Point(165.5, 2251.42);
    poly97.ps[3] = Point(165.5, 2211.42);
    ShapeRef::createShapeRef(router, poly97, 97);

    Polygon poly98(4);
    poly98.ps[0] = Point(797.5, 2420.79);
    poly98.ps[1] = Point(797.5, 2480.79);
    poly98.ps[2] = Point(741.5, 2480.79);
    poly98.ps[3] = Point(741.5, 2420.79);
    ShapeRef::createShapeRef(router, poly98, 98);

    Polygon poly99(4);
    poly99.ps[0] = Point(915.5, 2297.79);
    poly99.ps[1] = Point(915.5, 2337.79);
    poly99.ps[2] = Point(839.5, 2337.79);
    poly99.ps[3] = Point(839.5, 2297.79);
    ShapeRef::createShapeRef(router, poly99, 99);

    Polygon poly100(4);
    poly100.ps[0] = Point(1117.5, 2203.79);
    poly100.ps[1] = Point(1117.5, 2263.79);
    poly100.ps[2] = Point(1061.5, 2263.79);
    poly100.ps[3] = Point(1061.5, 2203.79);
    ShapeRef::createShapeRef(router, poly100, 100);

    Polygon poly101(4);
    poly101.ps[0] = Point(1117.5, 2278.79);
    poly101.ps[1] = Point(1117.5, 2338.79);
    poly101.ps[2] = Point(1061.5, 2338.79);
    poly101.ps[3] = Point(1061.5, 2278.79);
    ShapeRef::createShapeRef(router, poly101, 101);

    Polygon poly102(4);
    poly102.ps[0] = Point(1039.5, 2189.79);
    poly102.ps[1] = Point(1039.5, 2249.79);
    poly102.ps[2] = Point(983.5, 2249.79);
    poly102.ps[3] = Point(983.5, 2189.79);
    ShapeRef::createShapeRef(router, poly102, 102);

    Polygon poly103(4);
    poly103.ps[0] = Point(1097.5, 2078.42);
    poly103.ps[1] = Point(1097.5, 2118.42);
    poly103.ps[2] = Point(1021.5, 2118.42);
    poly103.ps[3] = Point(1021.5, 2078.42);
    ShapeRef::createShapeRef(router, poly103, 103);

    Polygon poly104(4);
    poly104.ps[0] = Point(733.5, 2099.42);
    poly104.ps[1] = Point(733.5, 2159.42);
    poly104.ps[2] = Point(677.5, 2159.42);
    poly104.ps[3] = Point(677.5, 2099.42);
    ShapeRef::createShapeRef(router, poly104, 104);

    Polygon poly105(4);
    poly105.ps[0] = Point(403.5, 2099.42);
    poly105.ps[1] = Point(403.5, 2159.42);
    poly105.ps[2] = Point(347.5, 2159.42);
    poly105.ps[3] = Point(347.5, 2099.42);
    ShapeRef::createShapeRef(router, poly105, 105);

    Polygon poly106(4);
    poly106.ps[0] = Point(1386.5, 2099.42);
    poly106.ps[1] = Point(1386.5, 2159.42);
    poly106.ps[2] = Point(1330.5, 2159.42);
    poly106.ps[3] = Point(1330.5, 2099.42);
    ShapeRef::createShapeRef(router, poly106, 106);

    Polygon poly107(4);
    poly107.ps[0] = Point(1277.5, 1945.42);
    poly107.ps[1] = Point(1277.5, 1985.42);
    poly107.ps[2] = Point(1201.5, 1985.42);
    poly107.ps[3] = Point(1201.5, 1945.42);
    ShapeRef::createShapeRef(router, poly107, 107);

    Polygon poly108(4);
    poly108.ps[0] = Point(1277.5, 1821.42);
    poly108.ps[1] = Point(1277.5, 1861.42);
    poly108.ps[2] = Point(1201.5, 1861.42);
    poly108.ps[3] = Point(1201.5, 1821.42);
    ShapeRef::createShapeRef(router, poly108, 108);

    Polygon poly109(4);
    poly109.ps[0] = Point(1277.5, 1697.42);
    poly109.ps[1] = Point(1277.5, 1737.42);
    poly109.ps[2] = Point(1201.5, 1737.42);
    poly109.ps[3] = Point(1201.5, 1697.42);
    ShapeRef::createShapeRef(router, poly109, 109);

    Polygon poly110(4);
    poly110.ps[0] = Point(1150.5, 1323.42);
    poly110.ps[1] = Point(1150.5, 1363.42);
    poly110.ps[2] = Point(1074.5, 1363.42);
    poly110.ps[3] = Point(1074.5, 1323.42);
    ShapeRef::createShapeRef(router, poly110, 110);

    Polygon poly111(4);
    poly111.ps[0] = Point(1008.5, 1221.42);
    poly111.ps[1] = Point(1008.5, 1281.42);
    poly111.ps[2] = Point(952.5, 1281.42);
    poly111.ps[3] = Point(952.5, 1221.42);
    ShapeRef::createShapeRef(router, poly111, 111);

    Polygon poly112(4);
    poly112.ps[0] = Point(1308.5, 1043.75);
    poly112.ps[1] = Point(1308.5, 1083.75);
    poly112.ps[2] = Point(1232.5, 1083.75);
    poly112.ps[3] = Point(1232.5, 1043.75);
    ShapeRef::createShapeRef(router, poly112, 112);

    Polygon poly113(4);
    poly113.ps[0] = Point(1150.5, 1043.75);
    poly113.ps[1] = Point(1150.5, 1083.75);
    poly113.ps[2] = Point(1074.5, 1083.75);
    poly113.ps[3] = Point(1074.5, 1043.75);
    ShapeRef::createShapeRef(router, poly113, 113);

    Polygon poly114(4);
    poly114.ps[0] = Point(1355.5, 480.5);
    poly114.ps[1] = Point(1355.5, 540.5);
    poly114.ps[2] = Point(1299.5, 540.5);
    poly114.ps[3] = Point(1299.5, 480.5);
    ShapeRef::createShapeRef(router, poly114, 114);

    Polygon poly115(4);
    poly115.ps[0] = Point(1277.5, 720);
    poly115.ps[1] = Point(1277.5, 760);
    poly115.ps[2] = Point(1201.5, 760);
    poly115.ps[3] = Point(1201.5, 720);
    ShapeRef::createShapeRef(router, poly115, 115);

    Polygon poly116(4);
    poly116.ps[0] = Point(1277.5, 458);
    poly116.ps[1] = Point(1277.5, 498);
    poly116.ps[2] = Point(1201.5, 498);
    poly116.ps[3] = Point(1201.5, 458);
    ShapeRef::createShapeRef(router, poly116, 116);

    Polygon poly117(4);
    poly117.ps[0] = Point(946.5, 813);
    poly117.ps[1] = Point(946.5, 873);
    poly117.ps[2] = Point(890.5, 873);
    poly117.ps[3] = Point(890.5, 813);
    ShapeRef::createShapeRef(router, poly117, 117);

    Polygon poly118(4);
    poly118.ps[0] = Point(504.5, 707);
    poly118.ps[1] = Point(504.5, 767);
    poly118.ps[2] = Point(448.5, 767);
    poly118.ps[3] = Point(448.5, 707);
    ShapeRef::createShapeRef(router, poly118, 118);

    Polygon poly119(4);
    poly119.ps[0] = Point(504.5, 782);
    poly119.ps[1] = Point(504.5, 842);
    poly119.ps[2] = Point(448.5, 842);
    poly119.ps[3] = Point(448.5, 782);
    ShapeRef::createShapeRef(router, poly119, 119);

    Polygon poly120(4);
    poly120.ps[0] = Point(826.5, 670);
    poly120.ps[1] = Point(826.5, 730);
    poly120.ps[2] = Point(770.5, 730);
    poly120.ps[3] = Point(770.5, 670);
    ShapeRef::createShapeRef(router, poly120, 120);

    Polygon poly121(4);
    poly121.ps[0] = Point(633.5, 720);
    poly121.ps[1] = Point(633.5, 760);
    poly121.ps[2] = Point(557.5, 760);
    poly121.ps[3] = Point(557.5, 720);
    ShapeRef::createShapeRef(router, poly121, 121);

    Polygon poly122(4);
    poly122.ps[0] = Point(372.5, 720);
    poly122.ps[1] = Point(372.5, 760);
    poly122.ps[2] = Point(296.5, 760);
    poly122.ps[3] = Point(296.5, 720);
    ShapeRef::createShapeRef(router, poly122, 122);

    Polygon poly123(4);
    poly123.ps[0] = Point(735.5, 408);
    poly123.ps[1] = Point(735.5, 468);
    poly123.ps[2] = Point(679.5, 468);
    poly123.ps[3] = Point(679.5, 408);
    ShapeRef::createShapeRef(router, poly123, 123);

    Polygon poly124(4);
    poly124.ps[0] = Point(735.5, 483);
    poly124.ps[1] = Point(735.5, 543);
    poly124.ps[2] = Point(679.5, 543);
    poly124.ps[3] = Point(679.5, 483);
    ShapeRef::createShapeRef(router, poly124, 124);

    Polygon poly125(4);
    poly125.ps[0] = Point(735.5, 333);
    poly125.ps[1] = Point(735.5, 393);
    poly125.ps[2] = Point(679.5, 393);
    poly125.ps[3] = Point(679.5, 333);
    ShapeRef::createShapeRef(router, poly125, 125);

    Polygon poly126(4);
    poly126.ps[0] = Point(795.5, 271);
    poly126.ps[1] = Point(795.5, 331);
    poly126.ps[2] = Point(739.5, 331);
    poly126.ps[3] = Point(739.5, 271);
    ShapeRef::createShapeRef(router, poly126, 126);

    Polygon poly127(4);
    poly127.ps[0] = Point(795.5, 169);
    poly127.ps[1] = Point(795.5, 229);
    poly127.ps[2] = Point(739.5, 229);
    poly127.ps[3] = Point(739.5, 169);
    ShapeRef::createShapeRef(router, poly127, 127);

    Polygon poly128(4);
    poly128.ps[0] = Point(520.5, 2242.46);
    poly128.ps[1] = Point(520.5, 2302.46);
    poly128.ps[2] = Point(464.5, 2302.46);
    poly128.ps[3] = Point(464.5, 2242.46);
    ShapeRef::createShapeRef(router, poly128, 128);

    Polygon poly129(4);
    poly129.ps[0] = Point(1277.5, 1549.42);
    poly129.ps[1] = Point(1277.5, 1589.42);
    poly129.ps[2] = Point(1201.5, 1589.42);
    poly129.ps[3] = Point(1201.5, 1549.42);
    ShapeRef::createShapeRef(router, poly129, 129);

    Polygon poly130(4);
    poly130.ps[0] = Point(735.5, 625);
    poly130.ps[1] = Point(735.5, 685);
    poly130.ps[2] = Point(679.5, 685);
    poly130.ps[3] = Point(679.5, 625);
    ShapeRef::createShapeRef(router, poly130, 130);

    Polygon poly131(4);
    poly131.ps[0] = Point(504.5, 924);
    poly131.ps[1] = Point(504.5, 984);
    poly131.ps[2] = Point(448.5, 984);
    poly131.ps[3] = Point(448.5, 924);
    ShapeRef::createShapeRef(router, poly131, 131);

    Polygon poly132(4);
    poly132.ps[0] = Point(314.5, 1006);
    poly132.ps[1] = Point(314.5, 1066);
    poly132.ps[2] = Point(258.5, 1066);
    poly132.ps[3] = Point(258.5, 1006);
    ShapeRef::createShapeRef(router, poly132, 132);

    Polygon poly133(4);
    poly133.ps[0] = Point(314.5, 1108);
    poly133.ps[1] = Point(314.5, 1168);
    poly133.ps[2] = Point(258.5, 1168);
    poly133.ps[3] = Point(258.5, 1108);
    ShapeRef::createShapeRef(router, poly133, 133);

    Polygon poly134(4);
    poly134.ps[0] = Point(582.5, 1006);
    poly134.ps[1] = Point(582.5, 1066);
    poly134.ps[2] = Point(526.5, 1066);
    poly134.ps[3] = Point(526.5, 1006);
    ShapeRef::createShapeRef(router, poly134, 134);

    Polygon poly135(4);
    poly135.ps[0] = Point(582.5, 1108);
    poly135.ps[1] = Point(582.5, 1168);
    poly135.ps[2] = Point(526.5, 1168);
    poly135.ps[3] = Point(526.5, 1108);
    ShapeRef::createShapeRef(router, poly135, 135);

    Polygon poly136(4);
    poly136.ps[0] = Point(727.439, 1944.42);
    poly136.ps[1] = Point(727.439, 2004.42);
    poly136.ps[2] = Point(671.439, 2004.42);
    poly136.ps[3] = Point(671.439, 1944.42);
    ShapeRef::createShapeRef(router, poly136, 136);

    Polygon poly137(4);
    poly137.ps[0] = Point(1117.5, 2420.79);
    poly137.ps[1] = Point(1117.5, 2480.79);
    poly137.ps[2] = Point(1061.5, 2480.79);
    poly137.ps[3] = Point(1061.5, 2420.79);
    ShapeRef::createShapeRef(router, poly137, 137);

    Polygon poly138(4);
    poly138.ps[0] = Point(727.439, 1802.42);
    poly138.ps[1] = Point(727.439, 1862.42);
    poly138.ps[2] = Point(671.439, 1862.42);
    poly138.ps[3] = Point(671.439, 1802.42);
    ShapeRef::createShapeRef(router, poly138, 138);
#endif

    Polygon poly139(4);
    poly139.ps[0] = Point(1308.5, 1323.42);
    poly139.ps[1] = Point(1308.5, 1363.42);
    poly139.ps[2] = Point(1232.5, 1363.42);
    poly139.ps[3] = Point(1232.5, 1323.42);
    ShapeRef::createShapeRef(router, poly139, 139);

    Polygon poly140(4);
    poly140.ps[0] = Point(1326.5, 1487.42);
    poly140.ps[1] = Point(1326.5, 1527.42);
    poly140.ps[2] = Point(1250.5, 1527.42);
    poly140.ps[3] = Point(1250.5, 1487.42);
    ShapeRef::createShapeRef(router, poly140, 140);

    Polygon poly141(4);
    poly141.ps[0] = Point(1417.5, 1487.42);
    poly141.ps[1] = Point(1417.5, 1527.42);
    poly141.ps[2] = Point(1341.5, 1527.42);
    poly141.ps[3] = Point(1341.5, 1487.42);
    ShapeRef::createShapeRef(router, poly141, 141);

#ifdef ALL
    Polygon poly142(4);
    poly142.ps[0] = Point(582.5, 1970.42);
    poly142.ps[1] = Point(582.5, 2030.42);
    poly142.ps[2] = Point(526.5, 2030.42);
    poly142.ps[3] = Point(526.5, 1970.42);
    ShapeRef::createShapeRef(router, poly142, 142);

    Polygon poly143(4);
    poly143.ps[0] = Point(1508.5, 1487.42);
    poly143.ps[1] = Point(1508.5, 1527.42);
    poly143.ps[2] = Point(1432.5, 1527.42);
    poly143.ps[3] = Point(1432.5, 1487.42);
    ShapeRef::createShapeRef(router, poly143, 143);

    Polygon poly144(4);
    poly144.ps[0] = Point(1128.5, 1579.42);
    poly144.ps[1] = Point(1128.5, 1639.42);
    poly144.ps[2] = Point(1072.5, 1639.42);
    poly144.ps[3] = Point(1072.5, 1579.42);
    ShapeRef::createShapeRef(router, poly144, 144);

    Polygon poly145(4);
    poly145.ps[0] = Point(1128.5, 1385.42);
    poly145.ps[1] = Point(1128.5, 1445.42);
    poly145.ps[2] = Point(1072.5, 1445.42);
    poly145.ps[3] = Point(1072.5, 1385.42);
    ShapeRef::createShapeRef(router, poly145, 145);

    Polygon poly146(4);
    poly146.ps[0] = Point(150.5, 2211.42);
    poly146.ps[1] = Point(150.5, 2251.42);
    poly146.ps[2] = Point(74.5, 2251.42);
    poly146.ps[3] = Point(74.5, 2211.42);
    ShapeRef::createShapeRef(router, poly146, 146);
#endif

    Polygon poly147(4);
    poly147.ps[0] = Point(1399.5, 1043.75);
    poly147.ps[1] = Point(1399.5, 1083.75);
    poly147.ps[2] = Point(1323.5, 1083.75);
    poly147.ps[3] = Point(1323.5, 1043.75);
    ShapeRef::createShapeRef(router, poly147, 147);

#ifdef ALL
    Polygon poly148(4);
    poly148.ps[0] = Point(735.5, 700);
    poly148.ps[1] = Point(735.5, 760);
    poly148.ps[2] = Point(679.5, 760);
    poly148.ps[3] = Point(679.5, 700);
    ShapeRef::createShapeRef(router, poly148, 148);

    Polygon poly149(4);
    poly149.ps[0] = Point(504.5, 999);
    poly149.ps[1] = Point(504.5, 1059);
    poly149.ps[2] = Point(448.5, 1059);
    poly149.ps[3] = Point(448.5, 999);
    ShapeRef::createShapeRef(router, poly149, 149);

    Polygon poly150(4);
    poly150.ps[0] = Point(1117.5, 2495.79);
    poly150.ps[1] = Point(1117.5, 2555.79);
    poly150.ps[2] = Point(1061.5, 2555.79);
    poly150.ps[3] = Point(1061.5, 2495.79);
    ShapeRef::createShapeRef(router, poly150, 150);

    Polygon poly151(4);
    poly151.ps[0] = Point(1482, 966.25);
    poly151.ps[1] = Point(1482, 1006.25);
    poly151.ps[2] = Point(1422, 1006.25);
    poly151.ps[3] = Point(1422, 966.25);
    ShapeRef::createShapeRef(router, poly151, 151);

    Polygon poly152(4);
    poly152.ps[0] = Point(1482, 1006.25);
    poly152.ps[1] = Point(1482, 1046.25);
    poly152.ps[2] = Point(1422, 1046.25);
    poly152.ps[3] = Point(1422, 1006.25);
    ShapeRef::createShapeRef(router, poly152, 152);

    Polygon poly153(4);
    poly153.ps[0] = Point(1533, 1134.75);
    poly153.ps[1] = Point(1533, 1194.75);
    poly153.ps[2] = Point(1493, 1194.75);
    poly153.ps[3] = Point(1493, 1134.75);
    ShapeRef::createShapeRef(router, poly153, 153);

    Polygon poly154(4);
    poly154.ps[0] = Point(1573, 1134.75);
    poly154.ps[1] = Point(1573, 1194.75);
    poly154.ps[2] = Point(1533, 1194.75);
    poly154.ps[3] = Point(1533, 1134.75);
    ShapeRef::createShapeRef(router, poly154, 154);

    Polygon poly155(4);
    poly155.ps[0] = Point(1272, 159.5);
    poly155.ps[1] = Point(1272, 219.5);
    poly155.ps[2] = Point(1232, 219.5);
    poly155.ps[3] = Point(1232, 159.5);
    ShapeRef::createShapeRef(router, poly155, 155);

    Polygon poly156(4);
    poly156.ps[0] = Point(252.5, 2005.92);
    poly156.ps[1] = Point(252.5, 2045.92);
    poly156.ps[2] = Point(192.5, 2045.92);
    poly156.ps[3] = Point(192.5, 2005.92);
    ShapeRef::createShapeRef(router, poly156, 156);

    Polygon poly157(4);
    poly157.ps[0] = Point(252.5, 2045.92);
    poly157.ps[1] = Point(252.5, 2085.92);
    poly157.ps[2] = Point(192.5, 2085.92);
    poly157.ps[3] = Point(192.5, 2045.92);
    ShapeRef::createShapeRef(router, poly157, 157);

    Polygon poly158(4);
    poly158.ps[0] = Point(741.5, 1642.92);
    poly158.ps[1] = Point(741.5, 1682.92);
    poly158.ps[2] = Point(681.5, 1682.92);
    poly158.ps[3] = Point(681.5, 1642.92);
    ShapeRef::createShapeRef(router, poly158, 158);

    Polygon poly159(4);
    poly159.ps[0] = Point(1458.5, 2243.79);
    poly159.ps[1] = Point(1458.5, 2303.79);
    poly159.ps[2] = Point(1418.5, 2303.79);
    poly159.ps[3] = Point(1418.5, 2243.79);
    ShapeRef::createShapeRef(router, poly159, 159);

    auto connRef160 = ConnRef::createConnRef(router, 160);
    ConnEnd srcPt160(Point(1191.5, 1211.75), 2);
    connRef160->setSourceEndpoint(srcPt160);
    ConnEnd dstPt160(Point(736.5, 1291.42), 15);
    connRef160->setDestEndpoint(dstPt160);
    connRef160->setRoutingType((ConnType)2);

    auto connRef161 = ConnRef::createConnRef(router, 161);
    ConnEnd srcPt161(Point(1191.5, 1181.75), 1);
    connRef161->setSourceEndpoint(srcPt161);
    ConnEnd dstPt161(Point(1191.5, 1115.75), 15);
    connRef161->setDestEndpoint(dstPt161);
    connRef161->setRoutingType((ConnType)2);

    auto connRef162 = ConnRef::createConnRef(router, 162);
    ConnEnd srcPt162(Point(1191.5, 1211.75), 2);
    connRef162->setSourceEndpoint(srcPt162);
    ConnEnd dstPt162(Point(1191.5, 1291.42), 15);
    connRef162->setDestEndpoint(dstPt162);
    connRef162->setRoutingType((ConnType)2);

    auto connRef163 = ConnRef::createConnRef(router, 163);
    ConnEnd srcPt163(Point(754.5, 2348.79), 4);
    connRef163->setSourceEndpoint(srcPt163);
    ConnEnd dstPt163(Point(251.5, 2379.79), 15);
    connRef163->setDestEndpoint(dstPt163);
    connRef163->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints163(1);
    checkpoints163[0] = Point(807.5, 2379.79);
    connRef163->setRoutingCheckpoints(checkpoints163);

    auto connRef164 = ConnRef::createConnRef(router, 164);
    ConnEnd srcPt164(Point(784.5, 2348.79), 8);
    connRef164->setSourceEndpoint(srcPt164);
    ConnEnd dstPt164(Point(829.5, 2379.79), 15);
    connRef164->setDestEndpoint(dstPt164);
    connRef164->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints164(1);
    checkpoints164[0] = Point(731.5, 2379.79);
    connRef164->setRoutingCheckpoints(checkpoints164);

    auto connRef165 = ConnRef::createConnRef(router, 165);
    ConnEnd srcPt165(Point(251.5, 2246.42), 2);
    connRef165->setSourceEndpoint(srcPt165);
    ConnEnd dstPt165(Point(251.5, 2379.79), 15);
    connRef165->setDestEndpoint(dstPt165);
    connRef165->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints165(1);
    checkpoints165[0] = Point(226.5, 2261.42);
    connRef165->setRoutingCheckpoints(checkpoints165);

    auto connRef166 = ConnRef::createConnRef(router, 166);
    ConnEnd srcPt166(Point(754.5, 2410.79), 4);
    connRef166->setSourceEndpoint(srcPt166);
    ConnEnd dstPt166(Point(251.5, 2379.79), 15);
    connRef166->setDestEndpoint(dstPt166);
    connRef166->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints166(1);
    checkpoints166[0] = Point(807.5, 2379.79);
    connRef166->setRoutingCheckpoints(checkpoints166);

    auto connRef167 = ConnRef::createConnRef(router, 167);
    ConnEnd srcPt167(Point(784.5, 2410.79), 8);
    connRef167->setSourceEndpoint(srcPt167);
    ConnEnd dstPt167(Point(829.5, 2379.79), 15);
    connRef167->setDestEndpoint(dstPt167);
    connRef167->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints167(1);
    checkpoints167[0] = Point(731.5, 2379.79);
    connRef167->setRoutingCheckpoints(checkpoints167);

    auto connRef168 = ConnRef::createConnRef(router, 168);
    ConnEnd srcPt168(Point(251.5, 2379.79), 15);
    connRef168->setSourceEndpoint(srcPt168);
    ConnEnd dstPt168(Point(160.5, 2246.42), 2);
    connRef168->setDestEndpoint(dstPt168);
    connRef168->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints168(1);
    checkpoints168[0] = Point(226.5, 2261.42);
    connRef168->setRoutingCheckpoints(checkpoints168);

    auto connRef169 = ConnRef::createConnRef(router, 169);
    ConnEnd srcPt169(Point(829.5, 2332.79), 2);
    connRef169->setSourceEndpoint(srcPt169);
    ConnEnd dstPt169(Point(829.5, 2379.79), 15);
    connRef169->setDestEndpoint(dstPt169);
    connRef169->setRoutingType((ConnType)2);

    auto connRef170 = ConnRef::createConnRef(router, 170);
    ConnEnd srcPt170(Point(1074.5, 2273.79), 4);
    connRef170->setSourceEndpoint(srcPt170);
    ConnEnd dstPt170(Point(829.5, 2379.79), 15);
    connRef170->setDestEndpoint(dstPt170);
    connRef170->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints170(1);
    checkpoints170[0] = Point(1051.5, 2379.79);
    connRef170->setRoutingCheckpoints(checkpoints170);

    auto connRef171 = ConnRef::createConnRef(router, 171);
    ConnEnd srcPt171(Point(1074.5, 2348.79), 4);
    connRef171->setSourceEndpoint(srcPt171);
    ConnEnd dstPt171(Point(829.5, 2379.79), 15);
    connRef171->setDestEndpoint(dstPt171);
    connRef171->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints171(1);
    checkpoints171[0] = Point(1051.5, 2379.79);
    connRef171->setRoutingCheckpoints(checkpoints171);

    auto connRef172 = ConnRef::createConnRef(router, 172);
    ConnEnd srcPt172(Point(996.5, 2179.79), 4);
    connRef172->setSourceEndpoint(srcPt172);
    ConnEnd dstPt172(Point(829.5, 2169.42), 15);
    connRef172->setDestEndpoint(dstPt172);
    connRef172->setRoutingType((ConnType)2);

    auto connRef173 = ConnRef::createConnRef(router, 173);
    ConnEnd srcPt173(Point(1011.5, 2113.42), 2);
    connRef173->setSourceEndpoint(srcPt173);
    ConnEnd dstPt173(Point(829.5, 2169.42), 15);
    connRef173->setDestEndpoint(dstPt173);
    connRef173->setRoutingType((ConnType)2);

    auto connRef174 = ConnRef::createConnRef(router, 174);
    ConnEnd srcPt174(Point(690.5, 2169.42), 4);
    connRef174->setSourceEndpoint(srcPt174);
    ConnEnd dstPt174(Point(523.5, 2169.42), 15);
    connRef174->setDestEndpoint(dstPt174);
    connRef174->setRoutingType((ConnType)2);

    auto connRef175 = ConnRef::createConnRef(router, 175);
    ConnEnd srcPt175(Point(690.5, 2169.42), 4);
    connRef175->setSourceEndpoint(srcPt175);
    ConnEnd dstPt175(Point(829.5, 2065.42), 15);
    connRef175->setDestEndpoint(dstPt175);
    connRef175->setRoutingType((ConnType)2);

    auto connRef176 = ConnRef::createConnRef(router, 176);
    ConnEnd srcPt176(Point(360.5, 2169.42), 4);
    connRef176->setSourceEndpoint(srcPt176);
    ConnEnd dstPt176(Point(251.5, 2169.42), 15);
    connRef176->setDestEndpoint(dstPt176);
    connRef176->setRoutingType((ConnType)2);

    auto connRef177 = ConnRef::createConnRef(router, 177);
    ConnEnd srcPt177(Point(390.5, 2169.42), 8);
    connRef177->setSourceEndpoint(srcPt177);
    ConnEnd dstPt177(Point(523.5, 2169.42), 15);
    connRef177->setDestEndpoint(dstPt177);
    connRef177->setRoutingType((ConnType)2);

    auto connRef178 = ConnRef::createConnRef(router, 178);
    ConnEnd srcPt178(Point(360.5, 2169.42), 4);
    connRef178->setSourceEndpoint(srcPt178);
    ConnEnd dstPt178(Point(375.5, 2312.46), 15);
    connRef178->setDestEndpoint(dstPt178);
    connRef178->setRoutingType((ConnType)2);

    auto connRef179 = ConnRef::createConnRef(router, 179);
    ConnEnd srcPt179(Point(1373.5, 2169.42), 8);
    connRef179->setSourceEndpoint(srcPt179);
    ConnEnd dstPt179(Point(1432.5, 2169.42), 15);
    connRef179->setDestEndpoint(dstPt179);
    connRef179->setRoutingType((ConnType)2);

    auto connRef180 = ConnRef::createConnRef(router, 180);
    ConnEnd srcPt180(Point(1343.5, 2169.42), 4);
    connRef180->setSourceEndpoint(srcPt180);
    ConnEnd dstPt180(Point(1191.5, 2169.42), 15);
    connRef180->setDestEndpoint(dstPt180);
    connRef180->setRoutingType((ConnType)2);

    auto connRef181 = ConnRef::createConnRef(router, 181);
    ConnEnd srcPt181(Point(1191.5, 1980.42), 2);
    connRef181->setSourceEndpoint(srcPt181);
    ConnEnd dstPt181(Point(1191.5, 2169.42), 15);
    connRef181->setDestEndpoint(dstPt181);
    connRef181->setRoutingType((ConnType)2);

    auto connRef182 = ConnRef::createConnRef(router, 182);
    ConnEnd srcPt182(Point(1191.5, 1826.42), 1);
    connRef182->setSourceEndpoint(srcPt182);
    ConnEnd dstPt182(Point(1191.5, 1779.42), 15);
    connRef182->setDestEndpoint(dstPt182);
    connRef182->setRoutingType((ConnType)2);

    auto connRef183 = ConnRef::createConnRef(router, 183);
    ConnEnd srcPt183(Point(1191.5, 1856.42), 2);
    connRef183->setSourceEndpoint(srcPt183);
    ConnEnd dstPt183(Point(1191.5, 1903.42), 15);
    connRef183->setDestEndpoint(dstPt183);
    connRef183->setRoutingType((ConnType)2);

    auto connRef184 = ConnRef::createConnRef(router, 184);
    ConnEnd srcPt184(Point(1191.5, 1732.42), 2);
    connRef184->setSourceEndpoint(srcPt184);
    ConnEnd dstPt184(Point(1191.5, 1779.42), 15);
    connRef184->setDestEndpoint(dstPt184);
    connRef184->setRoutingType((ConnType)2);

    auto connRef185 = ConnRef::createConnRef(router, 185);
    ConnEnd srcPt185(Point(1191.5, 1702.42), 1);
    connRef185->setSourceEndpoint(srcPt185);
    ConnEnd dstPt185(Point(1191.5, 1655.42), 15);
    connRef185->setDestEndpoint(dstPt185);
    connRef185->setRoutingType((ConnType)2);

    auto connRef186 = ConnRef::createConnRef(router, 186);
    ConnEnd srcPt186(Point(1160.5, 1358.42), 2);
    connRef186->setSourceEndpoint(srcPt186);
    ConnEnd dstPt186(Point(1191.5, 1455.42), 15);
    connRef186->setDestEndpoint(dstPt186);
    connRef186->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints186(1);
    checkpoints186[0] = Point(1191.5, 1373.42);
    connRef186->setRoutingCheckpoints(checkpoints186);

    auto connRef187 = ConnRef::createConnRef(router, 187);
    ConnEnd srcPt187(Point(1160.5, 1328.42), 1);
    connRef187->setSourceEndpoint(srcPt187);
    ConnEnd dstPt187(Point(1191.5, 1291.42), 15);
    connRef187->setDestEndpoint(dstPt187);
    connRef187->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints187(1);
    checkpoints187[0] = Point(1191.5, 1313.42);
    connRef187->setRoutingCheckpoints(checkpoints187);

    auto connRef188 = ConnRef::createConnRef(router, 188);
    ConnEnd srcPt188(Point(965.5, 1291.42), 4);
    connRef188->setSourceEndpoint(srcPt188);
    ConnEnd dstPt188(Point(736.5, 1291.42), 15);
    connRef188->setDestEndpoint(dstPt188);
    connRef188->setRoutingType((ConnType)2);

    auto connRef189 = ConnRef::createConnRef(router, 189);
    ConnEnd srcPt189(Point(995.5, 1291.42), 8);
    connRef189->setSourceEndpoint(srcPt189);
    ConnEnd dstPt189(Point(1191.5, 1291.42), 15);
    connRef189->setDestEndpoint(dstPt189);
    connRef189->setRoutingType((ConnType)2);

    auto connRef190 = ConnRef::createConnRef(router, 190);
    ConnEnd srcPt190(Point(1222.5, 1078.75), 2);
    connRef190->setSourceEndpoint(srcPt190);
    ConnEnd dstPt190(Point(1191.5, 1115.75), 15);
    connRef190->setDestEndpoint(dstPt190);
    connRef190->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints190(1);
    checkpoints190[0] = Point(1191.5, 1033.75);
    connRef190->setRoutingCheckpoints(checkpoints190);

    auto connRef191 = ConnRef::createConnRef(router, 191);
    ConnEnd srcPt191(Point(1160.5, 1048.75), 1);
    connRef191->setSourceEndpoint(srcPt191);
    ConnEnd dstPt191(Point(1191.5, 883), 15);
    connRef191->setDestEndpoint(dstPt191);
    connRef191->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints191(1);
    checkpoints191[0] = Point(1191.5, 1093.75);
    connRef191->setRoutingCheckpoints(checkpoints191);

    auto connRef192 = ConnRef::createConnRef(router, 192);
    ConnEnd srcPt192(Point(1312.5, 550.5), 4);
    connRef192->setSourceEndpoint(srcPt192);
    ConnEnd dstPt192(Point(1191.5, 584), 15);
    connRef192->setDestEndpoint(dstPt192);
    connRef192->setRoutingType((ConnType)2);

    auto connRef193 = ConnRef::createConnRef(router, 193);
    ConnEnd srcPt193(Point(1191.5, 725), 1);
    connRef193->setSourceEndpoint(srcPt193);
    ConnEnd dstPt193(Point(1191.5, 584), 15);
    connRef193->setDestEndpoint(dstPt193);
    connRef193->setRoutingType((ConnType)2);

    auto connRef194 = ConnRef::createConnRef(router, 194);
    ConnEnd srcPt194(Point(1191.5, 755), 2);
    connRef194->setSourceEndpoint(srcPt194);
    ConnEnd dstPt194(Point(1191.5, 883), 15);
    connRef194->setDestEndpoint(dstPt194);
    connRef194->setRoutingType((ConnType)2);

    auto connRef195 = ConnRef::createConnRef(router, 195);
    ConnEnd srcPt195(Point(1191.5, 463), 1);
    connRef195->setSourceEndpoint(srcPt195);
    ConnEnd dstPt195(Point(1191.5, 280), 15);
    connRef195->setDestEndpoint(dstPt195);
    connRef195->setRoutingType((ConnType)2);

    auto connRef196 = ConnRef::createConnRef(router, 196);
    ConnEnd srcPt196(Point(1191.5, 493), 2);
    connRef196->setSourceEndpoint(srcPt196);
    ConnEnd dstPt196(Point(1191.5, 584), 15);
    connRef196->setDestEndpoint(dstPt196);
    connRef196->setRoutingType((ConnType)2);

    auto connRef197 = ConnRef::createConnRef(router, 197);
    ConnEnd srcPt197(Point(903.5, 883), 4);
    connRef197->setSourceEndpoint(srcPt197);
    ConnEnd dstPt197(Point(736.5, 883), 15);
    connRef197->setDestEndpoint(dstPt197);
    connRef197->setRoutingType((ConnType)2);

    auto connRef198 = ConnRef::createConnRef(router, 198);
    ConnEnd srcPt198(Point(933.5, 883), 8);
    connRef198->setSourceEndpoint(srcPt198);
    ConnEnd dstPt198(Point(1191.5, 883), 15);
    connRef198->setDestEndpoint(dstPt198);
    connRef198->setRoutingType((ConnType)2);

    auto connRef199 = ConnRef::createConnRef(router, 199);
    ConnEnd srcPt199(Point(491.5, 777), 8);
    connRef199->setSourceEndpoint(srcPt199);
    ConnEnd dstPt199(Point(736.5, 883), 15);
    connRef199->setDestEndpoint(dstPt199);
    connRef199->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints199(1);
    checkpoints199[0] = Point(438.5, 883);
    connRef199->setRoutingCheckpoints(checkpoints199);

    auto connRef200 = ConnRef::createConnRef(router, 200);
    ConnEnd srcPt200(Point(491.5, 852), 8);
    connRef200->setSourceEndpoint(srcPt200);
    ConnEnd dstPt200(Point(736.5, 883), 15);
    connRef200->setDestEndpoint(dstPt200);
    connRef200->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints200(1);
    checkpoints200[0] = Point(438.5, 883);
    connRef200->setRoutingCheckpoints(checkpoints200);

    auto connRef201 = ConnRef::createConnRef(router, 201);
    ConnEnd srcPt201(Point(783.5, 740), 4);
    connRef201->setSourceEndpoint(srcPt201);
    ConnEnd dstPt201(Point(736.5, 883), 15);
    connRef201->setDestEndpoint(dstPt201);
    connRef201->setRoutingType((ConnType)2);

    auto connRef202 = ConnRef::createConnRef(router, 202);
    ConnEnd srcPt202(Point(813.5, 740), 8);
    connRef202->setSourceEndpoint(srcPt202);
    ConnEnd dstPt202(Point(1191.5, 584), 15);
    connRef202->setDestEndpoint(dstPt202);
    connRef202->setRoutingType((ConnType)2);

    auto connRef203 = ConnRef::createConnRef(router, 203);
    ConnEnd srcPt203(Point(643.5, 755), 2);
    connRef203->setSourceEndpoint(srcPt203);
    ConnEnd dstPt203(Point(736.5, 883), 15);
    connRef203->setDestEndpoint(dstPt203);
    connRef203->setRoutingType((ConnType)2);

    auto connRef204 = ConnRef::createConnRef(router, 204);
    ConnEnd srcPt204(Point(643.5, 725), 1);
    connRef204->setSourceEndpoint(srcPt204);
    ConnEnd dstPt204(Point(1191.5, 584), 15);
    connRef204->setDestEndpoint(dstPt204);
    connRef204->setRoutingType((ConnType)2);

    auto connRef205 = ConnRef::createConnRef(router, 205);
    ConnEnd srcPt205(Point(286.5, 725), 1);
    connRef205->setSourceEndpoint(srcPt205);
    ConnEnd dstPt205(Point(286.5, 584), 15);
    connRef205->setDestEndpoint(dstPt205);
    connRef205->setRoutingType((ConnType)2);

    auto connRef206 = ConnRef::createConnRef(router, 206);
    ConnEnd srcPt206(Point(286.5, 755), 2);
    connRef206->setSourceEndpoint(srcPt206);
    ConnEnd dstPt206(Point(286.5, 883), 15);
    connRef206->setDestEndpoint(dstPt206);
    connRef206->setRoutingType((ConnType)2);

    auto connRef207 = ConnRef::createConnRef(router, 207);
    ConnEnd srcPt207(Point(722.5, 478), 8);
    connRef207->setSourceEndpoint(srcPt207);
    ConnEnd dstPt207(Point(1191.5, 584), 15);
    connRef207->setDestEndpoint(dstPt207);
    connRef207->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints207(1);
    checkpoints207[0] = Point(669.5, 584);
    connRef207->setRoutingCheckpoints(checkpoints207);

    auto connRef208 = ConnRef::createConnRef(router, 208);
    ConnEnd srcPt208(Point(722.5, 553), 8);
    connRef208->setSourceEndpoint(srcPt208);
    ConnEnd dstPt208(Point(1191.5, 584), 15);
    connRef208->setDestEndpoint(dstPt208);
    connRef208->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints208(1);
    checkpoints208[0] = Point(669.5, 584);
    connRef208->setRoutingCheckpoints(checkpoints208);

    auto connRef209 = ConnRef::createConnRef(router, 209);
    ConnEnd srcPt209(Point(692.5, 403), 4);
    connRef209->setSourceEndpoint(srcPt209);
    ConnEnd dstPt209(Point(286.5, 584), 15);
    connRef209->setDestEndpoint(dstPt209);
    connRef209->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints209(1);
    checkpoints209[0] = Point(745.5, 584);
    connRef209->setRoutingCheckpoints(checkpoints209);

    auto connRef210 = ConnRef::createConnRef(router, 210);
    ConnEnd srcPt210(Point(752.5, 341), 4);
    connRef210->setSourceEndpoint(srcPt210);
    ConnEnd dstPt210(Point(286.5, 584), 15);
    connRef210->setDestEndpoint(dstPt210);
    connRef210->setRoutingType((ConnType)2);

    auto connRef211 = ConnRef::createConnRef(router, 211);
    ConnEnd srcPt211(Point(752.5, 239), 4);
    connRef211->setSourceEndpoint(srcPt211);
    ConnEnd dstPt211(Point(286.5, 584), 15);
    connRef211->setDestEndpoint(dstPt211);
    connRef211->setRoutingType((ConnType)2);

    auto connRef212 = ConnRef::createConnRef(router, 212);
    ConnEnd srcPt212(Point(507.5, 2312.46), 8);
    connRef212->setSourceEndpoint(srcPt212);
    ConnEnd dstPt212(Point(674.5, 2312.46), 15);
    connRef212->setDestEndpoint(dstPt212);
    connRef212->setRoutingType((ConnType)2);

    auto connRef213 = ConnRef::createConnRef(router, 213);
    ConnEnd srcPt213(Point(1191.5, 1584.42), 2);
    connRef213->setSourceEndpoint(srcPt213);
    ConnEnd dstPt213(Point(1191.5, 1655.42), 15);
    connRef213->setDestEndpoint(dstPt213);
    connRef213->setRoutingType((ConnType)2);

    auto connRef214 = ConnRef::createConnRef(router, 214);
    ConnEnd srcPt214(Point(1191.5, 1554.42), 1);
    connRef214->setSourceEndpoint(srcPt214);
    ConnEnd dstPt214(Point(1191.5, 1455.42), 15);
    connRef214->setDestEndpoint(dstPt214);
    connRef214->setRoutingType((ConnType)2);

    auto connRef215 = ConnRef::createConnRef(router, 215);
    ConnEnd srcPt215(Point(722.5, 615), 8);
    connRef215->setSourceEndpoint(srcPt215);
    ConnEnd dstPt215(Point(1191.5, 584), 15);
    connRef215->setDestEndpoint(dstPt215);
    connRef215->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints215(1);
    checkpoints215[0] = Point(669.5, 584);
    connRef215->setRoutingCheckpoints(checkpoints215);

    auto connRef216 = ConnRef::createConnRef(router, 216);
    ConnEnd srcPt216(Point(491.5, 914), 8);
    connRef216->setSourceEndpoint(srcPt216);
    ConnEnd dstPt216(Point(736.5, 883), 15);
    connRef216->setDestEndpoint(dstPt216);
    connRef216->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints216(1);
    checkpoints216[0] = Point(438.5, 883);
    connRef216->setRoutingCheckpoints(checkpoints216);

    auto connRef217 = ConnRef::createConnRef(router, 217);
    ConnEnd srcPt217(Point(301.5, 1076), 8);
    connRef217->setSourceEndpoint(srcPt217);
    ConnEnd dstPt217(Point(406.5, 1076), 15);
    connRef217->setDestEndpoint(dstPt217);
    connRef217->setRoutingType((ConnType)2);

    auto connRef218 = ConnRef::createConnRef(router, 218);
    ConnEnd srcPt218(Point(301.5, 1178), 8);
    connRef218->setSourceEndpoint(srcPt218);
    ConnEnd dstPt218(Point(406.5, 1178), 15);
    connRef218->setDestEndpoint(dstPt218);
    connRef218->setRoutingType((ConnType)2);

    auto connRef219 = ConnRef::createConnRef(router, 219);
    ConnEnd srcPt219(Point(569.5, 1076), 8);
    connRef219->setSourceEndpoint(srcPt219);
    ConnEnd dstPt219(Point(736.5, 883), 15);
    connRef219->setDestEndpoint(dstPt219);
    connRef219->setRoutingType((ConnType)2);

    auto connRef220 = ConnRef::createConnRef(router, 220);
    ConnEnd srcPt220(Point(569.5, 1178), 8);
    connRef220->setSourceEndpoint(srcPt220);
    ConnEnd dstPt220(Point(736.5, 883), 15);
    connRef220->setDestEndpoint(dstPt220);
    connRef220->setRoutingType((ConnType)2);

    auto connRef221 = ConnRef::createConnRef(router, 221);
    ConnEnd srcPt221(Point(1401.5, 550.5), 15);
    connRef221->setSourceEndpoint(srcPt221);
    ConnEnd dstPt221(Point(1342.5, 550.5), 8);
    connRef221->setDestEndpoint(dstPt221);
    connRef221->setRoutingType((ConnType)2);

    auto connRef222 = ConnRef::createConnRef(router, 222);
    ConnEnd srcPt222(Point(286.5, 584), 15);
    connRef222->setSourceEndpoint(srcPt222);
    ConnEnd dstPt222(Point(692.5, 615), 4);
    connRef222->setDestEndpoint(dstPt222);
    connRef222->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints222(1);
    checkpoints222[0] = Point(745.5, 584);
    connRef222->setRoutingCheckpoints(checkpoints222);

    auto connRef223 = ConnRef::createConnRef(router, 223);
    ConnEnd srcPt223(Point(286.5, 584), 15);
    connRef223->setSourceEndpoint(srcPt223);
    ConnEnd dstPt223(Point(692.5, 690), 4);
    connRef223->setDestEndpoint(dstPt223);
    connRef223->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints223(1);
    checkpoints223[0] = Point(745.5, 584);
    connRef223->setRoutingCheckpoints(checkpoints223);

    auto connRef224 = ConnRef::createConnRef(router, 224);
    ConnEnd srcPt224(Point(286.5, 883), 15);
    connRef224->setSourceEndpoint(srcPt224);
    ConnEnd dstPt224(Point(461.5, 914), 4);
    connRef224->setDestEndpoint(dstPt224);
    connRef224->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints224(1);
    checkpoints224[0] = Point(514.5, 883);
    connRef224->setRoutingCheckpoints(checkpoints224);

    auto connRef225 = ConnRef::createConnRef(router, 225);
    ConnEnd srcPt225(Point(461.5, 989), 4);
    connRef225->setSourceEndpoint(srcPt225);
    ConnEnd dstPt225(Point(286.5, 883), 15);
    connRef225->setDestEndpoint(dstPt225);
    connRef225->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints225(1);
    checkpoints225[0] = Point(514.5, 883);
    connRef225->setRoutingCheckpoints(checkpoints225);

    auto connRef226 = ConnRef::createConnRef(router, 226);
    ConnEnd srcPt226(Point(491.5, 989), 8);
    connRef226->setSourceEndpoint(srcPt226);
    ConnEnd dstPt226(Point(736.5, 883), 15);
    connRef226->setDestEndpoint(dstPt226);
    connRef226->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints226(1);
    checkpoints226[0] = Point(438.5, 883);
    connRef226->setRoutingCheckpoints(checkpoints226);

    auto connRef227 = ConnRef::createConnRef(router, 227);
    ConnEnd srcPt227(Point(1191.5, 883), 15);
    connRef227->setSourceEndpoint(srcPt227);
    ConnEnd dstPt227(Point(1313.5, 1048.75), 1);
    connRef227->setDestEndpoint(dstPt227);
    connRef227->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints227(1);
    checkpoints227[0] = Point(1191.5, 1093.75);
    connRef227->setRoutingCheckpoints(checkpoints227);

    auto connRef228 = ConnRef::createConnRef(router, 228);
    ConnEnd srcPt228(Point(714.439, 1872.42), 8);
    connRef228->setSourceEndpoint(srcPt228);
    ConnEnd dstPt228(Point(1191.5, 1903.42), 15);
    connRef228->setDestEndpoint(dstPt228);
    connRef228->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints228(1);
    checkpoints228[0] = Point(737.439, 1903.42);
    connRef228->setRoutingCheckpoints(checkpoints228);

    auto connRef229 = ConnRef::createConnRef(router, 229);
    ConnEnd srcPt229(Point(1240.5, 1522.42), 2);
    connRef229->setSourceEndpoint(srcPt229);
    ConnEnd dstPt229(Point(1191.5, 1655.42), 15);
    connRef229->setDestEndpoint(dstPt229);
    connRef229->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints229(1);
    checkpoints229[0] = Point(1265.5, 1537.42);
    connRef229->setRoutingCheckpoints(checkpoints229);

    auto connRef230 = ConnRef::createConnRef(router, 230);
    ConnEnd srcPt230(Point(1331.5, 1522.42), 2);
    connRef230->setSourceEndpoint(srcPt230);
    ConnEnd dstPt230(Point(1191.5, 1655.42), 15);
    connRef230->setDestEndpoint(dstPt230);
    connRef230->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints230(1);
    checkpoints230[0] = Point(1265.5, 1537.42);
    connRef230->setRoutingCheckpoints(checkpoints230);

    auto connRef231 = ConnRef::createConnRef(router, 231);
    ConnEnd srcPt231(Point(1422.5, 1522.42), 2);
    connRef231->setSourceEndpoint(srcPt231);
    ConnEnd dstPt231(Point(1191.5, 1655.42), 15);
    connRef231->setDestEndpoint(dstPt231);
    connRef231->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints231(1);
    checkpoints231[0] = Point(1265.5, 1537.42);
    connRef231->setRoutingCheckpoints(checkpoints231);

    auto connRef232 = ConnRef::createConnRef(router, 232);
    ConnEnd srcPt232(Point(1222.5, 1358.42), 2);
    connRef232->setSourceEndpoint(srcPt232);
    ConnEnd dstPt232(Point(1191.5, 1455.42), 15);
    connRef232->setDestEndpoint(dstPt232);
    connRef232->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints232(1);
    checkpoints232[0] = Point(1191.5, 1373.42);
    connRef232->setRoutingCheckpoints(checkpoints232);

    auto connRef233 = ConnRef::createConnRef(router, 233);
    ConnEnd srcPt233(Point(1115.5, 1455.42), 8);
    connRef233->setSourceEndpoint(srcPt233);
    ConnEnd dstPt233(Point(1191.5, 1455.42), 15);
    connRef233->setDestEndpoint(dstPt233);
    connRef233->setRoutingType((ConnType)2);

    auto connRef234 = ConnRef::createConnRef(router, 234);
    ConnEnd srcPt234(Point(1104.5, 2273.79), 8);
    connRef234->setSourceEndpoint(srcPt234);
    ConnEnd dstPt234(Point(1327.5, 2379.79), 15);
    connRef234->setDestEndpoint(dstPt234);
    connRef234->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints234(1);
    checkpoints234[0] = Point(1127.5, 2379.79);
    connRef234->setRoutingCheckpoints(checkpoints234);

    auto connRef235 = ConnRef::createConnRef(router, 235);
    ConnEnd srcPt235(Point(1104.5, 2348.79), 8);
    connRef235->setSourceEndpoint(srcPt235);
    ConnEnd dstPt235(Point(1327.5, 2379.79), 15);
    connRef235->setDestEndpoint(dstPt235);
    connRef235->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints235(1);
    checkpoints235[0] = Point(1127.5, 2379.79);
    connRef235->setRoutingCheckpoints(checkpoints235);

    auto connRef236 = ConnRef::createConnRef(router, 236);
    ConnEnd srcPt236(Point(1104.5, 2410.79), 8);
    connRef236->setSourceEndpoint(srcPt236);
    ConnEnd dstPt236(Point(1327.5, 2379.79), 15);
    connRef236->setDestEndpoint(dstPt236);
    connRef236->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints236(1);
    checkpoints236[0] = Point(1127.5, 2379.79);
    connRef236->setRoutingCheckpoints(checkpoints236);

    auto connRef237 = ConnRef::createConnRef(router, 237);
    ConnEnd srcPt237(Point(1104.5, 2485.79), 8);
    connRef237->setSourceEndpoint(srcPt237);
    ConnEnd dstPt237(Point(1327.5, 2379.79), 15);
    connRef237->setDestEndpoint(dstPt237);
    connRef237->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints237(1);
    checkpoints237[0] = Point(1127.5, 2379.79);
    connRef237->setRoutingCheckpoints(checkpoints237);

    auto connRef238 = ConnRef::createConnRef(router, 238);
    ConnEnd srcPt238(Point(569.5, 2040.42), 8);
    connRef238->setSourceEndpoint(srcPt238);
    ConnEnd dstPt238(Point(1191.5, 2169.42), 15);
    connRef238->setDestEndpoint(dstPt238);
    connRef238->setRoutingType((ConnType)2);

    auto connRef239 = ConnRef::createConnRef(router, 239);
    ConnEnd srcPt239(Point(829.5, 2169.42), 15);
    connRef239->setSourceEndpoint(srcPt239);
    ConnEnd dstPt239(Point(829.5, 2302.79), 1);
    connRef239->setDestEndpoint(dstPt239);
    connRef239->setRoutingType((ConnType)2);

    auto connRef240 = ConnRef::createConnRef(router, 240);
    ConnEnd srcPt240(Point(539.5, 2040.42), 4);
    connRef240->setSourceEndpoint(srcPt240);
    ConnEnd dstPt240(Point(251.5, 2169.42), 15);
    connRef240->setDestEndpoint(dstPt240);
    connRef240->setRoutingType((ConnType)2);

    auto connRef241 = ConnRef::createConnRef(router, 241);
    ConnEnd srcPt241(Point(1074.5, 2410.79), 4);
    connRef241->setSourceEndpoint(srcPt241);
    ConnEnd dstPt241(Point(829.5, 2379.79), 15);
    connRef241->setDestEndpoint(dstPt241);
    connRef241->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints241(1);
    checkpoints241[0] = Point(1051.5, 2379.79);
    connRef241->setRoutingCheckpoints(checkpoints241);

    auto connRef242 = ConnRef::createConnRef(router, 242);
    ConnEnd srcPt242(Point(1074.5, 2485.79), 4);
    connRef242->setSourceEndpoint(srcPt242);
    ConnEnd dstPt242(Point(829.5, 2379.79), 15);
    connRef242->setDestEndpoint(dstPt242);
    connRef242->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints242(1);
    checkpoints242[0] = Point(1051.5, 2379.79);
    connRef242->setRoutingCheckpoints(checkpoints242);

    auto connRef243 = ConnRef::createConnRef(router, 243);
    ConnEnd srcPt243(Point(477.5, 2312.46), 4);
    connRef243->setSourceEndpoint(srcPt243);
    ConnEnd dstPt243(Point(375.5, 2312.46), 15);
    connRef243->setDestEndpoint(dstPt243);
    connRef243->setRoutingType((ConnType)2);

    auto connRef244 = ConnRef::createConnRef(router, 244);
    ConnEnd srcPt244(Point(1191.5, 1115.75), 15);
    connRef244->setSourceEndpoint(srcPt244);
    ConnEnd dstPt244(Point(1160.5, 1078.75), 2);
    connRef244->setDestEndpoint(dstPt244);
    connRef244->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints244(1);
    checkpoints244[0] = Point(1191.5, 1033.75);
    connRef244->setRoutingCheckpoints(checkpoints244);

    auto connRef245 = ConnRef::createConnRef(router, 245);
    ConnEnd srcPt245(Point(216.5, 1076), 15);
    connRef245->setSourceEndpoint(srcPt245);
    ConnEnd dstPt245(Point(271.5, 1076), 4);
    connRef245->setDestEndpoint(dstPt245);
    connRef245->setRoutingType((ConnType)2);

    auto connRef246 = ConnRef::createConnRef(router, 246);
    ConnEnd srcPt246(Point(406.5, 1076), 15);
    connRef246->setSourceEndpoint(srcPt246);
    ConnEnd dstPt246(Point(539.5, 1076), 4);
    connRef246->setDestEndpoint(dstPt246);
    connRef246->setRoutingType((ConnType)2);

    auto connRef247 = ConnRef::createConnRef(router, 247);
    ConnEnd srcPt247(Point(406.5, 1178), 15);
    connRef247->setSourceEndpoint(srcPt247);
    ConnEnd dstPt247(Point(539.5, 1178), 4);
    connRef247->setDestEndpoint(dstPt247);
    connRef247->setRoutingType((ConnType)2);

    auto connRef248 = ConnRef::createConnRef(router, 248);
    ConnEnd srcPt248(Point(216.5, 1178), 15);
    connRef248->setSourceEndpoint(srcPt248);
    ConnEnd dstPt248(Point(271.5, 1178), 4);
    connRef248->setDestEndpoint(dstPt248);
    connRef248->setRoutingType((ConnType)2);

    auto connRef249 = ConnRef::createConnRef(router, 249);
    ConnEnd srcPt249(Point(714.439, 1934.42), 8);
    connRef249->setSourceEndpoint(srcPt249);
    ConnEnd dstPt249(Point(1191.5, 1903.42), 15);
    connRef249->setDestEndpoint(dstPt249);
    connRef249->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints249(1);
    checkpoints249[0] = Point(737.439, 1903.42);
    connRef249->setRoutingCheckpoints(checkpoints249);

    auto connRef250 = ConnRef::createConnRef(router, 250);
    ConnEnd srcPt250(Point(251.5, 1903.42), 15);
    connRef250->setSourceEndpoint(srcPt250);
    ConnEnd dstPt250(Point(684.439, 1934.42), 4);
    connRef250->setDestEndpoint(dstPt250);
    connRef250->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints250(1);
    checkpoints250[0] = Point(661.439, 1903.42);
    connRef250->setRoutingCheckpoints(checkpoints250);

    auto connRef251 = ConnRef::createConnRef(router, 251);
    ConnEnd srcPt251(Point(251.5, 1903.42), 15);
    connRef251->setSourceEndpoint(srcPt251);
    ConnEnd dstPt251(Point(684.439, 1872.42), 4);
    connRef251->setDestEndpoint(dstPt251);
    connRef251->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints251(1);
    checkpoints251[0] = Point(661.439, 1903.42);
    connRef251->setRoutingCheckpoints(checkpoints251);

    auto connRef252 = ConnRef::createConnRef(router, 252);
    ConnEnd srcPt252(Point(1222.5, 1328.42), 1);
    connRef252->setSourceEndpoint(srcPt252);
    ConnEnd dstPt252(Point(1191.5, 1291.42), 15);
    connRef252->setDestEndpoint(dstPt252);
    connRef252->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints252(1);
    checkpoints252[0] = Point(1191.5, 1313.42);
    connRef252->setRoutingCheckpoints(checkpoints252);

    auto connRef253 = ConnRef::createConnRef(router, 253);
    ConnEnd srcPt253(Point(1085.5, 1649.42), 4);
    connRef253->setSourceEndpoint(srcPt253);
    ConnEnd dstPt253(Point(949.5, 1569.42), 15);
    connRef253->setDestEndpoint(dstPt253);
    connRef253->setRoutingType((ConnType)2);

    auto connRef254 = ConnRef::createConnRef(router, 254);
    ConnEnd srcPt254(Point(1115.5, 1649.42), 8);
    connRef254->setSourceEndpoint(srcPt254);
    ConnEnd dstPt254(Point(1191.5, 1655.42), 15);
    connRef254->setDestEndpoint(dstPt254);
    connRef254->setRoutingType((ConnType)2);

    auto connRef255 = ConnRef::createConnRef(router, 255);
    ConnEnd srcPt255(Point(1085.5, 1455.42), 4);
    connRef255->setSourceEndpoint(srcPt255);
    ConnEnd dstPt255(Point(949.5, 1569.42), 15);
    connRef255->setDestEndpoint(dstPt255);
    connRef255->setRoutingType((ConnType)2);
#endif

    auto connRef256 = ConnRef::createConnRef(router, 256);
    ConnEnd srcPt256(Point(1191.5, 1291.42), 15);
    connRef256->setSourceEndpoint(srcPt256);
    ConnEnd dstPt256(Point(1240.5, 1492.42), 1);
    connRef256->setDestEndpoint(dstPt256);
    connRef256->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints256(1);
    checkpoints256[0] = Point(1331.5, 1477.42);
    connRef256->setRoutingCheckpoints(checkpoints256);

    auto connRef257 = ConnRef::createConnRef(router, 257);
    ConnEnd srcPt257(Point(1191.5, 1291.42), 15);
    connRef257->setSourceEndpoint(srcPt257);
    ConnEnd dstPt257(Point(1331.5, 1492.42), 1);
    connRef257->setDestEndpoint(dstPt257);
    connRef257->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints257(1);
    checkpoints257[0] = Point(1331.5, 1477.42);
    connRef257->setRoutingCheckpoints(checkpoints256);

    auto connRef258 = ConnRef::createConnRef(router, 258);
    ConnEnd srcPt258(Point(1191.5, 1291.42), 15);
    connRef258->setSourceEndpoint(srcPt258);
    ConnEnd dstPt258(Point(1422.5, 1492.42), 1);
    connRef258->setDestEndpoint(dstPt258);
    connRef258->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints258(1);
    checkpoints258[0] = Point(1331.5, 1477.42);
    connRef258->setRoutingCheckpoints(checkpoints256);

#ifdef ALL
    auto connRef259 = ConnRef::createConnRef(router, 259);
    ConnEnd srcPt259(Point(160.5, 2216.42), 1);
    connRef259->setSourceEndpoint(srcPt259);
    ConnEnd dstPt259(Point(251.5, 2169.42), 15);
    connRef259->setDestEndpoint(dstPt259);
    connRef259->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints259(1);
    checkpoints259[0] = Point(226.5, 2201.42);
    connRef259->setRoutingCheckpoints(checkpoints259);

    auto connRef260 = ConnRef::createConnRef(router, 260);
    ConnEnd srcPt260(Point(1313.5, 1078.75), 2);
    connRef260->setSourceEndpoint(srcPt260);
    ConnEnd dstPt260(Point(1191.5, 1115.75), 15);
    connRef260->setDestEndpoint(dstPt260);
    connRef260->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints260(1);
    checkpoints260[0] = Point(1191.5, 1033.75);
    connRef260->setRoutingCheckpoints(checkpoints260);

    auto connRef261 = ConnRef::createConnRef(router, 261);
    ConnEnd srcPt261(Point(722.5, 690), 8);
    connRef261->setSourceEndpoint(srcPt261);
    ConnEnd dstPt261(Point(1191.5, 584), 15);
    connRef261->setDestEndpoint(dstPt261);
    connRef261->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints261(1);
    checkpoints261[0] = Point(669.5, 584);
    connRef261->setRoutingCheckpoints(checkpoints261);

    auto connRef262 = ConnRef::createConnRef(router, 262);
    ConnEnd srcPt262(Point(829.5, 2065.42), 15);
    connRef262->setSourceEndpoint(srcPt262);
    ConnEnd dstPt262(Point(1026.5, 2179.79), 8);
    connRef262->setDestEndpoint(dstPt262);
    connRef262->setRoutingType((ConnType)2);

    auto connRef263 = ConnRef::createConnRef(router, 263);
    ConnEnd srcPt263(Point(829.5, 2065.42), 15);
    connRef263->setSourceEndpoint(srcPt263);
    ConnEnd dstPt263(Point(1011.5, 2083.42), 1);
    connRef263->setDestEndpoint(dstPt263);
    connRef263->setRoutingType((ConnType)2);

    auto connRef264 = ConnRef::createConnRef(router, 264);
    ConnEnd srcPt264(Point(1249.5, 1196.75), 4);
    connRef264->setSourceEndpoint(srcPt264);
    ConnEnd dstPt264(Point(1191.5, 1196.75), 8);
    connRef264->setDestEndpoint(dstPt264);
    connRef264->setRoutingType((ConnType)2);

    auto connRef265 = ConnRef::createConnRef(router, 265);
    ConnEnd srcPt265(Point(769.5, 2298.79), 2);
    connRef265->setSourceEndpoint(srcPt265);
    ConnEnd dstPt265(Point(769.5, 2348.79), 1);
    connRef265->setDestEndpoint(dstPt265);
    connRef265->setRoutingType((ConnType)2);

    auto connRef266 = ConnRef::createConnRef(router, 266);
    ConnEnd srcPt266(Point(193.5, 2231.42), 8);
    connRef266->setSourceEndpoint(srcPt266);
    ConnEnd dstPt266(Point(251.5, 2231.42), 4);
    connRef266->setDestEndpoint(dstPt266);
    connRef266->setRoutingType((ConnType)2);

    auto connRef267 = ConnRef::createConnRef(router, 267);
    ConnEnd srcPt267(Point(769.5, 2460.79), 1);
    connRef267->setSourceEndpoint(srcPt267);
    ConnEnd dstPt267(Point(769.5, 2410.79), 2);
    connRef267->setDestEndpoint(dstPt267);
    connRef267->setRoutingType((ConnType)2);

    auto connRef268 = ConnRef::createConnRef(router, 268);
    ConnEnd srcPt268(Point(887.5, 2317.79), 4);
    connRef268->setSourceEndpoint(srcPt268);
    ConnEnd dstPt268(Point(829.5, 2317.79), 8);
    connRef268->setDestEndpoint(dstPt268);
    connRef268->setRoutingType((ConnType)2);

    auto connRef269 = ConnRef::createConnRef(router, 269);
    ConnEnd srcPt269(Point(1089.5, 2223.79), 2);
    connRef269->setSourceEndpoint(srcPt269);
    ConnEnd dstPt269(Point(1089.5, 2273.79), 1);
    connRef269->setDestEndpoint(dstPt269);
    connRef269->setRoutingType((ConnType)2);

    auto connRef270 = ConnRef::createConnRef(router, 270);
    ConnEnd srcPt270(Point(1089.5, 2298.79), 2);
    connRef270->setSourceEndpoint(srcPt270);
    ConnEnd dstPt270(Point(1089.5, 2348.79), 1);
    connRef270->setDestEndpoint(dstPt270);
    connRef270->setRoutingType((ConnType)2);

    auto connRef271 = ConnRef::createConnRef(router, 271);
    ConnEnd srcPt271(Point(1011.5, 2229.79), 1);
    connRef271->setSourceEndpoint(srcPt271);
    ConnEnd dstPt271(Point(1011.5, 2179.79), 2);
    connRef271->setDestEndpoint(dstPt271);
    connRef271->setRoutingType((ConnType)2);

    auto connRef272 = ConnRef::createConnRef(router, 272);
    ConnEnd srcPt272(Point(1069.5, 2098.42), 4);
    connRef272->setSourceEndpoint(srcPt272);
    ConnEnd dstPt272(Point(1011.5, 2098.42), 8);
    connRef272->setDestEndpoint(dstPt272);
    connRef272->setRoutingType((ConnType)2);

    auto connRef273 = ConnRef::createConnRef(router, 273);
    ConnEnd srcPt273(Point(705.5, 2119.42), 2);
    connRef273->setSourceEndpoint(srcPt273);
    ConnEnd dstPt273(Point(705.5, 2169.42), 1);
    connRef273->setDestEndpoint(dstPt273);
    connRef273->setRoutingType((ConnType)2);

    auto connRef274 = ConnRef::createConnRef(router, 274);
    ConnEnd srcPt274(Point(375.5, 2119.42), 2);
    connRef274->setSourceEndpoint(srcPt274);
    ConnEnd dstPt274(Point(375.5, 2169.42), 1);
    connRef274->setDestEndpoint(dstPt274);
    connRef274->setRoutingType((ConnType)2);

    auto connRef275 = ConnRef::createConnRef(router, 275);
    ConnEnd srcPt275(Point(1358.5, 2119.42), 2);
    connRef275->setSourceEndpoint(srcPt275);
    ConnEnd dstPt275(Point(1358.5, 2169.42), 1);
    connRef275->setDestEndpoint(dstPt275);
    connRef275->setRoutingType((ConnType)2);

    auto connRef276 = ConnRef::createConnRef(router, 276);
    ConnEnd srcPt276(Point(1249.5, 1965.42), 4);
    connRef276->setSourceEndpoint(srcPt276);
    ConnEnd dstPt276(Point(1191.5, 1965.42), 8);
    connRef276->setDestEndpoint(dstPt276);
    connRef276->setRoutingType((ConnType)2);

    auto connRef277 = ConnRef::createConnRef(router, 277);
    ConnEnd srcPt277(Point(1249.5, 1841.42), 4);
    connRef277->setSourceEndpoint(srcPt277);
    ConnEnd dstPt277(Point(1191.5, 1841.42), 8);
    connRef277->setDestEndpoint(dstPt277);
    connRef277->setRoutingType((ConnType)2);

    auto connRef278 = ConnRef::createConnRef(router, 278);
    ConnEnd srcPt278(Point(1249.5, 1717.42), 4);
    connRef278->setSourceEndpoint(srcPt278);
    ConnEnd dstPt278(Point(1191.5, 1717.42), 8);
    connRef278->setDestEndpoint(dstPt278);
    connRef278->setRoutingType((ConnType)2);

    auto connRef279 = ConnRef::createConnRef(router, 279);
    ConnEnd srcPt279(Point(1102.5, 1343.42), 8);
    connRef279->setSourceEndpoint(srcPt279);
    ConnEnd dstPt279(Point(1160.5, 1343.42), 4);
    connRef279->setDestEndpoint(dstPt279);
    connRef279->setRoutingType((ConnType)2);

    auto connRef280 = ConnRef::createConnRef(router, 280);
    ConnEnd srcPt280(Point(980.5, 1241.42), 2);
    connRef280->setSourceEndpoint(srcPt280);
    ConnEnd dstPt280(Point(980.5, 1291.42), 1);
    connRef280->setDestEndpoint(dstPt280);
    connRef280->setRoutingType((ConnType)2);

    auto connRef281 = ConnRef::createConnRef(router, 281);
    ConnEnd srcPt281(Point(1280.5, 1063.75), 4);
    connRef281->setSourceEndpoint(srcPt281);
    ConnEnd dstPt281(Point(1222.5, 1063.75), 8);
    connRef281->setDestEndpoint(dstPt281);
    connRef281->setRoutingType((ConnType)2);

    auto connRef282 = ConnRef::createConnRef(router, 282);
    ConnEnd srcPt282(Point(1102.5, 1063.75), 8);
    connRef282->setSourceEndpoint(srcPt282);
    ConnEnd dstPt282(Point(1160.5, 1063.75), 4);
    connRef282->setDestEndpoint(dstPt282);
    connRef282->setRoutingType((ConnType)2);

    auto connRef283 = ConnRef::createConnRef(router, 283);
    ConnEnd srcPt283(Point(1327.5, 500.5), 2);
    connRef283->setSourceEndpoint(srcPt283);
    ConnEnd dstPt283(Point(1327.5, 550.5), 1);
    connRef283->setDestEndpoint(dstPt283);
    connRef283->setRoutingType((ConnType)2);

    auto connRef284 = ConnRef::createConnRef(router, 284);
    ConnEnd srcPt284(Point(1249.5, 740), 4);
    connRef284->setSourceEndpoint(srcPt284);
    ConnEnd dstPt284(Point(1191.5, 740), 8);
    connRef284->setDestEndpoint(dstPt284);
    connRef284->setRoutingType((ConnType)2);

    auto connRef285 = ConnRef::createConnRef(router, 285);
    ConnEnd srcPt285(Point(1249.5, 478), 4);
    connRef285->setSourceEndpoint(srcPt285);
    ConnEnd dstPt285(Point(1191.5, 478), 8);
    connRef285->setDestEndpoint(dstPt285);
    connRef285->setRoutingType((ConnType)2);

    auto connRef286 = ConnRef::createConnRef(router, 286);
    ConnEnd srcPt286(Point(918.5, 833), 2);
    connRef286->setSourceEndpoint(srcPt286);
    ConnEnd dstPt286(Point(918.5, 883), 1);
    connRef286->setDestEndpoint(dstPt286);
    connRef286->setRoutingType((ConnType)2);

    auto connRef287 = ConnRef::createConnRef(router, 287);
    ConnEnd srcPt287(Point(476.5, 727), 2);
    connRef287->setSourceEndpoint(srcPt287);
    ConnEnd dstPt287(Point(476.5, 777), 1);
    connRef287->setDestEndpoint(dstPt287);
    connRef287->setRoutingType((ConnType)2);

    auto connRef288 = ConnRef::createConnRef(router, 288);
    ConnEnd srcPt288(Point(476.5, 802), 2);
    connRef288->setSourceEndpoint(srcPt288);
    ConnEnd dstPt288(Point(476.5, 852), 1);
    connRef288->setDestEndpoint(dstPt288);
    connRef288->setRoutingType((ConnType)2);

    auto connRef289 = ConnRef::createConnRef(router, 289);
    ConnEnd srcPt289(Point(798.5, 690), 2);
    connRef289->setSourceEndpoint(srcPt289);
    ConnEnd dstPt289(Point(798.5, 740), 1);
    connRef289->setDestEndpoint(dstPt289);
    connRef289->setRoutingType((ConnType)2);

    auto connRef290 = ConnRef::createConnRef(router, 290);
    ConnEnd srcPt290(Point(585.5, 740), 8);
    connRef290->setSourceEndpoint(srcPt290);
    ConnEnd dstPt290(Point(643.5, 740), 4);
    connRef290->setDestEndpoint(dstPt290);
    connRef290->setRoutingType((ConnType)2);

    auto connRef291 = ConnRef::createConnRef(router, 291);
    ConnEnd srcPt291(Point(344.5, 740), 4);
    connRef291->setSourceEndpoint(srcPt291);
    ConnEnd dstPt291(Point(286.5, 740), 8);
    connRef291->setDestEndpoint(dstPt291);
    connRef291->setRoutingType((ConnType)2);

    auto connRef292 = ConnRef::createConnRef(router, 292);
    ConnEnd srcPt292(Point(707.5, 428), 2);
    connRef292->setSourceEndpoint(srcPt292);
    ConnEnd dstPt292(Point(707.5, 478), 1);
    connRef292->setDestEndpoint(dstPt292);
    connRef292->setRoutingType((ConnType)2);

    auto connRef293 = ConnRef::createConnRef(router, 293);
    ConnEnd srcPt293(Point(707.5, 503), 2);
    connRef293->setSourceEndpoint(srcPt293);
    ConnEnd dstPt293(Point(707.5, 553), 1);
    connRef293->setDestEndpoint(dstPt293);
    connRef293->setRoutingType((ConnType)2);

    auto connRef294 = ConnRef::createConnRef(router, 294);
    ConnEnd srcPt294(Point(707.5, 353), 2);
    connRef294->setSourceEndpoint(srcPt294);
    ConnEnd dstPt294(Point(707.5, 403), 1);
    connRef294->setDestEndpoint(dstPt294);
    connRef294->setRoutingType((ConnType)2);

    auto connRef295 = ConnRef::createConnRef(router, 295);
    ConnEnd srcPt295(Point(767.5, 291), 2);
    connRef295->setSourceEndpoint(srcPt295);
    ConnEnd dstPt295(Point(767.5, 341), 1);
    connRef295->setDestEndpoint(dstPt295);
    connRef295->setRoutingType((ConnType)2);

    auto connRef296 = ConnRef::createConnRef(router, 296);
    ConnEnd srcPt296(Point(767.5, 189), 2);
    connRef296->setSourceEndpoint(srcPt296);
    ConnEnd dstPt296(Point(767.5, 239), 1);
    connRef296->setDestEndpoint(dstPt296);
    connRef296->setRoutingType((ConnType)2);

    auto connRef297 = ConnRef::createConnRef(router, 297);
    ConnEnd srcPt297(Point(492.5, 2262.46), 2);
    connRef297->setSourceEndpoint(srcPt297);
    ConnEnd dstPt297(Point(492.5, 2312.46), 1);
    connRef297->setDestEndpoint(dstPt297);
    connRef297->setRoutingType((ConnType)2);

    auto connRef298 = ConnRef::createConnRef(router, 298);
    ConnEnd srcPt298(Point(1249.5, 1569.42), 4);
    connRef298->setSourceEndpoint(srcPt298);
    ConnEnd dstPt298(Point(1191.5, 1569.42), 8);
    connRef298->setDestEndpoint(dstPt298);
    connRef298->setRoutingType((ConnType)2);

    auto connRef299 = ConnRef::createConnRef(router, 299);
    ConnEnd srcPt299(Point(707.5, 665), 1);
    connRef299->setSourceEndpoint(srcPt299);
    ConnEnd dstPt299(Point(707.5, 615), 2);
    connRef299->setDestEndpoint(dstPt299);
    connRef299->setRoutingType((ConnType)2);

    auto connRef300 = ConnRef::createConnRef(router, 300);
    ConnEnd srcPt300(Point(476.5, 964), 1);
    connRef300->setSourceEndpoint(srcPt300);
    ConnEnd dstPt300(Point(476.5, 914), 2);
    connRef300->setDestEndpoint(dstPt300);
    connRef300->setRoutingType((ConnType)2);

    auto connRef301 = ConnRef::createConnRef(router, 301);
    ConnEnd srcPt301(Point(286.5, 1026), 2);
    connRef301->setSourceEndpoint(srcPt301);
    ConnEnd dstPt301(Point(286.5, 1076), 1);
    connRef301->setDestEndpoint(dstPt301);
    connRef301->setRoutingType((ConnType)2);

    auto connRef302 = ConnRef::createConnRef(router, 302);
    ConnEnd srcPt302(Point(286.5, 1128), 2);
    connRef302->setSourceEndpoint(srcPt302);
    ConnEnd dstPt302(Point(286.5, 1178), 1);
    connRef302->setDestEndpoint(dstPt302);
    connRef302->setRoutingType((ConnType)2);

    auto connRef303 = ConnRef::createConnRef(router, 303);
    ConnEnd srcPt303(Point(554.5, 1026), 2);
    connRef303->setSourceEndpoint(srcPt303);
    ConnEnd dstPt303(Point(554.5, 1076), 1);
    connRef303->setDestEndpoint(dstPt303);
    connRef303->setRoutingType((ConnType)2);

    auto connRef304 = ConnRef::createConnRef(router, 304);
    ConnEnd srcPt304(Point(554.5, 1128), 2);
    connRef304->setSourceEndpoint(srcPt304);
    ConnEnd dstPt304(Point(554.5, 1178), 1);
    connRef304->setDestEndpoint(dstPt304);
    connRef304->setRoutingType((ConnType)2);

    auto connRef305 = ConnRef::createConnRef(router, 305);
    ConnEnd srcPt305(Point(699.439, 1984.42), 1);
    connRef305->setSourceEndpoint(srcPt305);
    ConnEnd dstPt305(Point(699.439, 1934.42), 2);
    connRef305->setDestEndpoint(dstPt305);
    connRef305->setRoutingType((ConnType)2);

    auto connRef306 = ConnRef::createConnRef(router, 306);
    ConnEnd srcPt306(Point(1089.5, 2460.79), 1);
    connRef306->setSourceEndpoint(srcPt306);
    ConnEnd dstPt306(Point(1089.5, 2410.79), 2);
    connRef306->setDestEndpoint(dstPt306);
    connRef306->setRoutingType((ConnType)2);

    auto connRef307 = ConnRef::createConnRef(router, 307);
    ConnEnd srcPt307(Point(699.439, 1822.42), 2);
    connRef307->setSourceEndpoint(srcPt307);
    ConnEnd dstPt307(Point(699.439, 1872.42), 1);
    connRef307->setDestEndpoint(dstPt307);
    connRef307->setRoutingType((ConnType)2);

    auto connRef308 = ConnRef::createConnRef(router, 308);
    ConnEnd srcPt308(Point(1280.5, 1343.42), 4);
    connRef308->setSourceEndpoint(srcPt308);
    ConnEnd dstPt308(Point(1222.5, 1343.42), 8);
    connRef308->setDestEndpoint(dstPt308);
    connRef308->setRoutingType((ConnType)2);

    auto connRef309 = ConnRef::createConnRef(router, 309);
    ConnEnd srcPt309(Point(1298.5, 1507.42), 4);
    connRef309->setSourceEndpoint(srcPt309);
    ConnEnd dstPt309(Point(1240.5, 1507.42), 8);
    connRef309->setDestEndpoint(dstPt309);
    connRef309->setRoutingType((ConnType)2);

    auto connRef310 = ConnRef::createConnRef(router, 310);
    ConnEnd srcPt310(Point(1389.5, 1507.42), 4);
    connRef310->setSourceEndpoint(srcPt310);
    ConnEnd dstPt310(Point(1331.5, 1507.42), 8);
    connRef310->setDestEndpoint(dstPt310);
    connRef310->setRoutingType((ConnType)2);

    auto connRef311 = ConnRef::createConnRef(router, 311);
    ConnEnd srcPt311(Point(554.5, 1990.42), 2);
    connRef311->setSourceEndpoint(srcPt311);
    ConnEnd dstPt311(Point(554.5, 2040.42), 1);
    connRef311->setDestEndpoint(dstPt311);
    connRef311->setRoutingType((ConnType)2);

    auto connRef312 = ConnRef::createConnRef(router, 312);
    ConnEnd srcPt312(Point(1480.5, 1507.42), 4);
    connRef312->setSourceEndpoint(srcPt312);
    ConnEnd dstPt312(Point(1422.5, 1507.42), 8);
    connRef312->setDestEndpoint(dstPt312);
    connRef312->setRoutingType((ConnType)2);

    auto connRef313 = ConnRef::createConnRef(router, 313);
    ConnEnd srcPt313(Point(1100.5, 1599.42), 2);
    connRef313->setSourceEndpoint(srcPt313);
    ConnEnd dstPt313(Point(1100.5, 1649.42), 1);
    connRef313->setDestEndpoint(dstPt313);
    connRef313->setRoutingType((ConnType)2);

    auto connRef314 = ConnRef::createConnRef(router, 314);
    ConnEnd srcPt314(Point(1100.5, 1405.42), 2);
    connRef314->setSourceEndpoint(srcPt314);
    ConnEnd dstPt314(Point(1100.5, 1455.42), 1);
    connRef314->setDestEndpoint(dstPt314);
    connRef314->setRoutingType((ConnType)2);

    auto connRef315 = ConnRef::createConnRef(router, 315);
    ConnEnd srcPt315(Point(102.5, 2231.42), 8);
    connRef315->setSourceEndpoint(srcPt315);
    ConnEnd dstPt315(Point(160.5, 2231.42), 4);
    connRef315->setDestEndpoint(dstPt315);
    connRef315->setRoutingType((ConnType)2);

    auto connRef316 = ConnRef::createConnRef(router, 316);
    ConnEnd srcPt316(Point(1371.5, 1063.75), 4);
    connRef316->setSourceEndpoint(srcPt316);
    ConnEnd dstPt316(Point(1313.5, 1063.75), 8);
    connRef316->setDestEndpoint(dstPt316);
    connRef316->setRoutingType((ConnType)2);

    auto connRef317 = ConnRef::createConnRef(router, 317);
    ConnEnd srcPt317(Point(707.5, 740), 1);
    connRef317->setSourceEndpoint(srcPt317);
    ConnEnd dstPt317(Point(707.5, 690), 2);
    connRef317->setDestEndpoint(dstPt317);
    connRef317->setRoutingType((ConnType)2);

    auto connRef318 = ConnRef::createConnRef(router, 318);
    ConnEnd srcPt318(Point(476.5, 1039), 1);
    connRef318->setSourceEndpoint(srcPt318);
    ConnEnd dstPt318(Point(476.5, 989), 2);
    connRef318->setDestEndpoint(dstPt318);
    connRef318->setRoutingType((ConnType)2);

    auto connRef319 = ConnRef::createConnRef(router, 319);
    ConnEnd srcPt319(Point(1089.5, 2535.79), 1);
    connRef319->setSourceEndpoint(srcPt319);
    ConnEnd dstPt319(Point(1089.5, 2485.79), 2);
    connRef319->setDestEndpoint(dstPt319);
    connRef319->setRoutingType((ConnType)2);

    auto connRef320 = ConnRef::createConnRef(router, 320);
    ConnEnd srcPt320(Point(251.5, 2169.42), 15);
    connRef320->setSourceEndpoint(srcPt320);
    ConnEnd dstPt320(Point(251.5, 2216.42), 1);
    connRef320->setDestEndpoint(dstPt320);
    connRef320->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints320(1);
    checkpoints320[0] = Point(226.5, 2201.42);
    connRef320->setRoutingCheckpoints(checkpoints320);

    auto connRef321 = ConnRef::createConnRef(router, 321);
    ConnEnd srcPt321(Point(1191.5, 2169.42), 15);
    connRef321->setSourceEndpoint(srcPt321);
    ConnEnd dstPt321(Point(1026.5, 2179.79), 8);
    connRef321->setDestEndpoint(dstPt321);
    connRef321->setRoutingType((ConnType)2);

    auto connRef322 = ConnRef::createConnRef(router, 322);
    ConnEnd srcPt322(Point(1191.5, 2169.42), 15);
    connRef322->setSourceEndpoint(srcPt322);
    ConnEnd dstPt322(Point(1011.5, 2083.42), 1);
    connRef322->setDestEndpoint(dstPt322);
    connRef322->setRoutingType((ConnType)2);

    auto connRef323 = ConnRef::createConnRef(router, 323);
    ConnEnd srcPt323(Point(674.5, 2312.46), 15);
    connRef323->setSourceEndpoint(srcPt323);
    ConnEnd dstPt323(Point(720.5, 2169.42), 8);
    connRef323->setDestEndpoint(dstPt323);
    connRef323->setRoutingType((ConnType)2);

    auto connRef324 = ConnRef::createConnRef(router, 324);
    ConnEnd srcPt324(Point(829.5, 2169.42), 15);
    connRef324->setSourceEndpoint(srcPt324);
    ConnEnd dstPt324(Point(720.5, 2169.42), 8);
    connRef324->setDestEndpoint(dstPt324);
    connRef324->setRoutingType((ConnType)2);

    auto connRef325 = ConnRef::createConnRef(router, 325);
    ConnEnd srcPt325(Point(1191.5, 1903.42), 15);
    connRef325->setSourceEndpoint(srcPt325);
    ConnEnd dstPt325(Point(1191.5, 1950.42), 1);
    connRef325->setDestEndpoint(dstPt325);
    connRef325->setRoutingType((ConnType)2);

    auto connRef326 = ConnRef::createConnRef(router, 326);
    ConnEnd srcPt326(Point(1191.5, 883), 15);
    connRef326->setSourceEndpoint(srcPt326);
    ConnEnd dstPt326(Point(1222.5, 1048.75), 1);
    connRef326->setDestEndpoint(dstPt326);
    connRef326->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints326(1);
    checkpoints326[0] = Point(1191.5, 1093.75);
    connRef326->setRoutingCheckpoints(checkpoints326);

    auto connRef327 = ConnRef::createConnRef(router, 327);
    ConnEnd srcPt327(Point(286.5, 883), 15);
    connRef327->setSourceEndpoint(srcPt327);
    ConnEnd dstPt327(Point(461.5, 777), 4);
    connRef327->setDestEndpoint(dstPt327);
    connRef327->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints327(1);
    checkpoints327[0] = Point(514.5, 883);
    connRef327->setRoutingCheckpoints(checkpoints327);

    auto connRef328 = ConnRef::createConnRef(router, 328);
    ConnEnd srcPt328(Point(286.5, 883), 15);
    connRef328->setSourceEndpoint(srcPt328);
    ConnEnd dstPt328(Point(461.5, 852), 4);
    connRef328->setDestEndpoint(dstPt328);
    connRef328->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints328(1);
    checkpoints328[0] = Point(514.5, 883);
    connRef328->setRoutingCheckpoints(checkpoints328);

    auto connRef329 = ConnRef::createConnRef(router, 329);
    ConnEnd srcPt329(Point(286.5, 584), 15);
    connRef329->setSourceEndpoint(srcPt329);
    ConnEnd dstPt329(Point(692.5, 478), 4);
    connRef329->setDestEndpoint(dstPt329);
    connRef329->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints329(1);
    checkpoints329[0] = Point(745.5, 584);
    connRef329->setRoutingCheckpoints(checkpoints329);

    auto connRef330 = ConnRef::createConnRef(router, 330);
    ConnEnd srcPt330(Point(286.5, 584), 15);
    connRef330->setSourceEndpoint(srcPt330);
    ConnEnd dstPt330(Point(692.5, 553), 4);
    connRef330->setDestEndpoint(dstPt330);
    connRef330->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints330(1);
    checkpoints330[0] = Point(745.5, 584);
    connRef330->setRoutingCheckpoints(checkpoints330);

    auto connRef331 = ConnRef::createConnRef(router, 331);
    ConnEnd srcPt331(Point(1191.5, 584), 15);
    connRef331->setSourceEndpoint(srcPt331);
    ConnEnd dstPt331(Point(722.5, 403), 8);
    connRef331->setDestEndpoint(dstPt331);
    connRef331->setRoutingType((ConnType)2);
    std::vector<Checkpoint> checkpoints331(1);
    checkpoints331[0] = Point(669.5, 584);
    connRef331->setRoutingCheckpoints(checkpoints331);

    auto connRef332 = ConnRef::createConnRef(router, 332);
    ConnEnd srcPt332(Point(1191.5, 280), 15);
    connRef332->setSourceEndpoint(srcPt332);
    ConnEnd dstPt332(Point(782.5, 341), 8);
    connRef332->setDestEndpoint(dstPt332);
    connRef332->setRoutingType((ConnType)2);

    auto connRef333 = ConnRef::createConnRef(router, 333);
    ConnEnd srcPt333(Point(1191.5, 280), 15);
    connRef333->setSourceEndpoint(srcPt333);
    ConnEnd dstPt333(Point(782.5, 239), 8);
    connRef333->setDestEndpoint(dstPt333);
    connRef333->setRoutingType((ConnType)2);

    auto connRef334 = ConnRef::createConnRef(router, 334);
    ConnEnd srcPt334(Point(1191.5, 584), 15);
    connRef334->setSourceEndpoint(srcPt334);
    ConnEnd dstPt334(Point(1427, 986.25), 4);
    connRef334->setDestEndpoint(dstPt334);
    connRef334->setRoutingType((ConnType)2);
#endif

    auto connRef335 = ConnRef::createConnRef(router, 335);
    ConnEnd srcPt335(Point(1191.5, 1291.42), 15);
    connRef335->setSourceEndpoint(srcPt335);
    ConnEnd dstPt335(Point(1427, 1026.25), 4);
    connRef335->setDestEndpoint(dstPt335);
    connRef335->setRoutingType((ConnType)2);

#ifdef ALL
    auto connRef336 = ConnRef::createConnRef(router, 336);
    ConnEnd srcPt336(Point(1191.5, 1779.42), 15);
    connRef336->setSourceEndpoint(srcPt336);
    ConnEnd dstPt336(Point(1513, 1189.75), 2);
    connRef336->setDestEndpoint(dstPt336);
    connRef336->setRoutingType((ConnType)2);

    auto connRef337 = ConnRef::createConnRef(router, 337);
    ConnEnd srcPt337(Point(1191.5, 2169.42), 15);
    connRef337->setSourceEndpoint(srcPt337);
    ConnEnd dstPt337(Point(1553, 1189.75), 2);
    connRef337->setDestEndpoint(dstPt337);
    connRef337->setRoutingType((ConnType)2);

    auto connRef338 = ConnRef::createConnRef(router, 338);
    ConnEnd srcPt338(Point(1191.5, 280), 15);
    connRef338->setSourceEndpoint(srcPt338);
    ConnEnd dstPt338(Point(1252, 214.5), 2);
    connRef338->setDestEndpoint(dstPt338);
    connRef338->setRoutingType((ConnType)2);

    auto connRef339 = ConnRef::createConnRef(router, 339);
    ConnEnd srcPt339(Point(251.5, 1903.42), 15);
    connRef339->setSourceEndpoint(srcPt339);
    ConnEnd dstPt339(Point(247.5, 2025.92), 8);
    connRef339->setDestEndpoint(dstPt339);
    connRef339->setRoutingType((ConnType)2);

    auto connRef340 = ConnRef::createConnRef(router, 340);
    ConnEnd srcPt340(Point(251.5, 2169.42), 15);
    connRef340->setSourceEndpoint(srcPt340);
    ConnEnd dstPt340(Point(247.5, 2065.92), 8);
    connRef340->setDestEndpoint(dstPt340);
    connRef340->setRoutingType((ConnType)2);

    auto connRef341 = ConnRef::createConnRef(router, 341);
    ConnEnd srcPt341(Point(1191.5, 1655.42), 15);
    connRef341->setSourceEndpoint(srcPt341);
    ConnEnd dstPt341(Point(736.5, 1662.92), 8);
    connRef341->setDestEndpoint(dstPt341);
    connRef341->setRoutingType((ConnType)2);

    auto connRef342 = ConnRef::createConnRef(router, 342);
    ConnEnd srcPt342(Point(1432.5, 2169.42), 15);
    connRef342->setSourceEndpoint(srcPt342);
    ConnEnd dstPt342(Point(1438.5, 2248.79), 1);
    connRef342->setDestEndpoint(dstPt342);
    connRef342->setRoutingType((ConnType)2);
#endif

    router->processTransaction();
    router->outputDiagram("output/checkpointNudging2");

    // Second last segment of connector 256 and 258 should be in line with each other 
    // in the y dimension, in line with the checkpoint.
    bool areInline = (connRef258->displayRoute().ps[2].y == connRef258->displayRoute().ps[3].y) &&
    		     (connRef258->displayRoute().ps[2].y == connRef256->displayRoute().ps[2].y) &&
    		     (connRef258->displayRoute().ps[2].y == connRef256->displayRoute().ps[3].y);

    delete router;
    return (areInline) ? 0 : 1;
};
