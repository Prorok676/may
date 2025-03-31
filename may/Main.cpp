#include<iostream>
#include<Windows.h>
#include <string>
#include <vector>
#include "Plant.hpp"
#include "Fruit.hpp"
#include "Player.hpp"
#include "Backpack.hpp"

int main ()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Player player1("������");
    Player player2("�����");


    Bush* bush = new Bush("��������", 1.5);
    bush->setBerryCount(50); 

    Tree* tree = new Tree("��������", 10.0);
    tree->setConiferous(true);



    Berry* berry = new Berry("���������", 0.5);
    CommonFruit* apple = new CommonFruit("�������", 0.2); 
    Cone* pineCone = new Cone("������� ������", 0.1);


    player1.getBackpack().addFruit(berry);
    player1.getBackpack().addFruit(apple);



    player2.getBackpack().addFruit(pineCone);


    std::cout << player1.getName() << " ��������: " << std::endl;
    player1.getBackpack().printContents();

    std::cout << std::endl << player2.getName() << " ��������: " << std::endl;
    player2.getBackpack().printContents();
    std::cout << std::endl;

    delete bush;
    delete tree;

    delete berry;
    delete apple;
    delete pineCone;

    std::cout << "��� ���, �� ������� � ���:)" << std::endl;

    return 0;
}