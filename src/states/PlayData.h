//
// Created by aaron on 10/8/15.
//

#ifndef GAME_X_PLAYDATA_H
#define GAME_X_PLAYDATA_H


#include <vector>
#include "../entities/Entity.h"
#include "../map/Map.h"
#include "../entities/Player.h"

// This class provides data to the "Play" state, map, entities, time, etc
class PlayData {
public:
    PlayData();
    Player* player;
    Map* map;
    std::vector<Entity*> entityList;
};


#endif //GAME_X_PLAYDATA_H
