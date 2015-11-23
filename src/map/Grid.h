//
// Created by aaron on 11/22/15.
//

#ifndef SFMLPROJECT_GRID_H
#define SFMLPROJECT_GRID_H


#include <SFML/Graphics/RenderWindow.hpp>

class Grid {
public:
    Grid(int w, int h);

    void render(sf::RenderWindow& g);
private:
    int w,h;
    int** tileGrid;
};


#endif //SFMLPROJECT_GRID_H
