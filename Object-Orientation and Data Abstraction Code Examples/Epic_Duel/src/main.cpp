#include <vector>
#include "Warrior.hpp"
#include "Sorcerer.hpp"

using namespace std;

int main() {
  vector<Character*> characters;
  characters.push_back(new Warrior("Eista", 200, 10));
  characters.push_back(new Warrior("Devon", 150, 8));
  characters.push_back(new Sorcerer("Harriot", 100, 5));
  characters.push_back(new Sorcerer("Lucinda", 80, 15));

  for (const auto& character: characters) {
    character->attack();
    character->displayInfo();
  }

  Character* characterPtr = new Warrior("Ronald",300,15);
  Warrior* warrior = dynamic_cast<Warrior*>(characters.at(0));

  if (warrior != nullptr) {
    warrior->specialAttack();
  }

  for (const auto& character: characters) {
    delete character;
  }

  characters.clear();

  return 0;
}

