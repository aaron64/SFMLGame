//
// Created by aaron on 10/4/15.
//

#include <iostream>
#include "Play.h"
#include "../util/Keys.h"
#include "../entities/Enemy.h"
#include "../util/Screen.h"

using namespace std;

Play::Play(std::string name, int id) : GameState(name, id) {
    pd = new PlayData();

    Player* p = new Player(pd->spawn[0],pd->spawn[1],"Player");
    pd->player = p;
    pd->entityList.push_back(p);

    for(int i = 0; i < 1; i++)
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
        pd->entityList[i]->update(*pd);
    }
}

void Play::render(sf::RenderWindow& g)
{
    // Center view around player
    sf::View v;
    v.setSize(Screen::SCREEN_WIDTH,Screen::SCREEN_HEIGHT);
    v.setCenter(pd->player->getX(),pd->player->getY());
    g.setView(v);

    // Render map
    pd->map->render(g);

    // Renders each entity in entityList
    for(int i = 0; i < pd->entityList.size(); i++)
    {
        pd->entityList[i]->render(*pd, g);
    }

    // Render cursor
    pd->cursor->render(g);
}