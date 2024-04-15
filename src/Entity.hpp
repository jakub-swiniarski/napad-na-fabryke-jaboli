#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class Entity : public sf::Sprite
{
protected:
    // standing
    sf::Texture imgU, imgD, imgR, imgL;

    // walking
    sf::Texture imgUW[2], imgDW[2], imgRW[2], imgLW[2];

    // clock for animation
    sf::Clock clock;

    // current frame
    int frame;

    int hp;
    int speed;

    bool isIndoors;

public:
    Entity();
    void update(float dt);
};
