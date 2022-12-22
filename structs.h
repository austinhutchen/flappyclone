#include <vector>
#include <ctime>
#include <string>
using namespace std;
struct bird {
public:
  bird(string &playermodel) {
    sethp();
    this->playermodel = playermodel;
    srand(time(NULL));
    playerx=0;
    playery=0;
  }
  void sethp() {
    for (int i = 1; i < 11; i++) {
      health.push_back(i);
    }
  }
 string getplayer(){
  return this->playermodel;
 }
 int getx(){
 return playerx;
 }
 int gety(){
  return playery;
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

