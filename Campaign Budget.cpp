#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){

  unsigned long n=142000856;
  bool solved=0;

  while(!solved){
    n+=1000;
    if(n%7==6 && n%11==10 && n%13==12){solved=1;}
  }

  cout << n;

  return 0;
}
