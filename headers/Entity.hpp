#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class Entity : public sf::Sprite
{
protected:
    //standing
    sf::Texture imgU, imgD, imgR, imgL;

    //walking
    sf::Texture imgUW[3], imgDW[3], imgRW[3], imgLW[3];

    //clock for animation
    sf::Clock clock;

    short hp;
    short speed;

public:
    Entity();
    void update(float dt);
};
