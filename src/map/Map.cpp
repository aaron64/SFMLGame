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
