#include "MexicanRestaurant.hpp"
#include "JapaneseRestaurant.hpp"

class MexicanJapaneseFusion: public MexicanRestaurant, public JapaneseRestaurant {
  public:
    MexicanJapaneseFusion(string nm, string addr, int spceLevel, bool tatamiAvailable): MexicanRestaurant(nm, addr, spceLevel), JapaneseRestaurant(nm, addr, tatamiAvailable){}
    void describeCuisine();
    void displaySpecialty();
};

