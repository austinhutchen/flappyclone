#include "structs.h"
#include <iostream>

int main() {
  cout << "=========FLAPPY BIRD V.1 ========" << endl;
  int level;
  // the below variable is re-used throughout program for inputs requiring integers
  unsigned int choice;
  string characters[4] = {"", "🦅", "🦉", "🦆"};
  cout << "CHOOSE YOUR CHARACTER:" << endl;
  for (int i = 1; i < 4; i++) {
    cout << "("<<i << "). " << characters[i];
  }
  cout << endl;
  cin >> choice;
  switch (choice) {
  case 1: {
    bird b = bird(characters[1]);
    cout << b.getplayer() << " Chosen.." << endl;
    break;
  }
  case 2: {
    bird b = bird(characters[2]);
    cout << b.getplayer() << " Chosen.." << endl;
    break;
  }
  case 3: {
    bird b = bird(characters[3]);
    cout << b.getplayer() << " Chosen.." << endl;
    break;
  }
  default: {
    cout << "INVALID CHOICE. CHOOSE A CHARACTER from 1-3." << endl;
    return main();
  }
  }
//player class initialized, now build map and send first output





}