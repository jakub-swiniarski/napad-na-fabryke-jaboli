#include "../headers/Player.hpp"

Player::Player(){
    Player::setPosition(0,0);

    img.loadFromFile("assets/sprites/orzel.png");
    Player::setScale(6.f,6.f);
    Player::setTexture(img);
}
