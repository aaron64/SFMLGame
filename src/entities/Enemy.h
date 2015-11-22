//
// Created by aaron on 11/10/15.
//

#ifndef GAME_X_ENEMY_H
#define GAME_X_ENEMY_H


#include <SFML/Graphics/RenderWindow.hpp>
#include "Living.h"

class Enemy : public Living {
public:
    Enemy(float x, float y, std::string name);

    void update();
    void render(sf::RenderWindow& g);

private:
    float mXd, mYd;
};


#endif //GAME_X_ENEMY_H
