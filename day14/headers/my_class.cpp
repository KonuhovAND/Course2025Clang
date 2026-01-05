#define MAX_WEIGHT 10
#include "my_class.h"
#include <cstring>
#include <iostream>
#include <locale.h>
#include <ostream>
#include <stdio.h>
using std::cout, std::cin, std::endl;

weapon::weapon(const char *name, float damage, float weight, TypeOfWeapon type)
    : damage(damage), weight(weight), type(type) {
  strcpy(this->name, name);
}
weapon::weapon() : weapon("weapon", 1, 1, TypeOfWeapon::ONEHANDED) {};
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

void weapon::get_name() { cout << name << endl; }
void weapon::get_damage() { cout << damage << endl; }
void weapon::get_weight() { cout << weight << endl; }
void weapon::get_type() {
  if (type == TypeOfWeapon::ONEHANDED)
    cout << "ONEHANDED" << endl;
  else if (type == TypeOfWeapon::TWOHANDED)
    cout << "TWOHANDED" << endl;
  else if (type == TypeOfWeapon::BOW)
    cout << "BOW" << endl;
  else
    cout << "CROSSBOW" << endl;
}
void weapon::set_damage(int value) { this->damage = value; }
void weapon::set_weight(int value) { this->weight = value; }
void weapon::set_type(TypeOfWeapon type) { this->type = type; }
