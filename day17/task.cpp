#include <exception>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <string>
using std::cout, std::cin, std::endl;
void spacer() { cout << "\n" << "--------" << "\n"; }
enum BirthYearExcCodes { Below1850, BelowZero, AboveCurrentYear };
class BirthYearExceptions : public std::exception {
private:
  BirthYearExcCodes code;

public:
  BirthYearExceptions(BirthYearExcCodes code) : code(code) {};

  const char *what() const throw() override {
    if (code == BirthYearExcCodes::BelowZero)
      return "Below zero";
    else if (code == BirthYearExcCodes::Below1850)
      return "Below 1850";
    else if (code == BirthYearExcCodes::AboveCurrentYear)
      return "above current year";
    return "Unknown error";
  }
};

template <class type> class BirthYear {
private:
  type year;

public:
  BirthYear(type year) {
    if (year < 0)
      throw BirthYearExceptions(BirthYearExcCodes::BelowZero);
    else if (year > 2026)
      throw BirthYearExceptions(BirthYearExcCodes::AboveCurrentYear);
    else if (year > 0 && year < 1850)
      throw BirthYearExceptions(BirthYearExcCodes::Below1850);
    this->year = year;
  }
};

int main() {
  try {
    BirthYear<int> Derek(67);
  } catch (BirthYearExceptions exc) {
    cout << "BirthYearExceptions: " << exc.what();
  }
}
