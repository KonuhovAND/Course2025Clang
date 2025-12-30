#include "my_class.h"
#include <cstring>
#include <iostream>
#include <locale.h>
#include <ostream>
#include <stdio.h>
using std::cout, std::cin, std::endl;

class Characteristic {

public:
  int power;
  Characteristic(int power);
  Characteristic();
  void get_damage(weapon *weapon1);
};
