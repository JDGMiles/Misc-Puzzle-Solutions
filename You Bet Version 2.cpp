#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){

  srand (time(NULL));
  bool sequence[20]; for(int i=0; i<10; i++){sequence[i]=1;} for(int i=10; i<20; i++){sequence[i]=0;}
  int count=0;
  int fill=0;
  unsigned long n=10000000;
  int pot=10;
  int fails=0;

  for(int i=0; i<20; i++){cout << sequence[i];}


  return 0;
}
