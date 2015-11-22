//
// Created by aaron on 9/20/15.
//

#ifndef GAME_X_IMAGE_H
#define GAME_X_IMAGE_H

#include <string>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Texture.hpp>

class Image {
public:
    Image(std::string name);

    void draw(float x, float y, sf::RenderWindow& g);
    void drawStatic(float x, float y, sf::RenderWindow& g);
    void setScale(int x, int y);
private:
    sf::Sprite image;
    sf::Texture texture;
    bool loaded;
};


#endif //GAME_X_IMAGE_H
