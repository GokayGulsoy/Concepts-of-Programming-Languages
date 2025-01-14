#ifndef CAT_HPP
#define CAT_HPP

#include "Pet.hpp"
class Cat: public Pet {
  public:
    void makeSound() override;

};

#endif

