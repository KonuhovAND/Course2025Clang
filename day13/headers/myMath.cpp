#include "myMath.h"
#include <cstring>
#include <iostream>
#include <locale.h>
#include <ostream>
#include <stdio.h>
using std::cout, std::cin, std::endl;
int myMath::counter = 0;
void myMath::add(int value1, int value2) {
  cout << value1 << " + " << value2 << " = " << value1 + value2 << endl;
  counter++;
}
void myMath::sub(int value1, int value2) {
  cout << value1 << " - " << value2 << " = " << value1 - value2 << endl;
  counter++;
}
void myMath::mult(int value1, int value2) {
  cout << value1 << " * " << value2 << " = " << value1 * value2 << endl;
  counter++;
}
void myMath::div(int value1, int value2) {
  cout << value1 << " / " << value2 << " = " << value1 / value2 << endl;
  counter++;
}
