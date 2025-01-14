#include "MagicPet.hpp"
#include <iostream>
using namespace std;

void MagicPet::makeSound() {
  cout << getName() << " makes Mystical sound!" << endl;
}

void MagicPet::doTrick() {
  cout << "Performs a magic trick!" << endl;
}
