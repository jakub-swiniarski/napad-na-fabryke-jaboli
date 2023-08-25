#include <SFML/Graphics/Text.hpp>

class fpsCounter: public sf::Text{
    public:
        short fps;
        bool visible; 

        fpsCounter();
        void update(int dtSec);
};
