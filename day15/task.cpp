#include "./headers/magic_class.h"
#include <clocale>
#include <iostream>
#include <iterator>
#include <string>
using std::cout, std::cin;

struct Player {
  signed int id;
  char password[10];
  char login[40];
  void printData() {
    cout << "id is " << id << std::endl;
    cout << "login is " << login << std::endl;
    cout << "password is " << password << std::endl;
  }
};

int main() {
  weapon sword("my sword", 12, 3, TypeOfWeapon::ONEHANDED);
  magic_weapon loid("loid", 1, 3, TypeOfWeapon::BOW, 1);
  loid.get_name();
  loid.get_type();
  loid.get_extended_damage();
  cout << "total damage is " << loid.get_damage() << std::endl;
  sword.get_type();
  sword.set_type(TypeOfWeapon::TWOHANDED);
  sword.get_type();
  Player Nikita = {67676767, "1234", "mylogin"};
  Nikita.printData();
  cout << "\n----------------------------\n";
  cout << (loid > sword) << std::endl;
  cout << "\n----------------------------\n";
}
