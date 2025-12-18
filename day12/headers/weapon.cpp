#define MAX_WEIGHT 10
#include <cstring>
#include <iostream>
#include <locale.h>
#include <ostream>
#include <stdio.h>
using std::cout, std::cin, std::endl;
#include "weapon.h"

weapon::weapon(const char *name, float damage, float weight)
    : damage(damage), weight(weight) {
  strcpy(this->name, name);
}
weapon::weapon() : weapon("weapon", 1, 1) {};
weapon::~weapon() {
  cout << "name is " << name << " damage is " << damage << " weight is "
       << weight;
  cout << "\n" << name << " was deleted \n";
}
bool weapon::isheavy() {
  if (weight < MAX_WEIGHT) {
    cout << "\nHero can lift " << name << "!\n";
    return true;
  } else {
    cout << "\nHere cant lift " << name << "(((\n";
    return false;
  }
}

int weapon::summ_weights(weapon &weapon2) { return weight + weapon2.weight; }

int weapon::summ_weights(int weight) { return this->weight + weight; }
