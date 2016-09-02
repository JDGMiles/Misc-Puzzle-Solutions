#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){

  int a=6;
  int b=0;
  int highest=pow(4,(a+1))*7;
  int x=0;
  int count=0;

  bool ofform[highest+1];
  for(int i=0; i<highest+1; i++){ofform[i]=0;}

  for(int i=a; i>-1; i--){
    b=0;
    while(pow(4,i)*(8*b+7) < highest+1){
      x=pow(4,i)*(8*b+7);
      ofform[x]=1;
      b++;
      count++;
    }
  }

/*  for(int i=1; i<highest+1; i++){
    if(ofform[i]==1){cout << i << " ";}
  }
*/
  cout << "\nIn the first " << highest << " numbers, there are " << count << " not expressible as the sum of three squares. As a ratio this is " << float(count)/highest;

  return 0;
}
