//
// Created by aaron on 10/4/15.
//

#include "Entity.h"

Entity::Entity(float x, float y, std::string name) : mName(name) {
    mX = x;
    mY = y;
    mW = 10;
    mH = 10;

    image = new Image(name);
}

// Setters
void Entity::setName(std::string name)
{
    mName = name;
}

void Entity::move(float x, float y) {
    mX += x;
    mY += y;
}

void Entity::setX(float x)
{
    this->mX = x;
}
void Entity::setY(float y)
{
    this->mY = y;
}


// Getters
float Entity::getX()
{
    return mX;
}
float Entity::getY()
{
    return mY;

}
std::string Entity::getName()
{
    return mName;
}