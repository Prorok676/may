#ifndef BACKPACK_HPP
#define BACKPACK_HPP
#include<vector>
#include "Fruit.hpp"
#include <vector>
#include<string>

class Backpack 
{
public:

    void addFruit(const Fruit* fruit);
    std::vector<const Fruit*> getFruits() const;

    void printContents() const;


private:
    std::vector<const Fruit*> fruits;
};

#endif // !_BACKPACK_HPP_

