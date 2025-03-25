#include "Tree.hpp"

Tree::Tree(const std::string& name, double height, int numFruits, const std::string& fruitType) : Plant(name, 2.0, height), 
numFruits(numFruits), fruitType(fruitType) {}

std::string Tree::getType() const { return "Tree"; }

std::unique_ptr<std::vector<std::string>> Tree::gatherFruits() 

{
    auto fruits = std::make_unique<std::vector<std::string>>();
    for (int i = 0; i < numFruits; ++i) 
    {
        fruits->push_back(fruitType + " " + std::to_string(i + 1) + " c дерева " + this->name);
    }
    return fruits;
}

int Tree::getNumFruits() const { return numFruits; }