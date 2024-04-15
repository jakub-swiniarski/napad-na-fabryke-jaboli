#include "Entity.hpp"
#include <SFML/Audio/SoundBuffer.hpp>
#include <SFML/Audio/Sound.hpp>

class Player : public Entity
{
    private:
        sf::SoundBuffer orzelB[2]; 
        
    public:
        sf::Sound orzel[2];
        Player();
        void update(float dt); // should technically be inherited from Entity but c++ moment // 🙈
};
