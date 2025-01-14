#include <iostream>
#include "MexicanRestaurant.hpp"
#include "JapaneseRestaurant.hpp"
#include "MexicanJapaneseFusion.hpp"

using namespace std;

int main() {
  cout << "Testing Restaurant Inheritance Hierarchy:" << endl;
  MexicanRestaurant mexican("La Casa", "123 Spice Lane", 4);
  JapaneseRestaurant japanese("Sakura", "456 Sushi Road", true);
  MexicanJapaneseFusion fusion("Fusion Fiesta", "789 Fusion Ave", 3,true);
  
  // displaying cuisine for each restaurant
  mexican.displayInfo();
  mexican.describeCuisine();
  cout << "\n";

  japanese.displayInfo();
  japanese.describeCuisine();
  cout << "\n";

  fusion.MexicanRestaurant::displayInfo();
  fusion.displaySpecialty();
  cout << "\n";

  // adding menuItems for each restaurant
  MenuItem item1("Tacos", 8.99);
  MenuItem item2("Enchiladas", 12.99);
  mexican.addMenuItem(item1);
  mexican.addMenuItem(item2);

  MenuItem item3("Sushi Roll", 14.99);
  MenuItem item4("Ramen", 11.99);
  japanese.addMenuItem(item3);
  japanese.addMenuItem(item4);

  MenuItem item5("Sushi Tacos", 15.99);
  MenuItem item6("Wasabi Guacamole", 7.99);
  fusion.MexicanRestaurant::addMenuItem(item5);  
  fusion.MexicanRestaurant::addMenuItem(item6);

  // displaying menu for each restaurant
  mexican.displayMenu();
  cout << "\n";
  japanese.displayMenu();
  cout << "\n";
  fusion.MexicanRestaurant::displayMenu();

  return 0;
}

