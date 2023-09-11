#include "../headers/Bed.hpp"
#include "../headers/path.hpp"

Bed::Bed(){
    img.loadFromFile(filepath+"sprites/objects/bed.png");
    Bed::setTexture(img);
    Bed::setScale(4.f,4.f);

    Bed::setPosition(68.f,68.f);
}
