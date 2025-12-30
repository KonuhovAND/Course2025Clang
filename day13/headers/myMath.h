#include <cstring>
#include <iostream>
#include <locale.h>
#include <ostream>
#include <stdio.h>
using std::cout, std::cin, std::endl;
class myMath {

public:
  static int counter;

  void add(int value1, int value2);
  void sub(int value1, int value2);
  void mult(int value1, int value2);
  void div(int value1, int value2);
};
