//
// Created by aaron on 10/4/15.
//

#ifndef GAME_X_MENU_H
#define GAME_X_MENU_H

#include <SDL2/SDL.h>
#include "GameState.h"

class Menu: public GameState {
public:
    Menu(std::string name, int id);

    void update();
    void render();
};


#endif //GAME_X_MENU_H
