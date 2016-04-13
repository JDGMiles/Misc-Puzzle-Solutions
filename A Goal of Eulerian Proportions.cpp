#include <iostream>
#include <math.h>
#include <string>

using namespace std;

// NOTE: Opened the text file in gedit and used "replace" to make an importable column to OpenOffice, then sorted alphabetically, made one string, replacing line breaks with ":"

int main()
{
float Pn=1000;

while(Pn<10000){Pn+=10000/Pn;}

cout << Pn/365;

return 0;
}
