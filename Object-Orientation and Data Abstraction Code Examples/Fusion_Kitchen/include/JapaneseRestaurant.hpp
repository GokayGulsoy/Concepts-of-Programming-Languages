#ifndef JAPANESE_RESTAURANT_HPP
#define JAPANESE_RESTAURANT_HPP

#include "Restaurant.hpp"

class JapaneseRestaurant: public Restaurant {
  private:
    bool hasTatami;
  public:
    JapaneseRestaurant(string n, string addr, bool tatamiAvailable): Restaurant(n, addr), hasTatami(tatamiAvailable) {}
    void describeCuisine();


};

#endif
