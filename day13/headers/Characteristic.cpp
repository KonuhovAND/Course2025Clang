#include "Characteristic.h"
#include <cstring>
#include <iostream>
#include <locale.h>
#include <ostream>
#include <stdio.h>
using std::cout, std::cin, std::endl;
Characteristic::Characteristic(int power) : power(power) {};
Characteristic::Characteristic() : Characteristic(1) {};
void Characteristic::get_damage(weapon *weapon1) {
  cout << "total power is " << weapon1->damage + power << endl;
  cout << "weapon damage is " << weapon1->damage << endl;
};
