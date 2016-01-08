//
// Created by aaron on 10/4/15.
//

#include "Entity.h"
#include "../states/PlayData.h"
#include "../util/Geom.h"

int Entity::idCounter = 0;
Entity::Entity(float x, float y, std::string name) : mName(name) {
    mX = x;
    mY = y;

    image = new Image(name);

    mW = 32;
    mH = 32;

    id = idCounter;
    idCounter++;
}


void Entity::move(float x, float y) {
    mX += x;
    mY += y;
}


bool Entity::collides(PlayData& pd)
{
    return (mapCollision(pd) || entityCollsion(pd));
}

bool Entity::entityCollsion(PlayData& pd) {
    sf::FloatRect a(this->getX(), this->getY(), this->getWidth(), this->getHeight());
    for(int i = 0; i < pd.entityList.size(); i++)
    {
        Entity& e = *pd.entityList[i];
        if(e.getId() != this->getId())
        {
            sf::FloatRect b(e.getX(), e.getY(), e.getWidth(), e.getHeight());
            if(Geom::intersection(a,b))
                return true;
        }
    }
    return false;
}
bool Entity::mapCollision(PlayData &pd) {
    return pd.map->hasCollision(getCenterX(), getCenterY());
}

// Setters
void Entity::setX(float x)
{
    this->mX = x;
}
void Entity::setY(float y)
{
    this->mY = y;
}
void Entity::setName(std::string name)
{
    mName = name;
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
float Entity::getCenterX()
{
    return mX + mW/2;
}
float Entity::getCenterY()
{
    return mY + mH/2;
}

std::string Entity::getName()
{
    return mName;
}

int Entity::getId()
{
    return id;
}

int Entity::getWidth()
{
    return mW;
}
int Entity::getHeight()
{
    return mH;
}