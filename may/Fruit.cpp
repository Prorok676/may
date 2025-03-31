#include "Fruit.hpp"

Fruit::Fruit(std::string name, double weight) : name(name), weight(weight) {}

std::string Fruit::getName() const { return name; }
double Fruit::getWeight() const { return weight; }


Berry::Berry(std::string name, double weight) : Fruit(name, weight) {}
std::string Berry::getFruitType() const { return "������"; }

CommonFruit::CommonFruit(std::string name, double weight) : Fruit(name, weight) {} 
std::string CommonFruit::getFruitType() const { return "�������"; }


Cone::Cone(std::string name, double weight) : Fruit(name, weight) {}
std::string Cone::getFruitType() const { return "�������"; }

