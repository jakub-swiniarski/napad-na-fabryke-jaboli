#include <SFML/Graphics/Sprite.hpp>

class Entity: public sf::Sprite{
    short hp;

    Entity();
    void update();
};
