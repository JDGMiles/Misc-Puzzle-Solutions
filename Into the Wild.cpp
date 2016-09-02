#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){

  srand (time(NULL));

  int n=10001;
  int pokemon=142;
  int m=pokemon*pokemon;
  bool seen[pokemon];
  int encounters=0;
  int count=0;
  int x=0;

  int adventurelog[m];
  for(int i=0; i<m; i++){adventurelog[i]=0;}

  for(int k=0; k<n; k++){

    count=0;
    encounters=0;
    for(int i=0; i<pokemon; i++){seen[i]=0;}

    while(count<142){
      x=rand()%pokemon;
      if(!seen[x]){seen[x]=1; count++;}
      encounters++;
    }
    adventurelog[encounters]++;
  }

  count=0;

  for(int i=0; i<m; i++){
    count+=adventurelog[i];
    if(count>(n-1)/2){cout << i; i=m;}
  }



  return 0;
}
