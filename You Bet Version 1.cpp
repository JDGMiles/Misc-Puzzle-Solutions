#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){

  srand (time(NULL));
  bool sequence[20]; for(int i=0; i<20; i++){sequence[i]=0;}
  int count=0;
  int fill=0;
  unsigned long n=10000000;
  int pot=10;
  int fails=0;

  for(int i=0; i<n; i++){
    count=0;
    for(int j=0; j<20; j++){sequence[j]=0;}
    while(count<10){
      fill=rand()%20;
      if(sequence[fill]==0){sequence[fill]=1; count++;}
    }

    pot=10;
    for(int j=0; j<20; j++){
      pot++;
      if(sequence[j]==0){pot-=2;}
      if(pot<6){fails++; j=20;}
    }
  }

  cout << fails << " fails out of " << n << " trials.";


  return 0;
}
