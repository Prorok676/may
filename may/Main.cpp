#include<iostream>
#include<Windows.h>
#include <string>
#include <vector>
#include "Plant.hpp"
#include "Bush.hpp"
#include "Tree.hpp"
#include "Fruit.hpp"

int main ()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Bush bush("Клубницка", 1.0);
    Tree tree("Яблонька", 5.0, 5, "Яблочко");
    Tree tree2("Елочка", 10.0, 3, "Шишечка");

    std::vector<std::unique_ptr<Plant>> plants;
    plants.push_back(std::make_unique<Bush>(bush));
    plants.push_back(std::make_unique<Tree>(tree));
    plants.push_back(std::make_unique<Tree>(tree2));


    for (const auto& plant : plants) {
        std::cout << "Тип растения: " << plant->getType() << ", Название: " << plant->getName()
            << ", Размер: " << plant->getSize() << ", Высота: " << plant->getHeight() << "\n\n";

        if (auto fruits = plant->gatherFruits()) 
        {
            std::cout << "Собранные плодики:" << std::endl;
            for (const auto& fruit : *fruits) 
            {
                std::cout << fruit << std::endl;
            }
        }
        else 
        {
            std::cout << "Плодики не собраны:(" << std::endl;
        }

        std::cout << std::endl;
    }


    return 0;
}