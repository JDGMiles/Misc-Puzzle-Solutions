#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
string n = "08022297381500400075040507785212507791084949994017811857608717409843694804566200814931735579142993714067538830034913366552709523046011426924685601325671370236912231167151676389419236542240402866331380244732609903450244753353783684203517125032988128642367102638406759547066183864706726206802621220956394396308409166499421245558056673992697177878968314883489637221362309750076442045351400613397343133957817532822753167159403800462161409535692163905429635314755588824001754243629855786560048357189070544443744602158515417581980816805944769287392138652177704895540045208839735991607975732162626793327986688366887576220720346336746551232639353690442167338253911249472180846293240627636206936417230238834629969826759857404361620733529783190017431497148868116235705540170547183515469169233486143520189196748";
int v[400];
for(int i=0; i<400; i++){v[i] = (10*(n[(2*i)]-48))+(n[((2*i)+1)]-48);}
int highscore = 0;
int highscorepos = 0;

for(int j=0; j<20; j++){
	for(int i=0; i<17; i++){
		int a = v[(20*j)+i]; int b = v[(20*j)+i+1]; int c = v[(20*j)+i+2]; int d = v[(20*j)+i+3];
		if((a*b*c*d) > highscore) {highscore = (a*b*c*d); highscorepos = (20*j)+i;}
			}
		}
cout << "\nTop horizontal score: " << highscore << "\nReads rightwards from cell: " << highscorepos;

highscore = 0;
highscorepos = 0;

for(int j=0; j<20; j++){
	for(int i=0; i<17; i++){
		int a = v[(20*i)+j]; int b = v[(20*i)+j+20]; int c = v[(20*i)+j+40]; int d = v[(20*i)+j+60];
		if((a*b*c*d) > highscore) {highscore = (a*b*c*d); highscorepos = (20*i)+j;}
			}
		}
cout << "\n\nTop vertical score: " << highscore << "\nReads downwards from cell: " << highscorepos;

highscore = 0;
highscorepos = 0;

for(int j=0; j<17; j++){
	for(int i=0; i<17; i++){
		int a = v[(20*i)+j]; int b = v[(20*i)+j+21]; int c = v[(20*i)+j+42]; int d = v[(20*i)+j+63];
		if((a*b*c*d) > highscore) {highscore = (a*b*c*d); highscorepos = (20*i)+j;}
			}
		}
cout << "\n\nTop down-right diagonal score: " << highscore << "\nReads down-right from cell: " << highscorepos;

highscore = 0;
highscorepos = 0;

for(int j=0; j<17; j++){
	for(int i=3; i<20; i++){
		int a = v[(20*i)+j]; int b = v[(20*i)+j-19]; int c = v[(20*i)+j-38]; int d = v[(20*i)+j-57];
		if((a*b*c*d) > highscore) {highscore = (a*b*c*d); highscorepos = (20*i)+j;}
			}
		}
cout << "\n\nTop up-right diagonal score: " << highscore << "\nReads up-right from cell: " << highscorepos;

cin.get();
}

