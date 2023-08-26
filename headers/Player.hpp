#include "Entity.hpp" 

class Player: public Entity{
    public:
        Player();
        void update(float dt); //should technically be inherited from Entity but c++ moment
};
