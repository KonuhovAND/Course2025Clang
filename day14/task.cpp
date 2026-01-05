#include <clocale>
#include <iostream>
#include <string>

enum class Directions {
  North,
  East,
  West,
  South,
};

void test(Directions d) {
  if (d == Directions::North) {
    std::cout << "north";
  }
}
int main() {
  test(Directions::North);
  test(Directions::East);
}
