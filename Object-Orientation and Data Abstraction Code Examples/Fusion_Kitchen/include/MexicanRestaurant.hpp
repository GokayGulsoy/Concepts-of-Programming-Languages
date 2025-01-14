#ifndef MEXICAN_RESTAURANT_HPP
#define MEXICAN_RESTAURANT_HPP

#include "Restaurant.hpp"

class MexicanRestaurant: public Restaurant {
  private:
    int spiceLevel;
  public:
    MexicanRestaurant(string nme, string addr,int spceLevel): Restaurant(nme, addr), spiceLevel(spceLevel) {}
    void describeCuisine();
};

#endif
