//
// Created by aaron on 11/10/15.
//

#include <iostream>
#include "Enemy.h"

using namespace std;

Enemy::Enemy(float x, float y, std::string name) : Living(x,y,name) {
    setVelocity(1.0);

    mXd = (((double)rand()/(RAND_MAX)) + 0.25) * (-1 + (int)(((double)rand()/RAND_MAX) * 2.0) * 2.0);
    mYd = (((double)rand()/(RAND_MAX)) + 0.25) * (-1 + (int)(((double)rand()/RAND_MAX) * 2.0) * 2.0);
}

void Enemy::update() {
    move(mXd * getVelocity(), mYd * getVelocity());
}

void Enemy::render(sf::RenderWindow& g) {
    image->draw(getX(),getY(),g);
}