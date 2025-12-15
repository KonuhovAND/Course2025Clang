#include <iostream>
#include <stdio.h>
using std::cin;
using std::cout;
using std::endl;
int main() {
  int i = 4;
  int *pointerI = &i;
  cout << "pointerI = " << pointerI << endl;
  cout << "*pointerI = " << *pointerI << endl;
  *pointerI = 67;

  int array[] = {1, 2, 2, 2, 2, 3, 3};
  int *end = array + sizeof(array) / sizeof(array[0]) - 1;

  for (int *begin = array, i = 1; begin <= end; begin++, i++) {
    cout << *begin << endl;
  }
  int a = 5;
  int *const pA = &a;
  cout << *pA << endl;
  *pA = 67;
  cout << *pA << endl;
  return 0;
}
