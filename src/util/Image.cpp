//
// Created by aaron on 9/20/15.
//

#include <iostream>
#include "Image.h"
#include "Screen.h"

using namespace std;

Image::Image(std::string name)
{
    loaded = false;

    // Load an image file from a file
    if (texture.loadFromFile("res/images/" + name + ".png")) {
        loaded = true;
        image.setTexture(texture, false);
    }
}

void Image::setScale(int x, int y) {
    image.setScale(((float)x/texture.getSize().x),((float)y/texture.getSize().y));
}

void Image::draw(float x, float y, sf::RenderWindow& g){
    image.setPosition(x,y);
    g.draw(image);
}