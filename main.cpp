#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/ContextSettings.hpp>

#include <SFML/Graphics/RenderWindow.hpp>

#include <SFML/System/Time.hpp>

#include <string>

#include "headers/fpsCounter.hpp"

int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;

    sf::RenderWindow window(sf::VideoMode(1280, 720), "Napad na Fabryke Jaboli", sf::Style::Default, settings);

    sf::Clock dtClock;
    sf::Time dt;

    //font
    sf::Font freshman;
    if (!freshman.loadFromFile("assets/fonts/Freshman.ttf"))
    {
        window.close();
    }

    // fps counter
    fpsCounter fps;
    fps.setFont(freshman);
    fps.setString("0");
    fps.setCharacterSize(36);
    fps.setFillColor(sf::Color::White);
    fps.setPosition(5,-5);

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
                else if(event.key.code==sf::Keyboard::F1){
                    fps.visible=!fps.visible;
                }
            }
        }

        // player movement
        /*if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
            player.move(0.f,-192*dt.asSeconds());
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
            player.move(0.f,192*dt.asSeconds());
        }*/

        fps.fps=1/dt.asSeconds();
        fps.setString(std::to_string(fps.fps)+" FPS");

        window.clear();

        if(fps.visible){
            window.draw(fps);
        }

        window.display();
    }

    return 0;
}
