#include "map.hpp"
#include <iostream>

int main() {
  cout << "=========FLAPPY BIRD V.1 ========" << endl;
  int level;
  // the below variable is re-used throughout program for inputs requiring integers
  unsigned int choice;
  int rows=50;
  int cols=36;
  string characters[4] = {"", "🦅", "🦉", "🦆"};
  cout << "CHOOSE YOUR CHARACTER:" << endl;
  for (int i = 1; i < 4; i++) {
    cout << "("<<i << "). " << characters[i];
  }
  cout << endl;
  cin >> choice;
  bird *bptr=nullptr;
  switch (choice) {
  case 1: {
    bird b = bird(characters[1]);
    bptr=&b;
    cout << b.getplayer() << " Chosen.." << endl;
    break;
  }
  case 2: {
    bird b = bird(characters[2]);
     bptr=&b;
    cout << b.getplayer() << " Chosen.." << endl;
    break;
  }
  case 3: {
    bird b = bird(characters[3]);
    bptr=&b;
    cout << b.getplayer() << " Chosen.." << endl;
    break;
  }
  default: {
    cout << "INVALID CHOICE. CHOOSE A CHARACTER from 1-3." << endl;
    return main();
  }
  }
 //pipe init
//player class initialized, now build map and send first output
layout grid(rows,cols,bptr,"🚏");
grid.refresh();

}