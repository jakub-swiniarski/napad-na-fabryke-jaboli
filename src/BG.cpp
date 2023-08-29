#include "../headers/BG.hpp"

BG::BG(){
    img.loadFromFile("../assets/sprites/missing.png");
    BG::setTexture(img);
    BG::setScale(5.f,5.f);
}
