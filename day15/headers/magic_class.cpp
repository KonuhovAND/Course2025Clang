#include "magic_class.h"
#include <clocale>
#include <iostream>
#include <iterator>
#include <string>
using std::cout, std::cin, std::endl;
magic_weapon::magic_weapon(const char *name, float damage, float weight,
                           TypeOfWeapon type, int extended_damage)
    : weapon(name, damage, weight, type) {
  this->extended_damage = extended_damage;
}
magic_weapon::magic_weapon()
    : magic_weapon("magic weapon", 1, 1, TypeOfWeapon::ONEHANDED, 12) {};
magic_weapon::~magic_weapon() {
  get_name();
  get_type();
  get_damage();
  get_weight();
  get_extended_damage();
}
void magic_weapon::get_extended_damage() {
  cout << "extended_damage is " << extended_damage << endl;
}
float magic_weapon::get_damage() {
  return weapon::get_damage() + extended_damage;
}
