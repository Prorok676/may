#ifndef PLANT_HPP
#define PLANT_HPP
#include <string>
#include <memory>
#include <vector>

class Plant 
{


public:
    Plant(const std::string& name, double size, double height);
    virtual ~Plant() = default;

    std::string getName() const;
    double getSize() const;
    double getHeight() const;
    virtual std::string getType() const;
    virtual std::unique_ptr<std::vector<std::string>> gatherFruits();
private:
    std::string name;
    double size;
    double height;
};

#endif // !_PLANT_HPP_