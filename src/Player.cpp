#include "../headers/Player.hpp"
#include <SFML/Window/Keyboard.hpp>
#include <string>

Player::Player()
{
    Player::setPosition(100, 100);
    frame = 0;

    // standing
    imgU.loadFromFile("assets/sprites/norbi/idle/norbiU.png");
    imgD.loadFromFile("assets/sprites/norbi/idle/norbiD.png");
    imgR.loadFromFile("assets/sprites/norbi/idle/norbiR.png");
    imgL.loadFromFile("assets/sprites/norbi/idle/norbiL.png");

    // walking
    for (int i = 1; i <= 2; i++)
    {
        imgUW[i - 1].loadFromFile("assets/sprites/norbi/walk/norbiU" + std::to_string(i) + ".png");
    }
    for (int i = 1; i <= 2; i++)
    {
        imgDW[i - 1].loadFromFile("assets/sprites/norbi/walk/norbiD" + std::to_string(i) + ".png");
    }
    for (int i = 1; i <= 2; i++)
    {
        imgRW[i - 1].loadFromFile("assets/sprites/norbi/walk/norbiR" + std::to_string(i) + ".png");
    }
    for (int i = 1; i <= 2; i++)
    {
        imgLW[i - 1].loadFromFile("assets/sprites/norbi/walk/norbiL" + std::to_string(i) + ".png");
    }

    Player::setScale(3.f, 3.f);
    Player::setTexture(imgD);
    speed = 255;

    clock.restart();
}

// FIX DIAGONAL WALKING ANIMATION
// no.

void Player::update(float dt)
{
    //call of overriden update method
    Entity::update(dt);

    // movement
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        Player::move(0.f, -speed * dt);
        // Player::setTexture(imgU);

        if (clock.getElapsedTime().asSeconds() >= 0.1)
        {
            Player::setTexture(imgUW[frame % 2]);

            frame++;
            clock.restart();
        }
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        Player::move(0.f, speed * dt);
        // Player::setTexture(imgD);

        if (clock.getElapsedTime().asSeconds() >= 0.1)
        {
            Player::setTexture(imgDW[frame % 2]);

            frame++;
            clock.restart();
        }
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        Player::move(speed * dt, 0.f);
        // Player::setTexture(imgR);

        if (clock.getElapsedTime().asSeconds() >= 0.1)
        {
            Player::setTexture(imgRW[frame % 2]);

            frame++;
            clock.restart();
        }
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        Player::move(-speed * dt, 0.f);
        // Player::setTexture(imgL);

        if (clock.getElapsedTime().asSeconds() >= 0.1)
        {
            Player::setTexture(imgLW[frame % 2]);

            frame++;
            clock.restart();
        }
    }

    // reset current frame
    if (frame >= 2)
    {
        frame = 0;
    }
}
