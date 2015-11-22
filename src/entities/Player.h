//
// Created by aaron on 10/31/15.
//

#ifndef GAME_X_PLAYER_H
#define GAME_X_PLAYER_H


#include <SFML/Graphics/RenderWindow.hpp>
#include "Living.h"

class Player: public Living {
public:
    Player(float x, float y, std::string name);

    void update();
    void render(sf::RenderWindow& g);
};


#endif //GAME_X_PLAYER_H
