#include "TV.hpp"
#include "path.hpp"

TV::TV(){
    img.loadFromFile(filepath+"sprites/objects/tv.png");
    TV::setTexture(img);
    TV::setScale(6.f,6.f);

    TV::setPosition(68+136+128,68);
}
