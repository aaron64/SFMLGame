//
// Created by aaron on 10/4/15.
//

#include <iostream>
#include "GameState.h"

GameState::GameState(std::string name, int id) : mID(id), mName(name) {

}

int GameState::getId() {
    return mID;
}


// Satic Functions

// Initializes stateList
std::vector<GameState*> GameState::stateList;
GameState* GameState::currentState;
void GameState::init() {

}

// Sets current state
void GameState::setCurrentState(int id) {
    for(int i = 0; i < stateList.size(); i++)
    {
        if(stateList[i]->getId() == id)
            currentState = stateList[i];
    }
}

// Adds a state to stateList
void GameState::addState(GameState *gs) {
    stateList.push_back(gs);
}

// Returns current state
GameState* GameState::getCurrentState() {
    return currentState;
}