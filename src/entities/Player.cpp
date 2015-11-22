//
// Created by aaron on 10/31/15.
//

#include <iostream>
#include <cmath>
#include "Player.h"
#include "../util/Keys.h"
#include "../states/PlayData.h"

using namespace std;


Player::Player(float x, float y, std::string name) : Living(x,y,name) {

}

void Player::update(PlayData& pd) {
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
void Player::render(PlayData& pd, sf::RenderWindow& g) {
    float r = atan2(getY() - pd.cursor->getY(), getX() - pd.cursor->getX());
    image->getSprite().setRotation(r * 180);
    image->draw(getX(), getY(), g);
}