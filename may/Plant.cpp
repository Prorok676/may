#include "plant.hpp"

Plant::Plant(std::string name, Size size, double height) : name(name), size(size), height(height) {}

std::string Plant::getName() const { return name; }
Plant::Size Plant::getSize() const { return size; }
double Plant::getHeight() const { return height; }

Bush::Bush(std::string name, double height) : Plant(name, SMALL, height), berryCount(0) {}

std::string Bush::getType() const { return "Bush"; }
int Bush::getBerryCount() const { return berryCount; }
void Bush::setBerryCount(int count) { berryCount = count; }


Tree::Tree(std::string name, double height) : Plant(name, LARGE, height), coniferous(false) {}

std::string Tree::getType() const { return "Tree"; }
bool Tree::isConiferous() const { return coniferous; }
void Tree::setConiferous(bool conif) { coniferous = conif; }

