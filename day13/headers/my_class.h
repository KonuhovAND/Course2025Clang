#define MAX_WEIGHT 10
#include <cstring>
#include <iostream>
#include <locale.h>
#include <ostream>
#include <stdio.h>
using std::cout, std::cin, std::endl;
class weapon {
  friend class Characteristic;

private:
  char name[40];
  float damage;
  float weight;

public:
  weapon(const char *name, float damage, float weight);
  weapon();
  ~weapon();
  bool isheavy();
  int summ_weights(weapon &weapon2);
  int summ_weights(int weight);
  void get_name();
  void get_damage();
  void get_weight();
  void set_damage(int value);
  void set_weight(int value);
};
