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
    Player player1("Харчок");
    Player player2("Сверчок");
    Player player3("Шашлычок");

    Bush* bush = new Bush("Черничка", 1.5);
    bush->setBerryCount(50); 

    Tree* tree = new Tree("Яблонька", 10.0);
    tree->setConiferous(true);



    Berry* berry = new Berry("Клубнииичка:()", 0.1);
    Berry* berrry = new Berry("Малииинка:^", 0.1);
    Berry* berrrry = new Berry("Ежевичка:)))", 0.2);
    CommonFruit* apple = new CommonFruit("Яблочкоооу;(", 0.3); 
    CommonFruit* mandarinka = new CommonFruit("Мандааааринка^-^", 0.4);
    Cone* pineCone = new Cone("Шишечка еловая:3", 0.2);
    Cone* mayCone = new Cone("Шишечка пихтовая$", 0.1);


    player1.getBackpack().addFruit(berry);
    player1.getBackpack().addFruit(apple);
    player1.getBackpack().addFruit(mandarinka);

    player2.getBackpack().addFruit(pineCone);
    player2.getBackpack().addFruit(berrry);


    player3.getBackpack().addFruit(berrrry);
    player3.getBackpack().addFruit(mayCone);

    std::cout << player1.getName() << " рюкзакчокчок: " << std::endl;
    player1.getBackpack().printContents();

    std::cout << std::endl << player2.getName() << " рюкзакчокчок: " << std::endl;
    player2.getBackpack().printContents();
    std::cout << std::endl;
    std::cout << player3.getName() << " рюкзакчокчок: " << std::endl;
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

    std::cout << "Мой дурук,мы с табой схадить в лес и сабрат многа палезных вкуснашек ииииуууу" << std::endl;

    return 0;
}