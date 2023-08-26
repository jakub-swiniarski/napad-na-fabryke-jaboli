#include "../headers/Player.hpp"
#include <SFML/Window/Keyboard.hpp>

Player::Player()
{
    Player::setPosition(0, 0);
    imgU.loadFromFile("assets/sprites/zywiec/zywiecU.png"); 
    imgD.loadFromFile("assets/sprites/zywiec/zywiecD.png");
    imgR.loadFromFile("assets/sprites/zywiec/zywiecR.png");
    imgL.loadFromFile("assets/sprites/zywiec/zywiecL.png"); 
    Player::setScale(4.f,4.f);
    Player::setTexture(imgD);
}

void Player::update(float dt)
{
    // movement
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        Player::move(0.f, -225 * dt);
        Player::setTexture(imgU);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        Player::move(0.f, 225 * dt);
        Player::setTexture(imgD);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        Player::move(225 * dt, 0.f);
        Player::setTexture(imgR);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        Player::move(-225 * dt, 0.f);
        Player::setTexture(imgL);
    }
}
