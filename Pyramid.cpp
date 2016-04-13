#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){

  int n=1000;
  int blockcount=35*n*n;
  bool found=0;
  int pyramidblockcount=0;
  int pyramidlayer=1;

  while(!found){
    n++;
    blockcount=35*n*n;
    pyramidblockcount=1;
    pyramidlayer=1;
    while(pyramidblockcount<blockcount){
      pyramidlayer++;
      pyramidblockcount+=pyramidlayer*pyramidlayer;
      if(pyramidblockcount==blockcount){found=1;}
    }
  }
  cout << "Thirty-five " << n << " by " << n << " blocks can be arranged as an Egyptian square pyramid of height " << pyramidlayer;
  return 0;
}
