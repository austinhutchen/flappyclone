#ifndef map
#define map
#include "structs.h"
#include <iostream>
class layout {
public:
  layout(const int &rows, const int &columns, bird *playerptr, string pipe) {
    this->obstacle = pipe;
    player = playerptr;
    this->rows = rows;
    this->cols = columns;
    bspace = ' ';
    buildmap();
  }

  void refresh() {
    // sets the map state whenever called. should involve pseudo-random terrain
    // and pipe generation. pipe generation will generate mod columnheight-3
    for(int i=0;i<rows;i++){
     for(int y=0;y<cols;y++){
      cout << grid[i][y];
     }
    }
  }
  void buildmap() {
    this->grid=new string[rows];
    for(int i=0;i<rows;i++){
     for(int y=0;y<cols;y++){
    grid[i][y]='s';
     }
    }
  }

private:
  // blackspace character, e.g.black-colored characters to take up empty space
  char bspace;
  bird *player;
  unsigned int rows;
  int cols;
  string obstacle;
  string *grid;
};
#endif