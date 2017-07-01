#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){

  float t=0;

  for(int i=0; i<8; i++){
    t=float(240+60*i)/11;
    cout << "H: " << 5*i+t/12 << " M: " << t << " S: " << 60*(t-floor(t)) << "  \n";
  }

  for(int i=8; i<12; i++){
    t=float(-480+60*i)/11;
    cout << "H: " << 5*i+t/12 << " M: " << t << " S: " << 60*(t-floor(t)) << "  \n";
  }

  for(int i=0; i<4; i++){
    t=float(60*i+480)/11;
    cout << "H: " << 5*i+t/12 << " M: " << t << " S: " << 60*(t-floor(t)) << "  \n";
  }

  for(int i=4; i<12; i++){
    t=float(60*i-240)/11;
    cout << "H: " << 5*i+t/12 << " M: " << t << " S: " << 60*(t-floor(t)) << "  \n";
  }




  return 0;
}
