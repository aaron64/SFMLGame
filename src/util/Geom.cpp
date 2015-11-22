//
// Created by aaron on 10/4/15.
//

#include "Geom.h"
#include <cmath>

// distance between two points
float Geom::dist(float x1, float y1, float x2, float y2) {
    float dx = x1 - x2;
    float dy = y1 - y2;
    return sqrt(dx * dx + dy * dy);
}
