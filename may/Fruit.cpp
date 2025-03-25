#include "Fruit.hpp"

Fruit::Fruit(const std::string& name) : name(name) {}

std::string Fruit::getName() const { return name; }