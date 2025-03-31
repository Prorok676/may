#ifndef FRUIT_HPP
#define FRUIT_HPP
#include <string>
class Fruit 
{
public:
    Fruit(std::string name, double weight);
    virtual ~Fruit() = default;

    std::string getName() const;
    double getWeight() const;
    virtual std::string getFruitType() const = 0; 

protected:
    std::string name;
    double weight;
};

class Berry : public Fruit 
{
public:
    Berry(std::string name, double weight);
    std::string getFruitType() const override;
};

class CommonFruit : public Fruit 
{ 
public:
    CommonFruit(std::string name, double weight);
    std::string getFruitType() const override;
};


class Cone : public Fruit 
{
public:
    Cone(std::string name, double weight);
    std::string getFruitType() const override;
};

#endif // !_FRUIT_HPP_
