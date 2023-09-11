#include "../headers/Wardrobe.hpp"
#include "../headers/path.hpp"

Wardrobe::Wardrobe(){
    img.loadFromFile(filepath+"sprites/objects/wardrobe.png");
    Wardrobe::setTexture(img);
    Wardrobe::setScale(4.f,4.f);

    Wardrobe::setPosition(68+136,68);
}
