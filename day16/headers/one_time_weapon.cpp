#include "one_time_weapon.h"
int one_time_weaopn::is_used() {
  if (flag_is_used == true) {
    cout << "weapon is not used" << endl;
    return 1;
  } else
    cout << "weapon is used" << endl;
  return 0;
}

void one_time_weaopn::set_flag(bool value) { flag_is_used = value; }
void one_time_weaopn::attack() {
  if (is_used()) {
    cout << get_name() << " is ready for blow " << endl;
  } else
    cout << get_name() << "is NOT ready for blow" << endl;
}
