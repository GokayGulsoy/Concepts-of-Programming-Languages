#include "Pet.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "MagicPet.hpp"
#include <iostream>
#include <vector>
#include <memory> // for smart pointers
using namespace std;

int main() {  
  Dog* myDog = new Dog();
  Cat* myCat = new Cat();

  myDog->setName("Buddy");
  myDog->setAge(10);

  myCat->setName("Catlyn");
  myCat->setAge(6);

  vector<Pet*> pets;
  pets.push_back(myDog);
  pets.push_back(myCat);

  for (const auto& pet: pets) {
    pet->makeSound();
  }

  MagicPet* myMagicPet = new MagicPet();
  myMagicPet->setName("magic donny");
  myMagicPet->setAge(10);
  pets.push_back(myMagicPet);

  for (const auto& pet: pets) {
    MagicPet* magicPet = dynamic_cast<MagicPet*>(pet);

    if (magicPet != nullptr) {
      magicPet->doTrick();
    }
  }

  return 0;
}

