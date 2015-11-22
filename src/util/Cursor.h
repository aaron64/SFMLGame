//
// Created by aaron on 11/22/15.
//

#ifndef SFMLPROJECT_CURSOR_H
#define SFMLPROJECT_CURSOR_H

#include <iostream>
#include "Image.h"

class Cursor {
public:
    Cursor(std::string name);
    void render(sf::RenderWindow& g);

    int getX();
    int getY();
private:
    int x,y;
    Image* image;
};


#endif //SFMLPROJECT_CURSOR_H
