//
// Created by aaron on 11/22/15.
//

#ifndef SFMLPROJECT_GRIDFACTORY_H
#define SFMLPROJECT_GRIDFACTORY_H


#include "../states/PlayData.h"

class GridFactory {
public:
    static int** getGrid(PlayData& pd, int w, int h);
};


#endif //SFMLPROJECT_GRIDFACTORY_H
