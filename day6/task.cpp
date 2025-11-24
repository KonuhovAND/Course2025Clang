#include <iostream>
int main() {
  std::cout << "HI Niggas" << "\n";
  int user_data;
  while (true) {
    std::cout << "Enter positive int number\n";
    std::cin >> user_data;
    if (user_data > 0) {
      std::cout << "U entered " << user_data << " number\n";
      break;
    }
  }
  std::cout << "\n-----------------------\n";
  std::cout << "Summa from 1 to " << user_data << "\n";
  int summa = 0;
  for (int i = 1; i <= user_data; i++) {
    summa += i;
    if (i == user_data) {
      std::cout << user_data << " = " << summa;
      break;
    }
    std::cout << i << " + ";
  }
  std::cout << "\n-----------------------\n";

  int array[] = {1, 2, 3, 3, 3, 3, 3, 3, 33, 1234};
  int length_of_array = sizeof(array) / sizeof(array[0]);
  for (int i = 0; i < length_of_array; i++) {
    std::cout << 1 + i << "th number in array is " << array[i] << "\n";
  }
  std::cout << "\n-----------------------\n";
  for (int i = 0; i < length_of_array; i++) {
    if ((i + 1) % 2 == 0) {
      std::cout << array[i] << " ";
    }
  }
  std::cout << "\n-----------------------\n";
  int summa_odd_pos = 0;
  for (int i = 0; i < length_of_array; i++) {
    if (i % 2 == 0) {
      summa_odd_pos += array[i];
    }
  }
  std::cout << summa_odd_pos;
  return 0;
}
