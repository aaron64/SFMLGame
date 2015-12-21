//
// Created by aaron on 10/8/15.
//

#include "PlayData.h"
PlayData::PlayData() {
    cursor = new Cursor("crosshair");
    map = new Map(this);
}

void PlayData::setSpawn(float x, float y) {
    spawn[0] = x;
    spawn[1] = y;
}