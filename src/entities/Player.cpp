//
// Created by aaron on 10/31/15.
//

#include <iostream>
#include <cmath>
#include "Player.h"
#include "../util/Keys.h"
#include "../states/PlayData.h"
#include "../util/Screen.h"

using namespace std;


Player::Player(float x, float y, std::string name) : Living(x,y,name) {

}

void Player::update(PlayData& pd) {
    // position last frame
    float oldX = getX();
    float oldY = getY();

    if(Keys::W)
        move(0,-1 * getVelocity());
    if(Keys::S)
        move(0,1 * getVelocity());
    if(collides(pd))
        setY(oldY);


    if(Keys::A)
        move(-1 * getVelocity(), 0);
    if(Keys::D)
        move(1 * getVelocity(), 0);
    if(collides(pd))
        setX(oldX);

    if(Keys::SHIFT)
        setVelocity(2);
    else
        setVelocity(1);
}
void Player::render(PlayData& pd, sf::RenderWindow& g) {
    float r = atan2(pd.cursor->getY() - Screen::SCREEN_HEIGHT/2, pd.cursor->getX() - Screen::SCREEN_WIDTH/2);
    image->getSprite().setRotation((r * 180)/M_PI);
    image->draw(getX(), getY(), g);
}