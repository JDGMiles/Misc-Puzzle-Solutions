#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){

  int n=99*1400;
  bool solved=0;

  while(!solved){
    n+=99;
    if(n/10000==14 && (n%1000)/10==85){solved=1;}
  }

  cout << n;

  return 0;
}
