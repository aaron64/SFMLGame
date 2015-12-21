//
// Created by aaron on 11/22/15.
//

#include <iostream>
#include <cmath>
#include "GridFactory.h"
#include "../util/Geom.h"
#include "../util/Math.h"

int** GridFactory::getGrid(PlayData& pd, int w,int h) {
    // Create grid result
    int** result = new int*[w];

    for(int i = 0; i < w; i++)
    {
        result[i] = new int[h];
        for(int j = 0; j < h; j++)
        {
            result[i][j] = 1;
        }
    }

    // Cut Circles
    int circles = 5;
    int cxs[circles];
    int cys[circles];
    for(int i = 0; i < circles; i++)
    {
        int r = 5;
        int cx = Math::randInt(r, w-r);
        int cy = Math::randInt(r, h-r);

        cxs[i] = cx;
        cys[i] = cy;
        for(int j = -r; j <= r; j++)
        {
            for(int k = -r; k <= r; k++)
            {
                if(Geom::dist(0,0,j,k) < r)
                    result[cx + j][cy + k] = 0;
            }
        }
    }

    // Make roads
    for(int i = 0; i < circles-1; i++)
    {
        // get circle i coords
        int cx1 = cxs[i];
        int cy1 = cys[i];

        // get circle i + 1 coords
        int cx2 = cxs[i+1];
        int cy2 = cys[i+1];

        // get rectangular corner points
        int px = cx1;
        int py = cy2;

        // dig tunnles
        for(int j = std::min(cx1, cx2); j < std::max(cx1, cx2); j++)
        {
            result[j][py] = 0;
            result[j][py-1] = 0;
            result[j][py+1] = 0;
        }

        for(int j = std::min(cy1, cy2); j < std::max(cy1, cy2); j++)
        {
            result[px][j] = 0;
            result[px-1][j] = 0;
            result[px+1][j] = 0;
        }
    }

    // print map
    for(int i = 0; i < w; i++)
    {
        for(int j = 0; j < h; j++)
        {
            std::cout << " " << result[i][j];
        }
        std::cout << std::endl;
    }

    // set spawn coords
    pd.setSpawn(cxs[0] * 32,cys[0] * 32);

    return result;
}