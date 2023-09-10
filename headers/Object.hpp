#ifndef OBJECT_H
#define OBJECT_H

#include <SFML/Graphics/RenderStates.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

class Object: public sf::Sprite{
    protected:
        sf::Texture img;

    public:
        void interaction();
};

#endif
