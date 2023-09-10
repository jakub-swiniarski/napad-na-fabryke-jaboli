#include "Entity.hpp"
#include <SFML/Audio/SoundBuffer.hpp>
#include <SFML/Audio/Sound.hpp>

class Player : public Entity
{
    private:
        sf::SoundBuffer orzelB[2]; 
        sf::Sound orzel[2];

    public:
        Player();
        void update(float dt); // should technically be inherited from Entity but c++ moment // 🙈
};
