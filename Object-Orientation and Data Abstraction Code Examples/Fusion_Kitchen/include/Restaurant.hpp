#ifndef RESTAURANT_HPP
#define RESTAURANT_HPP

#include <string>
#include <vector>
#include "MenuItem.hpp"

using namespace std;

class Restaurant {
  private:
    string name;
    string address;
  protected:
    vector<MenuItem> menu;
  public:
    Restaurant(string newName, string newAddress);
    void displayInfo();
    void addMenuItem(MenuItem item);
    void displayMenu();
};

#endif

