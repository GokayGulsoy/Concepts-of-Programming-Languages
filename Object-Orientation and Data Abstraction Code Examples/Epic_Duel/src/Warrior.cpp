#include "Warrior.hpp"

Warrior::Warrior(string nm, int hp, int pw): Character(nm,hp,pw) {}

void Warrior::attack() {
  cout << "Swings a mighty sword!" << endl;
}

void Warrior::specialAttack() {
  cout << name << " a devastating double strike!" << endl;
}
