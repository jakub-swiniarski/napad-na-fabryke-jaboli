#include <SFML/Graphics/Text.hpp>

class FPSCounter: public sf::Text{
    public:
        short fps;
        bool visible; 

        FPSCounter();
};
