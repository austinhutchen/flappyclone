#pragma once
#include "structs.h"
#include <iostream>
#include <vector>
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

  void buildmap() {
   vector<string> temp;
for(int i=0;i<rows;i++){
temp.push_back("🚏");
}
for(int y=0;y<cols;y++){
 grid.push_back(temp);
}

  }
  void refresh() {
    // sets the map state whenever called. should involve pseudo-random terrain
    // and pipe generation. pipe generation will generate mod columnheight-3
  for(int i=0;i<grid.size();i++){
   for(int y=0;y<grid[i].size();y++){
    cout << grid[i][y];
   }
  }
  cout << endl;
  }

private:
  // blackspace character, e.g.black-colored characters to take up empty space
  char bspace;
  bird *player;
  unsigned int rows;
  int cols;
  string obstacle;
  vector<vector<string> > grid;
};
