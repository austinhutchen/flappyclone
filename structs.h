#include <vector>
using namespace std;
#include <array>
#include <ctime>
#include <string>
struct bird {
public:
  bird(char &playermodel) {
    sethp();
    this->playermodel = playermodel;
    srand(time(NULL));
  }
  void sethp() {
    for (int i = 1; i < 11; i++) {
      health.push_back(i);
    }
  }

private:
  vector<int> health;
  char playermodel;
};

struct pipe {
public:
  pipe(int rownum, int colheight, char model) {
    // init default heights
    // gives pipes their height
    heightgen(colheight);
    this->pipemodel = model;
  }

  void heightgen(int &colheight) { height = rand() % colheight; }

private:
  char pipemodel;
  // height should be pseudorandom within range of mod column height
  unsigned int height;
};