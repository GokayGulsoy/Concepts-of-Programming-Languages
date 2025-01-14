#include "Character.hpp"

Character::Character(string nm, int hp, int pw) {
  name = nm;
  health = hp;
  power = pw;
}

void Character::attack() {
  cout << "Basic Low Attack" << endl;
}

void Character::displayInfo() {
  cout << "Name: " << name << ", Health: " << health << ", Power: " << power << endl;
}

