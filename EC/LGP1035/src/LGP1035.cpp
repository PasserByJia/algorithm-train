//============================================================================
// Name        : LGP1035.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
	double k ,n=0,S=0;
	cin>>k;
	while(S<=k){
		n++;
		S+=(1/n);
		cout <<S<<" "<<n<< endl;
	}
	cout <<n<< endl; // prints !!!Hello World!!!
	return 0;
}
