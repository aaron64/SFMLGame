#include <iostream>
#include <SFML/Graphics.hpp>
#include <unistd.h>
#include "src/util/Screen.h"
#include "src/states/GameState.h"
#include "src/states/Play.h"
#include "src/util/Image.h"

using namespace std;

//Starts up SDL and creates window
bool init();

sf::RenderWindow* window;

//Loads media
bool loadMedia();

//Frees media and shuts down SDL
void close();

bool init()
{
    window = new sf::RenderWindow(sf::VideoMode(Screen::SCREEN_WIDTH, Screen::SCREEN_HEIGHT), "Hello");
    window->setPosition(sf::Vector2i(400,200));

    //Initialization flag
    bool success = true;
    return success;
}

bool loadMedia()
{
    //Loading success flag
    bool success = true;

    return success;
}

void close()
{
}

void initGame() {
    // Initialize GameState
    GameState::init();

    // Create play state
    GameState* play = new Play("Play", 1);
    GameState::addState(play);

    // Set current state to Play
    GameState::setCurrentState(1);
    cout << "State ID: " << GameState::getCurrentState()->getId() << endl;
}

void loop(sf::RenderWindow& window) {
    while (window.isOpen()) {
        sf::Event Event;
        while (window.pollEvent(Event)) {
            if (Event.type == sf::Event::Closed)
                window.close();
        }

        //clear screen
        window.clear(sf::Color::Black);

        //update and render
        GameState::getCurrentState()->update();
        GameState::getCurrentState()->render(window);

        //display window
        window.display();

        usleep(10000);
    }
}

int main( int argc, char* args[] )
{
    //Start up SDL and create window
    if( !init() )
    {
        printf( "Failed to initialize!\n" );
    }
    else
    {
        //Load media
        if( !loadMedia() )
        {
            printf( "Failed to load media!\n" );
        }
        else
        {
            initGame();
            loop(*window);
        }
    }

    //Free resources and close SDL
    close();

    return 0;
}
