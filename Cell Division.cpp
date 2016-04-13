#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){

  srand (time(NULL));
  int n=1000;
  int cell1red=0;
  int cell1green=0;
  int cell2red=0;
  int cell2green=0;
  int redproteins=600;
  int greenproteins=400;
  int samecount=0;

  for(int i=0; i<n; i++){
    cell1red=0;
    cell1green=0;
    cell2red=0;
    cell2green=0;
    for(int j=0; j<redproteins; j++){
      if(rand()%2==1){cell1red++;}
      else{cell2red++;}
    }
    for(int j=0; j<greenproteins; j++){
      if(rand()%2==1){cell1green++;}
      else{cell2green++;}
    }
    if(cell1red>cell1green && cell2red>cell2green){samecount++;}
  }

  cout << samecount;

  return 0;
}
