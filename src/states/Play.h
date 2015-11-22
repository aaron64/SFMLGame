//
// Created by aaron on 10/4/15.
//

#ifndef GAME_X_PLAY_H
#define GAME_X_PLAY_H

#include <SDL2/SDL.h>
#include "GameState.h"
#include "PlayData.h"

class Play: public GameState {
public:
    Play(std::string name, int id);

    void update();
    void render(sf::RenderWindow& g);

private:
    PlayData* pd;
};


#endif //GAME_X_PLAY_H
