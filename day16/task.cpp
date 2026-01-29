#include "./headers/magic_class.h"
#include "./headers/one_time_weapon.h"
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
  magic_weapon loid("loid", 1, 3, TypeOfWeapon::BOW, 1);
  one_time_weaopn t;
  cout << "\n----------------------------\n";
  t.set_flag(true);
  t.attack();
  cout << "\n----------------------------\n";
  loid.get_name();
  loid.get_type();
  loid.get_extended_damage();
  cout << "\n----------------------------\n";
  cout << "total damage is " << loid.get_damage() << endl;
  loid.attack();
  cout << "\n----------------------------\n";
  Player Nikita = {67676767, "1234", "mylogin"};
  Nikita.printData();
  cout << "\n----------------------------\n";
  cout << "\n----------------------------\n";
}
