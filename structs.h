#include <ctime>
#include <string>
#include <vector>
#include <iostream>
using namespace std;
struct bird {
public:
  bird(string &playermodel) {
    sethp();
    this->playermodel = playermodel;
    srand(time(NULL));
    playerx = 0;
    playery = 0;
  }
  void sethp() {
    for (int i = 1; i < 11; i++) {
      health.push_back(i);
    }
  }
  string getplayer() { return this->playermodel; }
  int getx() { return playerx; }
  int gety() { return playery; }
  void mov(char choice) {
    // figure out how to properly code this movement
    switch (choice) {
    case 'w': {
      playerx--;
      break;
    }
    case 'a': {
      playery--;
      break;
    }
    case 's': {
      playerx++;
      break;
    }
    case 'd': {
      playery++;
      break;
    }
    default: std::cout << "Invalid choice.";
    return;
    }
  }

private:
  vector<int> health;
  string playermodel;
  int playerx;
  int playery;
  // flappy bird stays in the same column while map regens around it
  // this only changes the row
  int height;
};
