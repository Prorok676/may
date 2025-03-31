#include "Player.hpp"

Player::Player(const std::string name) : name(name) {}

std::string Player::getName() const { return name; }
Backpack& Player::getBackpack() { return backpack; }
