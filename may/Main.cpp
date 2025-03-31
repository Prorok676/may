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
    Player player2("�������");
    Player player3("��������");

    Bush* bush = new Bush("��������", 1.5);
    bush->setBerryCount(50); 

    Tree* tree = new Tree("��������", 10.0);
    tree->setConiferous(true);



    Berry* berry = new Berry("�����������:()", 0.1);
    Berry* berrry = new Berry("���������:^", 0.1);
    Berry* berrrry = new Berry("��������:)))", 0.2);
    CommonFruit* apple = new CommonFruit("����������;(", 0.3); 
    CommonFruit* mandarinka = new CommonFruit("�������������^-^", 0.4);
    Cone* pineCone = new Cone("������� ������:3", 0.2);
    Cone* mayCone = new Cone("������� ��������$", 0.1);


    player1.getBackpack().addFruit(berry);
    player1.getBackpack().addFruit(apple);
    player1.getBackpack().addFruit(mandarinka);

    player2.getBackpack().addFruit(pineCone);
    player2.getBackpack().addFruit(berrry);


    player3.getBackpack().addFruit(berrrry);
    player3.getBackpack().addFruit(mayCone);

    std::cout << player1.getName() << " ������������: " << std::endl;
    player1.getBackpack().printContents();

    std::cout << std::endl << player2.getName() << " ������������: " << std::endl;
    player2.getBackpack().printContents();
    std::cout << std::endl;
    std::cout << player3.getName() << " ������������: " << std::endl;
    player3.getBackpack().printContents();
    std::cout << std::endl;

    delete bush;
    delete tree;

    delete berry;
    delete berrry;
    delete berrrry;
    delete mandarinka;
    delete apple;
    delete pineCone;
    delete mayCone;

    std::cout << "��� �����,�� � ����� ������� � ��� � ������ ����� �������� ��������� ��������" << std::endl;

    return 0;
}