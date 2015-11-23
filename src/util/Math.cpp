//
// Created by aaron on 11/23/15.
//

#include <stdlib.h>
#include "Math.h"

int Math::randInt(int min, int max) {
    return min + (rand() % (int)(max - min + 1));
}