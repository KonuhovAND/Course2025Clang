#define MAX_WEIGHT 10
#include "./headers/weapon.h"
#include <cstring>
#include <iostream>
#include <locale.h>
#include <ostream>
#include <stdio.h>
using std::cout, std::cin, std::endl;
void spacer() { cout << "\n---------------------\n"; }
int main() {
  spacer();
  weapon sword("sword", 1, 2);
  weapon *paxe = new weapon("axe", 1, 5);
  spacer();
  sword.isheavy();
  // paxe->isheavy();
  (*paxe).isheavy();
  spacer();
  int sword_and_axe_weigth = sword.summ_weights(*paxe);
  cout << "total weight of sword and axe is " << sword_and_axe_weigth << endl;
  spacer();
  sword_and_axe_weigth = sword.summ_weights(5);
  cout << "total weight of sword and extended weight is "
       << sword_and_axe_weigth << endl;

  spacer();
  spacer();
  delete paxe;
}
