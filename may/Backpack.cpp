#include "Backpack.hpp"
#include <iostream>

void Backpack::addFruit(const Fruit* fruit) 
{
    fruits.push_back(fruit);
}

std::vector<const Fruit*> Backpack::getFruits() const 
{
    return fruits;
}

void Backpack::printContents() const 
{
    for (const Fruit* f : fruits) {
        std::cout << "Имя: " << f->getName() << ", Вес: " << f->getWeight() << ", Тип: " << f->getFruitType() << std::endl;
    }
}