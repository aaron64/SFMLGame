//
// Created by aaron on 11/22/15.
//

#include <SFML/Window/Mouse.hpp>
#include "Cursor.h"
#include "Screen.h"

Cursor::Cursor(std::string name) {
    image = new Image(name);
}

int Cursor::getX() {
    return x;
}
int Cursor::getY() {
    return y;
}

void Cursor::render(sf::RenderWindow& g) {
    x = -sf::Mouse::getPosition(g).x;
    y = -sf::Mouse::getPosition(g).y;
    image->drawStatic(x,y,g);
}