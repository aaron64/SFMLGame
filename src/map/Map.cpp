//
// Created by aaron on 11/22/15.
//

#include "Map.h"
#include "../util/Screen.h"

Map::Map()
{
    bg = new Image("bg");
    bg->setScale(Screen::SCREEN_WIDTH, Screen::SCREEN_HEIGHT);
}

void Map::update() {

}

void Map::render(sf::RenderWindow &g) {
    bg->drawStatic(-Screen::SCREEN_WIDTH/2,-Screen::SCREEN_HEIGHT/2,g);
}
