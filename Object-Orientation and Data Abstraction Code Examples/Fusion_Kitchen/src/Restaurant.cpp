#include "Restaurant.hpp"
#include <iostream>

Restaurant::Restaurant(string newName, string newAddress) {
  name = newName;
  address = newAddress;
}

void Restaurant::displayInfo() {
  cout << "Name of the restaurant is: " << name << endl; 
  cout << "Address of the restaurant is: " << address << endl;
}

void Restaurant::addMenuItem(MenuItem item) {
  menu.push_back(item);
}

void Restaurant::displayMenu() {
  cout << name << "Menu: " << endl;
  for (const auto& item: menu) {
    item.display();
  }
}


