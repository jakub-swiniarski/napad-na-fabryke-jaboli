#include <SFML/Graphics/Sprite.hpp>

class Entity: public sf::Sprite{
    private:
        short hp;

    public:
        Entity();
        void update();
};
