#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){

  srand (time(NULL));

  int n=500;
  int m=100;
  int order[n];
  bool checked[n];
  int x=0;
  bool valid=0;
  int count=0;

  for(int k=0; k<m; k++){

    for(int j=0; j<n; j++){checked[j]=0;}

    for(int i=0; i<n; i++){
      x=rand()%n;
      while(checked[x]){x++; if(x==n){x=0;}}
      checked[x]=1;
      order[i]=x;
    }

    valid=0;
    for(int i=0; i<n-1; i++){
      if(order[i]==order[i+1]+1 || order[i]==order[i+1]-1){valid=1; i=n-1; count++;}
    }

  }

  cout << float(count)/m;

  return 0;
}
