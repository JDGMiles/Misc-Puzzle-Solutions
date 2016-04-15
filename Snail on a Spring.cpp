#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){

  srand (time(NULL));
  float snail=0;
  int spring=100;

  while(snail<spring){
    snail++;
    spring++;
    snail=snail*spring/(spring-1);
  }

  cout << snail << " " << spring;


return 0;
}
