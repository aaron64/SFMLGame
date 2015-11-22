//
// Created by aaron on 10/31/15.
//

#include <iostream>
#include "Player.h"
#include "../util/Keys.h"

using namespace std;


Player::Player(float x, float y, std::string name) : Living(x,y,name) {

}

void Player::update() {
    if(Keys::W)
        move(0,-1 * getVelocity());
    if(Keys::S)
        move(0,1 * getVelocity());
    if(Keys::A)
        move(-1 * getVelocity(), 0);
    if(Keys::D)
        move(1 * getVelocity(), 0);
    if(Keys::SHIFT)
        setVelocity(2);
    else
        setVelocity(1);
}
void Player::render(sf::RenderWindow& g) {
    image->draw(getX(), getY(), g);
}