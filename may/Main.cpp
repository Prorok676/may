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
    Bush bush("���������", 1.0);
    Tree tree("��������", 5.0, 5, "�������");
    Tree tree2("������", 10.0, 3, "�������");

    std::vector<std::unique_ptr<Plant>> plants;
    plants.push_back(std::make_unique<Bush>(bush));
    plants.push_back(std::make_unique<Tree>(tree));
    plants.push_back(std::make_unique<Tree>(tree2));


    for (const auto& plant : plants) {
        std::cout << "��� ��������: " << plant->getType() << ", ��������: " << plant->getName()
            << ", ������: " << plant->getSize() << ", ������: " << plant->getHeight() << "\n\n";

        if (auto fruits = plant->gatherFruits()) 
        {
            std::cout << "��������� �������:" << std::endl;
            for (const auto& fruit : *fruits) 
            {
                std::cout << fruit << std::endl;
            }
        }
        else 
        {
            std::cout << "������� �� �������:(" << std::endl;
        }

        std::cout << std::endl;
    }


    return 0;
}