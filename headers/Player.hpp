#include "Entity.hpp"

class Player : public Entity
{
public:
    Player();
    int speed;
    void update(float dt); // should technically be inherited from Entity but c++ moment
};
