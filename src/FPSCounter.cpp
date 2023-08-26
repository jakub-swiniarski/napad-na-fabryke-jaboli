#include "../headers/FPSCounter.hpp"
#include <SFML/Graphics/Color.hpp>

FPSCounter::FPSCounter()
{
    fps = 0;
    visible = 0;

    FPSCounter::setString("0");
    FPSCounter::setCharacterSize(24);
    FPSCounter::setFillColor(sf::Color::White);
    FPSCounter::setPosition(5, -5);
}
