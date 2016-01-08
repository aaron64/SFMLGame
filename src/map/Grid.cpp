//
// Created by aaron on 11/22/15.
//

#include "Grid.h"
#include "GridFactory.h"
#include "GridImages.h"

Grid::Grid(PlayData& pd, int w, int h) {
    this->w = w;
    this->h = h;

    this->size = 32;

    tileGrid = GridFactory::getGrid(pd, w,h);
}

void Grid::render(sf::RenderWindow &g) {
    for(int i = 0; i < w; i++)
    {
        for(int j = 0; j < h; j++)
        {
            switch(tileGrid[i][j]) {
                case 0:
                    GridImages::GROUND.draw(i * size, j * size, g);
                    break;
                case 1:
                    GridImages::BLOCK.draw(i * size, j * size, g);
                    break;
            }
        }
    }
}

int Grid::getSize()
{
    return size;
}

int Grid::getWidth() {
    return w;
}
int Grid::getHeight() {
    return h;
}

int Grid::getTile(int x, int y)
{
    return tileGrid[x][y];
}