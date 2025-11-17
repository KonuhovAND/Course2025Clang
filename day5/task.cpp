#include <clocale>
#include <iostream>
#include <string>

int main() {
  setlocale(LC_ALL, "");
  float x, y;
  x = y = 1;
  std::cout << "Enter x:\n";
  std::cin >> x;
  std::cout << "Enter y\n";
  std::cin >> y;

  std::cout << "avg x and y =" << 1.0 * (x + y) / 2 << "\n";
  std::string operation;
  std::cout << "Enter operation: +,-,*,/ ";
  std::cin >> operation;

  // !g++ -std=c++20 % -o %< && ./%<
  if (operation == "+")
    std::cout << "x + y = " << x + y << "\n";
  else if (operation == "-")
    std::cout << "x - y = " << x - y << "\n";
  else if (operation == "*")
    std::cout << "x * y = " << x * y << "\n";
  else if (operation == "/")
    std::cout << "x / y = " << x / y << "\n";
  else
    std::cout << "INCORRECT OPERATION";
}
