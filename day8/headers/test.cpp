#include "test.h"
#include <iostream>
using namespace std;

namespace MyFunc {
double x;
void test(int a) {
  static int x = 2;
  x *= x;
  cout << (x + a) << endl;
  cout << x << endl;
  x = a + x;
}
} // namespace MyFunc
