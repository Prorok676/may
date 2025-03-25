#ifndef BUSH_HPP
#define BUSH_HPP
#include "Plant.hpp"

class Bush : public Plant 
{
public:
    Bush(const std::string& name, double height);
    std::string getType() const override;
    std::unique_ptr<std::vector<std::string>> gatherFruits() override;
};

#endif // !_BUSH_HPP_