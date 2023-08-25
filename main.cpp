#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/ContextSettings.hpp>

#include <SFML/Graphics/RenderWindow.hpp>

#include <SFML/System/Time.hpp>

int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;

    sf::RenderWindow window(sf::VideoMode(1280, 720), "Pong", sf::Style::Default, settings);

    sf::Clock dtClock;
    sf::Time dt;

    // fps counter - turn this into a class
    /*sf::Text fpsCounter;
    fpsCounter.setFont(digital);
    fpsCounter.setString("0");
    fpsCounter.setCharacterSize(36);
    fpsCounter.setFillColor(sf::Color::White);
    fpsCounter.setPosition(5,-5);
    short fps=0;
    bool fpsVisible = 0;*/

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
                /*else if(event.key.code==sf::Keyboard::F1){
                    fpsVisible=!fpsVisible;
                }*/
            }
        }

        // player movement
        /*if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
            player.move(0.f,-192*dt.asSeconds());
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
            player.move(0.f,192*dt.asSeconds());
        }*/

        /*fps=1/dt.asSeconds();
        fpsCounter.setString(std::to_string(fps)+" FPS");*/

        window.clear();

        /*if(fpsVisible){
            window.draw(fpsCounter);
        }*/

        window.display();
    }

    return 0;
}
