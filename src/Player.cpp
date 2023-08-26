#include "../headers/Player.hpp"
#include <SFML/Window/Keyboard.hpp>

Player::Player()
{
    Player::setPosition(0, 0);
    img.loadFromFile("assets/sprites/orzel.png");
    Player::setScale(4.f, 4.f);
    Player::setTexture(img);
}

void Player::update(float dt)
{
    // movement
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        Player::move(0.f, -192 * dt);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        Player::move(0.f, 192 * dt);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        Player::move(192 * dt, 0.f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        Player::move(-192 * dt, 0.f);
    }
}
