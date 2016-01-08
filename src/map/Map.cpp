//
// Created by aaron on 11/22/15.
//

#include <iostream>
#include "Map.h"
#include "../util/Screen.h"

Map::Map(PlayData* pd)
{
    bg = new Image("bg");
    bg->setScale(Screen::SCREEN_WIDTH, Screen::SCREEN_HEIGHT);

    grid = new Grid(*pd, 50,50);
}

void Map::update() {

}

void Map::render(sf::RenderWindow &g) {
    //bg->drawStatic(-Screen::SCREEN_WIDTH/2,-Screen::SCREEN_HEIGHT/2,g);

    grid->render(g);
}

bool Map::hasCollision(float x, float y)
{
    //check out of map
    int right = grid->getSize() * grid->getWidth() - 1;
    int bottom = grid->getSize() * grid->getHeight() - 1;
    if(x < 0 || x > right || y < 0 || y > bottom)
        return true;

    // tile collision
    int s = grid->getSize();
    int i = grid->getTile(x/s, y/s);
    if(i == 1)
    {
        return true;
    }
    return false;
}
