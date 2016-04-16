#include <iostream>
#include <math.h>

using namespace std;

int main(){

  float snail=1;
  int spring=100;

  while(snail<spring){
    spring++;
    snail=snail*spring/(spring-1);
    snail++;
  }

  cout << "When the snail has reached " << snail << "cm the spring is " << spring << "cm long.";


return 0;
}
