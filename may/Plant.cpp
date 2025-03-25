#include "Plant.hpp"

Plant::Plant(const std::string& name, double size, double height) : name(name), size(size), height(height) {}

std::string Plant::getName() const { return name; }
double Plant::getSize() const { return size; }
double Plant::getHeight() const { return height; }
std::string Plant::getType() const { return "Plant"; }
std::unique_ptr<std::vector<std::string>> Plant::gatherFruits() { return nullptr; }