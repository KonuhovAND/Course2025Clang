#define Calc_sum(a, b) (a) + (b)
#include "./headers/test.h"
#include <iostream>
#include <ostream>
#include <stdlib.h>
// g++ -std=c++20 task.cpp headers/test.cpp -o main
int main() {
  std::cout << "HI" << std::endl;
  MyFunc::x = 67;
  std::cout << MyFunc::x << std::endl;
  MyFunc::test(2);
  MyFunc::test(2);
  MyFunc::test(2);
  MyFunc::test(2);
  MyFunc::test(2);
  MyFunc::test(2);
  std::cin.get();
}
