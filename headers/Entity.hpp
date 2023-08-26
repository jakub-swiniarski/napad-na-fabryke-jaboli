#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>

class Entity : public sf::Sprite
{
protected:
    //standing
    sf::Texture imgU, imgD, imgR, imgL;

    //walking
    sf::Texture imgUW[5], imgDW[5], imgRW[5], imgLW[5];

    short hp;
    short speed;

public:
    Entity();
    void update(float dt);
};
