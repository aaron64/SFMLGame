//
// Created by aaron on 11/22/15.
//

#ifndef SFMLPROJECT_MAP_H
#define SFMLPROJECT_MAP_H


#include "../util/Image.h"
#include "Grid.h"

class PlayData;
class Map {
public:
    Map(PlayData* pd);
    void update();
    void render(sf::RenderWindow& g);

    bool hasCollision(float x, float y);
private:
    Image* bg;
    Grid* grid;
};


#endif //SFMLPROJECT_MAP_H
