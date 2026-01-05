#include "./headers/magic_class.h"
#include <clocale>
#include <iostream>
#include <iterator>
#include <string>
using std::cout, std::cin, std::endl;

struct Player {
  signed int id;
  char password[10];
  char login[40];
  void printData() {
    cout << "id is " << id << endl;
    cout << "login is " << login << endl;
    cout << "password is " << password << endl;
  }
};

int main() {
  weapon sword("my sword", 12, 3, TypeOfWeapon::ONEHANDED);
  magic_weapon loid("loid", 1, 3, TypeOfWeapon::BOW, 12);
  loid.get_name();
  loid.get_type();
  loid.get_extended_damage();
  sword.get_type();
  sword.set_type(TypeOfWeapon::TWOHANDED);
  sword.get_type();
  Player Nikita = {67676767, "1234", "mylogin"};
  Nikita.printData();
}
