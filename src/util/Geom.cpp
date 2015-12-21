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

// check for intersection of two rectangles
bool Geom::intersection(sf::FloatRect a, sf::FloatRect b) {
    return !(b.left > a.left + a.width ||
      b.left + b.width < a.left ||
      b.top > a.top + a.height ||
      b.top + b.height < a.top);
}
