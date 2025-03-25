#include "Bush.hpp"

Bush::Bush(const std::string& name, double height) : Plant(name, 0.5, height) {}

std::string Bush::getType() const { return "Bush"; }

std::unique_ptr<std::vector<std::string>> Bush::gatherFruits() : Plant(name);
{
    auto berries = std::make_unique<std::vector<std::string>>();
    berries->push_back("ягодки " + this->name);
    return berries;
}