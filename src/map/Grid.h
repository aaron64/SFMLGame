//
// Created by aaron on 11/22/15.
//

#ifndef SFMLPROJECT_GRID_H
#define SFMLPROJECT_GRID_H

#include <SFML/Graphics/RenderWindow.hpp>

class PlayData;
class Grid {
public:
    Grid(PlayData& pd, int w, int h);

    void render(sf::RenderWindow& g);

    int getSize();
    int getWidth();
    int getHeight();

    int getTile(int x, int y);
private:
    int w,h;
    int size;
    int** tileGrid;
};


#endif //SFMLPROJECT_GRID_H
