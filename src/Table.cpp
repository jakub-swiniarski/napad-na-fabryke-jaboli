#include "../headers/Table.hpp"
#include "../headers/path.hpp"

Table::Table(){
    img.loadFromFile(filepath+"sprites/objects/table.png");
    Table::setTexture(img);
    Table::setScale(4.f,4.f);

    Table::setPosition(500.f,500.f);
}
