//============================================================================
// Name        : LGP1423.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
	double f =2,d,s=2,step=1;
	cin>>d;
	while(s<d){
		step++;
		f=0.98*f;
		s+=f;
	}
	cout <<step<< endl; // prints !!!Hello World!!!
	return 0;
}
