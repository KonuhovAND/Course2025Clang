
#pragma once
#include <string>
#define MAX_WEIGHT 10
#include <cstring>
#include <iostream>
#include <locale.h>
#include <ostream>
#include <stdio.h>
using std::cout, std::cin, std::endl;

enum class TypeOfWeapon { ONEHANDED, TWOHANDED, BOW, CROSSBOW };
class weapon {
  friend class magic_weapon;
  friend class one_time_weapon;

private:
  char name[40];
  float damage;
  float weight;
  TypeOfWeapon type;

public:
  weapon(const char *name, float damage, float weight, TypeOfWeapon type);
  weapon();
  ~weapon();
  virtual void attack() = 0;
  bool isheavy();
  int summ_weights(weapon &weapon2);
  int summ_weights(int weight);
  std::string get_name();
  virtual float get_damage();
  void get_weight();
  void get_type();
  void set_damage(int value);
  void set_weight(int value);
  void set_type(TypeOfWeapon type);
  bool operator<(weapon &w);
  bool operator>(weapon &w);
};
