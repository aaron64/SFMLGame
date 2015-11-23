//
// Created by aaron on 11/22/15.
//

#include "Grid.h"
#include "GridFactory.h"
#include "GridImages.h"

Grid::Grid(int w, int h) {
    this->w = w;
    this->h = h;

    tileGrid = GridFactory::getGrid(w,h);
}

void Grid::render(sf::RenderWindow &g) {
    for(int i = 0; i < w; i++)
    {
        for(int j = 0; j < h; j++)
        {
            if(tileGrid[i][j] == 1)
            GridImages::BLOCK.draw(i * 32, j * 32, g);
        }
    }
}