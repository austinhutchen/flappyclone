#ifndef map
#define map
#include "structs.h"
class layout{
public:

layout(const int &rows, const int &columns, bird *playerptr, string pipe){
this->obstacle=pipe;
player=playerptr;
this->rows=rows;
this->cols=columns;
bspace=' ';
}

void refresh(){
// sets the map state whenever called. should involve pseudo-random terrain and pipe generation.
// pipe generation will generate mod columnheight-3




}




private:
// blackspace character, e.g.black-colored characters to take up empty space
char bspace;
bird *player;
unsigned int rows;
int cols;
string obstacle;

};
#endif