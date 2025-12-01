#include <iostream>
#include <stdlib.h>
#include <string>
void initList(int array1[]) {
  for (int i = 0; i < sizeof(&array1) / sizeof(array1[0]); i++) {
    array1[i] = 0;
  }
}
void printL(const int array[][3], int array1[3], int num_rows, int num_cols) {
  int sum = 0;
  for (int i = 0; i < num_rows; i++) {
    for (int j = 0; j < num_cols; j++) {
      sum += array[i][j];
    }
    std::cout << "summa of elem in array[3][2] is " << sum << "\n";
  }
  for (int j = 0; j < num_cols; ++j) {
    for (int i = 0; i < num_rows; ++i) {
      array1[j] += array[i][j];
    }
  }
}
int zeroor(int x = 1) {
  int sum = 0;
  if (x <= 0)
    return 0;
  else {
    for (int i = 1; i <= x; i++) {
      sum += i;
    }
  }
  return sum;
}
void testtest(int x, int y, int &z, int &w) {
  z = x + y;
  w = x * y;
}
int main() {
  int array[][3] = {{2, 3, 3}, {6, 6, 4}};
  int array1[3];
  initList(array1);
  int num_rows = sizeof(array) / sizeof(array[0]);
  int num_cols = sizeof(array[0]) / sizeof(array[0][0]);
  float a = 20.84;
  float &y = a, &x = a;
  std::cout << a << "\n" << x << "\n" << y << "\n";
  y = 18.23;
  std::cout << a << "\n" << x << "\n" << y << "\n";
  printL(array, array1, num_rows, num_cols);
  for (int i = 0; i < sizeof(array1) / sizeof(array1[0]); i++) {
    std::cout << array1[i] << "\n";
  }

  std::cout << zeroor(5) << "\n";
  int z, w;
  std::cout << z << "\n" << w << "\n";
  testtest(5, 10, z, w);
  std::cout << z << "\n" << w << "\n";

  for (int i = 0; i < 3; i++) {
    int x = 2;
    std::cout << array[1][i] << "+" << x << "\n";
  }
}
