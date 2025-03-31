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
    Player player1("’арчок");
    Player player2("„ушка");


    Bush* bush = new Bush("„ерничка", 1.5);
    bush->setBerryCount(50); 

    Tree* tree = new Tree("яблонька", 10.0);
    tree->setConiferous(true);



    Berry* berry = new Berry(" лубничка", 0.5);
    CommonFruit* apple = new CommonFruit("яблочко", 0.2); 
    Cone* pineCone = new Cone("Ўишечка елова€", 0.1);


    player1.getBackpack().addFruit(berry);
    player1.getBackpack().addFruit(apple);



    player2.getBackpack().addFruit(pineCone);


    std::cout << player1.getName() << " рюкзачок: " << std::endl;
    player1.getBackpack().printContents();

    std::cout << std::endl << player2.getName() << " рюкзачок: " << std::endl;
    player2.getBackpack().printContents();
    std::cout << std::endl;

    delete bush;
    delete tree;

    delete berry;
    delete apple;
    delete pineCone;

    std::cout << "ћ€у м€у, мы сходили в лес:)" << std::endl;

    return 0;
}