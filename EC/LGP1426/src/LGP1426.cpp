//============================================================================
// Name        : LGP1426.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
	double v=7,sum=0;
	double s,x;
	cin>>s>>x;
	while(sum<s-x){
		sum+=v;
		v*=0.98;
	}
	if(v>=(2*x)){
		printf("n");
	}else{
		printf("y");
	}
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
