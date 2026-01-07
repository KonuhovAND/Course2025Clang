#pragma once
#include "my_class.h"
class one_time_weaopn : public weapon {
private:
  bool flag_is_used;

public:
  void attack();
  void set_flag(bool value);
  int is_used();
};
