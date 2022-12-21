#ifndef map
#define map
#include "structs.h"
class layout{
public:
layout(){

}
void refresh(){
// sets the map state whenever called. should involve pseudo-random terrain and pipe generation.

}




private:
// blackspace character, e.g.black-colored characters to take up empty space
char bspace;
bird player;
pipe obstacle;
unsigned int rows;
int cols;
};
#endif