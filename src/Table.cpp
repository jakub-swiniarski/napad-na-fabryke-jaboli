#include "Table.hpp"
#include "path.hpp"

Table::Table(){
    img.loadFromFile(filepath+"sprites/objects/table.png");
    Table::setTexture(img);
    Table::setScale(3.f,3.f);

    Table::setPosition(500.f,300.f);
}
