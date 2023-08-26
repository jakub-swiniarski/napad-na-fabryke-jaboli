#include "../headers/Player.hpp"
#include <SFML/Window/Keyboard.hpp>

Player::Player()
{
    Player::setPosition(0, 0);

    //standing
    imgU.loadFromFile("assets/sprites/zywiec/idle/zywiecU.png");
    imgD.loadFromFile("assets/sprites/zywiec/idle/zywiecD.png");
    imgR.loadFromFile("assets/sprites/zywiec/idle/zywiecR.png");
    imgL.loadFromFile("assets/sprites/zywiec/idle/zywiecL.png");

    //walking

    Player::setScale(4.f, 4.f);
    Player::setTexture(imgD);
    speed = 255;
}

void Player::update(float dt)
{
    clock.restart();
    // movement
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        Player::move(0.f, -speed * dt);
        Player::setTexture(imgU);

        if(clock.getElapsedTime().asSeconds()>=0.3){
            clock.restart();
        }
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        Player::move(0.f, speed * dt);
        Player::setTexture(imgD);

        if(clock.getElapsedTime().asSeconds()>=0.3){
            clock.restart();
        }         
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        Player::move(speed * dt, 0.f);
        Player::setTexture(imgR);

        if(clock.getElapsedTime().asSeconds()>=0.3){
            clock.restart();
        } 
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        Player::move(-speed * dt, 0.f);
        Player::setTexture(imgL);

        if(clock.getElapsedTime().asSeconds()>=0.3){
            clock.restart();
        } 
    }
}
