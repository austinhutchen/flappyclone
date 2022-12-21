#include <vector>
using namespace std;
#include <string>
#include <array>
struct bird{
public:
bird(){
 sethp();

}
void sethp(){
 for(int i=1;i<11;i++){
health.push_back(i);
 }
}

private:
vector <int> health;
char playermodel;




};

struct pipe{
 public:
pipe(){


}
 private:
char pipemodel;
// height should be pseudorandom within range of mod column height
unsigned int height;

};