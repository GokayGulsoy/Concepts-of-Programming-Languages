#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include "Character.hpp"
using namespace std;

class Warrior: public Character {
  public:
    Warrior(string nm, int hp, int pw);
    void attack() override;
    void specialAttack();
};

#endif 

