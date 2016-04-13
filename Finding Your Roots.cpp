#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
float Pn=1000;

while(Pn<10000){Pn+=10000/Pn;}

cout << Pn/365;

return 0;
}
