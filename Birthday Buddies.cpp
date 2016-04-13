#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){

  srand (time(NULL));
  int n=500;
  int people=3;
  int maxpeople=300;
  int birthdays[366]; for(int i=0; i<366; i++){birthdays[i]=0;}
  int hit=0;
  int hits=0;
  float chance=0;

  for(int i=people; i<maxpeople+1; i++){
    hits=0;
    for(int k=0; k<n; k++){
      hit=0;
      for(int j=0; j<366; j++){birthdays[j]=0;}
      for(int j=0; j<i; j++){birthdays[int((rand() % (365*4 + 1))/4)]++;}
      for(int j=0; j<366; j++){if(birthdays[j]==3){hit=1;}}
      if(hit==1){hits++;}
    }
    chance=float(hits)/n;
    cout << "Chance of 3 shared birthdays among " << i << " people: " << chance << endl;
  }

return 0;
}
