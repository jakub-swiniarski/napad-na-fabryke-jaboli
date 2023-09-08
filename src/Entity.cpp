#include "../headers/Entity.hpp"

Entity::Entity()
{
    Entity::setPosition(0.f, 0.f);
    isIndoors=1;
}

void Entity::update(float dt){
    if(isIndoors){ //room border check, 68 pixels from each side
        //horizontal
        if(Entity::getPosition().x<=68){
            Entity::setPosition(68,Entity::getPosition().y);
        }
        else if(Entity::getPosition().x+Entity::getTexture()->getSize().x*Entity::getScale().x>=1280-68){
            Entity::setPosition(1280-68-Entity::getTexture()->getSize().x*Entity::getScale().x,Entity::getPosition().y);
        }

        //vertical
        if(Entity::getPosition().y<=68){
            Entity::setPosition(Entity::getPosition().x,68);
        }
        else if(Entity::getPosition().y+Entity::getTexture()->getSize().y*Entity::getScale().y>=720-68){
            Entity::setPosition(Entity::getPosition().x,720-68-Entity::getTexture()->getSize().y*Entity::getScale().y);
        }
    }
}
