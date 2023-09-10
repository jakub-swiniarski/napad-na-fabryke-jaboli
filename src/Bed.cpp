#include "../headers/Bed.hpp"

Bed::Bed(){
    img.loadFromFile("assets/sprites/objects/bed.png");
    Bed::setTexture(img);
    Bed::setScale(4.f,4.f);

    Bed::setPosition(68.f,68.f);
}
