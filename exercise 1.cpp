//	Nama	: Naufal Ariful Amri
//	NPM	: 140810180009
//	Kelas	: A
//	Date	: 12 Maret 2019
//	Desc	: ex 1

#include <iostream>
#include <math.h>
using namespace std ;

struct segiempat {
	float panjang ;
	float lebar ;
};

void input (segiempat *s) {
	cout << "input panjang	: " ; cin >> s->panjang ;
	cout << "input lebar	: " ; cin >> s->lebar ;  
}

float keliling (segiempat s) {
	float kll ;
	kll = 2 * (s.panjang + s.lebar) ;
	cout << "keliling = " << kll <<endl ;
}

float luas (segiempat s) {
	float ls ;
	ls = s.lebar * s.panjang ;
	cout << "luas = " << ls << endl ;
}

float diagonal (segiempat s) {
	float dg ;
	dg = sqrt (s.lebar*s.lebar + s.panjang*s.panjang) ;	
	cout << "diagonal = " << dg << endl;
}

void print (segiempat s) {
	keliling (s) ;
	luas(s) ;
	diagonal(s) ;
}


int main () {
	segiempat *s ;
	s = new segiempat ;
	input (s) ;
	print (*s) ;	
}


