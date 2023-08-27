#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/ContextSettings.hpp>

#include <SFML/Graphics/RenderWindow.hpp>

#include <SFML/System/Time.hpp>

#include <string>

#include "headers/FPSCounter.hpp"
#include "headers/Player.hpp"

int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;

    sf::RenderWindow window(sf::VideoMode(1280, 720), "Napad na Fabryke Jaboli", sf::Style::Default, settings);

    sf::Clock dtClock;
    sf::Time dt;

    // font
    sf::Font freshman;
    if (!freshman.loadFromFile("assets/fonts/Freshman.ttf"))
    {
        window.close();
    }

    // fps counter
    FPSCounter fpsCounter;
    fpsCounter.setFont(freshman);

    Player zywiec /*zdrój*/;

    while (window.isOpen())
    {
        dt = dtClock.restart();

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            // keyboard input - single keypress
            if (event.type == sf::Event::EventType::KeyPressed)
            {
                if (event.key.code == sf::Keyboard::Escape)
                {
                    window.close();
                }
                else if (event.key.code == sf::Keyboard::F1)
                {
                    fpsCounter.visible = !fpsCounter.visible;
                }
            }
        }

        fpsCounter.fps = 1 / dt.asSeconds();
        fpsCounter.setString(std::to_string(fpsCounter.fps) + " FPS");

        zywiec.update(dt.asSeconds());

        window.clear();

        // entities
        window.draw(zywiec);

        // text
        if (fpsCounter.visible)
        {
            window.draw(fpsCounter);
        }

        window.display();
    }

    return 0;
}
