#include <cstring>
#include <iostream>
#include <locale.h>
#include <ostream>
#include <stdio.h>
using std::cout, std::cin, std::endl;
class weapon {
public:
  char name[40];
  float damage;
  float weight;

  weapon(const char *name, float damage, float weight)
      : damage(damage), weight(weight) {
    strcpy(this->name, name);
  }
  weapon() : weapon("weapon", 1, 1) {};
};

void spacer() { cout << "\n---------------------\n"; }
int main() {
  spacer();
  weapon sword("sword", 12, 10);
  cout << sword.name << " " << sword.damage << " " << sword.weight << endl;
  weapon my_weapon;
  spacer();
  cout << my_weapon.name << " " << my_weapon.damage << " " << my_weapon.weight
       << endl;
  spacer();
}
