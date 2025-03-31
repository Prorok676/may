#ifndef PLANT_HPP
#define PLANT_HPP
#include <string>
#include <memory>
#include <vector>

class Plant 
{
public:
    enum Size { SMALL, LARGE };

    Plant(std::string name, Size size, double height);
    virtual ~Plant() = default;

    std::string getName() const;
    Size getSize() const;
    double getHeight() const;
    virtual std::string getType() const = 0; 

protected:
    std::string name;
    Size size;
    double height;
};

class Bush : public Plant 
{
public:
    Bush(std::string name, double height);
    std::string getType() const override;
    int getBerryCount() const; 
    void setBerryCount(int count);


private:
    int berryCount; 

};

class Tree : public Plant 
{
public:
    Tree(std::string name, double height);
    std::string getType() const override;
    bool isConiferous() const; 
    void setConiferous(bool coniferous);

private:
    bool coniferous; 
};
#endif // !_PLANT_HPP_