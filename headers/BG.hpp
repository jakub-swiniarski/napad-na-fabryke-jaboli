#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

class BG: public sf::Sprite{
    protected:
        sf::Texture img;

    public:
        BG();
};
