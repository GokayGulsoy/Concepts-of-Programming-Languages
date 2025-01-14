#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>

using namespace std;
class Character {
  protected:
    string name;
    int health;
    int power;
  public:
    Character(string nm, int hp, int pw);
    virtual void attack();
    virtual void displayInfo();
};

#endif 
