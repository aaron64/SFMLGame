//
// Created by aaron on 10/4/15.
//

#ifndef GAME_X_ENTITY_H
#define GAME_X_ENTITY_H

#include <string>
#include <SFML/Graphics/RenderWindow.hpp>
#include "../util/Image.h"

class PlayData;
class Entity {
public:
    Entity(float x, float y, std::string name);

    virtual void update(PlayData& pd) {}
    virtual void render(PlayData& pd, sf::RenderWindow& g) {}


    void setName(std::string name);

    void setX(float x);
    void setY(float y);

    void move(float x, float y);

    std::string getName();

    float getX();
    float getY();

    int getWidth();
    int getHeight();

protected:
    Image* image;
private:
    float mX, mY;
    std::string mName;
    int mW,mH;
};


#endif //GAME_X_ENTITY_H
