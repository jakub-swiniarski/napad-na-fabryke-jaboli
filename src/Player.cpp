#include "../headers/Player.hpp"

Player::Player(){
    Player::setPosition(0,0);

    img.loadFromFile("assets/sprites/orzel.png");
    Player::setTexture(img);
}
