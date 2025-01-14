#include "MenuItem.hpp"
#include <iostream>
#include <iomanip>

void MenuItem::display() const {
  cout << name << "-$" << price << setprecision(2) << endl; 
}

