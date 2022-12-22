#include <vector>
#include <array>
#include <ctime>
#include <string>
using namespace std;
struct bird {
public:
  bird(string &playermodel) {
    sethp();
    this->playermodel = playermodel;
    srand(time(NULL));
  }
  void sethp() {
    for (int i = 1; i < 11; i++) {
      health.push_back(i);
    }
  }
 string getplayer(){
  return this->playermodel;
 }
private:
  vector<int> health;
  string playermodel;
  // flappy bird stays in the same column while map regens around it
  // this only changes the row
  int height;
};

struct pipe {
public:
// constructor to init private members
  pipe(int &rownum, int &colheight, char &model) {
   // height NEEDS to be greater than or equal to 5
    // init default heights
    // gives pipes their height
    heightgen(colheight);
    this->pipemodel = model;
  }

  void heightgen(int &colheight) { this->height = rand() % (colheight-3); }

private:
  char pipemodel;
  // height should be pseudorandom within range of mod column height
  unsigned int height;
};