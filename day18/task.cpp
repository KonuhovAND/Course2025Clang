#include <exception>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <string>
using std::cout, std::cin, std::endl;
using std::string;
void spacer() { cout << "\n" << string(18, '-') << "\n"; }

int main() {

  spacer();
  string user_string;
  cout << "Enter string to modify: ";
  cin >> user_string;
  spacer();
  cout << user_string.substr(1, 3) << endl;
  int x = user_string.find("a");
  if (x >= 0) {
    cout << x << endl;
  } else {
    cout << "Нет символа а" << endl;
  }
  spacer();
}
