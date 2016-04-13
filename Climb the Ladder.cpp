#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){

  srand (time(NULL));
  int rung=1;
  int trials=0;
  int n=50;
  int successes=0;

  while(trials<n){
    rung=1;
    while(rung>0 && rung<1001){
      if(rand()%3==0){rung--;}
      else{rung++;}
      if(rung==0){trials++;}
      if(rung==1001){successes++; trials++;}
    }
  }

  cout << successes << " successes out of " << n << " trials.";

return 0;
}
