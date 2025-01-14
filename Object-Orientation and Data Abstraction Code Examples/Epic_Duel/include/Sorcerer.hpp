#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Character.hpp"
class Sorcerer: public Character {
  public:
    Sorcerer(string nm, int hp, int pw);
    void attack() override;
};


#endif 

