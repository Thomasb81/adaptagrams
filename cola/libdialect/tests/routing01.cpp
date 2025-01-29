/*
 * vim: ts=4 sw=4 et tw=0 wm=0
 *
 * libdialect - A library for computing DiAlEcT layouts:
 *                 D = Decompose/Distribute
 *                 A = Arrange
 *                 E = Expand/Emend
 *                 T = Transform
 *
 * Copyright (C) 2018  Monash University
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * See the file LICENSE.LGPL distributed with the library.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * Author(s):   Steve Kieffer   <http://skieffer.info>
*/

#include "libavoid/libavoid.h"

#include "libdialect/commontypes.h"
#include "libdialect/io.h"
#include "libdialect/graphs.h"
#include "libdialect/routing.h"


using namespace dialect;

int main(void) {

    // Test that libavoid will route in between nodes that are touching, but
    // not if they are overlapping.

    Graph_SP graph = buildGraphFromTglfFile(TEST_DATA_PATH "graphs/" "special/routing01.tglf");

    RoutingAdapter ra(Avoid::OrthogonalRouting);
    ra.addNodes(graph->getNodeLookup());
    ra.addEdges(graph->getEdgeLookup());
    ra.route();

    writeStringToFile(graph->writeTglf(), IMAGE_OUTPUT_PATH "output/" "routing01_" "routed.tglf");
    writeStringToFile(graph->writeSvg(), IMAGE_OUTPUT_PATH "output/routing01_routed.svg");

    return 0;
}
