//
// Created by aaron on 10/4/15.
//

#ifndef GAME_X_GEOM_H
#define GAME_X_GEOM_H

#include <SFML/Graphics/Rect.hpp>

class Geom {
public:
    static float dist(float x1, float y1, float x2, float y2);
    static bool intersection(sf::FloatRect a, sf::FloatRect b);
};


#endif //GAME_X_GEOM_H
