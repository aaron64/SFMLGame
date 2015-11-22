//
// Created by aaron on 10/31/15.
//

#include <SFML/Window/Keyboard.hpp>
#include "Keys.h"

bool Keys::W = false;
bool Keys::A = false;
bool Keys::S = false;
bool Keys::D = false;
bool Keys::SHIFT = false;

void Keys::updateKeys() {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        Keys::W = true;
    else
        Keys::W = false;

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        Keys::A = true;
    else
        Keys::A = false;

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        Keys::S = true;
    else
        Keys::S = false;

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        Keys::D = true;
    else
        Keys::D = false;

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
        Keys::SHIFT = true;
    else
        Keys::SHIFT = false;
}