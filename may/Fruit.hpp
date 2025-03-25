#ifndef FRUIT_HPP
#define FRUIT_HPP
#include <string>

class Fruit 
{

public:
    Fruit(const std::string& name);
    virtual ~Fruit() = default;
    std::string getName() const;

private:
    std::string name;
};

#endif // !_FRUIT_HPP_
