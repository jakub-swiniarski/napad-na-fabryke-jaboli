#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/ContextSettings.hpp>

#include <SFML/Graphics/RenderWindow.hpp>

#include <SFML/System/Time.hpp>

#include <SFML/Window/WindowStyle.hpp>
#include <string>

#include "headers/FPSCounter.hpp"
#include "headers/Player.hpp"
#include "headers/RoomNorbi.hpp"

int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;

    sf::RenderWindow window(sf::VideoMode(1280, 720), "Napad na Fabryke Jaboli", sf::Style::Fullscreen, settings);
    window.setFramerateLimit(60);
    bool fullscreen=1;

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

    //world
    RoomNorbi roomNorbi;

    //entities
    Player norbi;

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
                //ESC - CLOSE WINDOW
                if (event.key.code == sf::Keyboard::Escape)
                {
                    window.close();
                }

                //F1 - TOGGLE FPS COUNTER
                else if (event.key.code == sf::Keyboard::F1)
                {
                    fpsCounter.visible = !fpsCounter.visible;
                }

                //F11 - TOGGLE FULLSCREEN
                else if (event.key.code == sf::Keyboard::F11){
                    fullscreen=!fullscreen;
                    if(fullscreen){
                        window.create(sf::VideoMode(1280, 720), "Napad na Fabryke Jaboli", sf::Style::Fullscreen, settings);
                    }
                    else{
                        window.create(sf::VideoMode(1280, 720), "Napad na Fabryke Jaboli", sf::Style::Default, settings);
                    }
                }

                //O - ORZEL
                else if (event.key.code == sf::Keyboard::O){
                    norbi.orzel[0].play();
                }
            }
        }

        fpsCounter.fps = 1 / dt.asSeconds();
        fpsCounter.setString(std::to_string(fpsCounter.fps) + " FPS");

        norbi.update(dt.asSeconds());

        window.clear();

        //world
        window.draw(roomNorbi);

        //entities
        window.draw(norbi);

        // text
        if (fpsCounter.visible)
        {
            window.draw(fpsCounter);
        }

        window.display();
    }

    return 0;
}
