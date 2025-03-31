#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "Backpack.hpp"
#include<string>

class Player 
{
public:
    Player(std::string name);

    std::string getName() const;
    Backpack& getBackpack();

private:
    std::string name;
    Backpack backpack;
};

#endif // !_PLAYER_HPP_
