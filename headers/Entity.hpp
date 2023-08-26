#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>

class Entity: public sf::Sprite{
    protected:
        sf::Texture imgU, imgD, imgR, imgL;
        short hp;
        int speed;

    public:
        Entity();
        void update(float dt);
};
