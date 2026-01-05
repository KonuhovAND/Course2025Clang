#include "my_class.h"
class magic_weapon : public weapon {
private:
  int extended_damage;

public:
  void get_extended_damage();
  magic_weapon(const char *name, float damage, float weight, TypeOfWeapon type,
               int extended_damage);
  magic_weapon();
  ~magic_weapon();
};
