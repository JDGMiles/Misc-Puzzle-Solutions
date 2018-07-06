#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){

  int n=100000;
  int successcount=0;
  int dice[3]={0,0,0};

  for(int i=0; i<n; i++){
    dice[0]=rand()%6;
    dice[1]=rand()%6;
    dice[2]=rand()%6;
    if(dice[0]==dice[1] || dice[1]==dice[2] || dice[2]==dice[0]){successcount++;}
//    cout << dice[0] << dice[1] << dice[2] << "\n";
  }

  cout << float(successcount)/n;

  return 0;
}
