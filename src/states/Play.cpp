//
// Created by aaron on 10/4/15.
//

#include <iostream>
#include "Play.h"
#include "../entities/Player.h"
#include "../util/Keys.h"
#include "../entities/Enemy.h"

using namespace std;

Play::Play(std::string name, int id) : GameState(name, id) {
    pd = new PlayData();
    pd->entityList.push_back(new Player(100,100,"Player"));

    for(int i = 0; i < 1000; i++)
    {
        float ex = rand() % 640;
        float ey = rand() % 480;
        pd->entityList.push_back(new Enemy(ex, ey, "Enemy"));
    }
}

void Play::update()
{

    //update keys
    Keys::updateKeys();

    pd->map->update();

    // Updates each entity in entityList
    for(int i = 0; i < pd->entityList.size(); i++)
    {
        pd->entityList[i]->update();
    }
}

void Play::render(sf::RenderWindow& g)
{
    pd->map->render(g);

    // Renders each entity in entityList
    for(int i = 0; i < pd->entityList.size(); i++)
    {
        pd->entityList[i]->render(g);
    }
}