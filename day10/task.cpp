#include <iostream>
#include <stdio.h>
using std::cin;
using std::cout;
using std::endl;
int test_pointers(int *begining, int *end) {
  int summa = 0;
  cout << "array is ";
  for (int *i = begining; i < end; ++i) {
    cout << *i << " ";
    summa += *i;
  }
  return summa;
}
int summa(int x, int y) { return x + y; }
int dif(int x, int y) { return x - y; }

int (*test(char ch))(int, int) {
  if (ch == '+')
    return summa;
  else if (ch == '-')
    return dif;
  return nullptr;
}

int main() {
  int array[] = {1, 2, 2, 2, 2, 2, 2};
  int *begining = array;
  int *end = array + sizeof(array) / sizeof(array[0]) - 1;

  int summa = test_pointers(begining, end);
  cout << "summa = " << summa << endl;
  int (*mu_test)(int, int) = test('+');
  if (mu_test) {
    cout << "10 + 3 = " << mu_test(10, 3) << endl;
  }
  float *p = new float(67.67f);
  std::cout << "suka nigga dih" << *p << endl;
  delete p;
}
