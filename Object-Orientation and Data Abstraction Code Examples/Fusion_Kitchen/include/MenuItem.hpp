#ifndef MENUITEM_HPP
#define MENUITEM_HPP

#include <string>
using namespace std;

class MenuItem {
  private:
    string name;
    double price;
  public:
    MenuItem(string nm, double prc): name(nm), price(prc) {}
    void display() const;
};

#endif
