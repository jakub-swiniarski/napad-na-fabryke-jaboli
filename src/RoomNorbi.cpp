#include "../headers/RoomNorbi.hpp"

RoomNorbi::RoomNorbi(){
    RoomNorbi::setPosition(0.f,0.f);
    img.loadFromFile("assets/sprites/bg/room.png");
    RoomNorbi::setScale(4.f,4.f);
    RoomNorbi::setTexture(img);
}
