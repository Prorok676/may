#ifndef TREE_HPP
#define TREE_HPP
#include "Plant.hpp"

class Tree : public Plant 
{

public:
    Tree(const std::string& name, double height, int numFruits, const std::string& fruitType);
    std::string getType() const override;
    std::unique_ptr<std::vector<std::string>> gatherFruits() override;
    int getNumFruits() const;
private:
    int numFruits;
    std::string fruitType;
};

#endif // !_TREE_HPP_