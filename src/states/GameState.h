//
// Created by aaron on 10/4/15.
//

#ifndef GAME_X_GAMESTATE_H
#define GAME_X_GAMESTATE_H

#include <string>
#include <vector>
#include <SDL2/SDL.h>
#include <SFML/Graphics/RenderWindow.hpp>

class GameState {
public:
    GameState(std::string name, int id);

    virtual void update(){}
    virtual void render(sf::RenderWindow& g){}

    int getId();


    static void init();
    static void addState(GameState* gs);
    static void setCurrentState(int id);
    static GameState* getState(int id);
    static GameState* getCurrentState();

private:
    static std::vector<GameState*> stateList;
    static GameState* currentState;

    int mID;
    std::string mName;
};


#endif //GAME_X_GAMESTATE_H
