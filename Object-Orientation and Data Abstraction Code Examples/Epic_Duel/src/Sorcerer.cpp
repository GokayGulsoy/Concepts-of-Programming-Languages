#include "Sorcerer.hpp"

Sorcerer::Sorcerer(string nm, int hp, int pw): Character(nm,hp,pw) {}

void Sorcerer::attack() {
  cout << "Casts a spell!" << endl;
}
