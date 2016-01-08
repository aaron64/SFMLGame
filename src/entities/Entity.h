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

    void move(float x, float y);

    bool collides(PlayData& pd);
    bool entityCollsion(PlayData& pd);
    bool mapCollision(PlayData& pd);

    void setName(std::string name);
    void setX(float x);
    void setY(float y);


    std::string getName();

    float getX();
    float getY();
    float getCenterX();
    float getCenterY();

    int getWidth();
    int getHeight();

    int getId();
protected:
    Image* image;
private:
    float mX, mY;
    std::string mName;
    int mW,mH;

    int id;
    static int idCounter;
};


#endif //GAME_X_ENTITY_H
