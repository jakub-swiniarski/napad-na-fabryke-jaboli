#include <SFML/Graphics/Text.hpp>

class FPSCounter: public sf::Text{
    public:
        int fps;
        bool visible; 

        FPSCounter();
};
