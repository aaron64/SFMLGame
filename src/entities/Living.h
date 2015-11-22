//
// Created by aaron on 10/31/15.
//

#ifndef GAME_X_LIVING_H
#define GAME_X_LIVING_H

#include "Entity.h"

class Living: public Entity {
public:
    Living(float x, float y, std::string name);

    void setVelocity(int v) { mV = v; }
    int getVelocity() { return mV; }
private:
    int mV;
};


#endif //GAME_X_LIVING_H
