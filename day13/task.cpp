#include "./headers/Characteristic.h"
#include "./headers/myMath.h"
#include <cstring>
#include <iostream>
#include <locale.h>
#include <ostream>
#include <stdio.h>

using std::cout, std::cin, std::endl;
void spacer() { cout << "\n---------------------\n"; }
int main() {
  weapon sword("sword", 3, 2);
  spacer();
  sword.get_name();
  sword.get_damage();
  sword.get_weight();
  spacer();
  sword.set_weight(67);
  sword.get_weight();
  spacer();
  sword.set_damage(31);
  sword.get_damage();
  spacer();
  Characteristic arst(3);
  cout << arst.power << endl;
  spacer();
  arst.get_damage(&sword);
  spacer();
  myMath a;
  a.add(3, 2);
  a.mult(23, 234);
  cout << myMath::counter << endl;
  spacer();
  spacer();
  spacer();
}
