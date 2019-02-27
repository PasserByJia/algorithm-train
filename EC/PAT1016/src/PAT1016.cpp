//============================================================================
// Name        : PAT1016.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
	string a ,b;
	int n ,m,d=0,e=0;
	cin>>a;cin>>n;cin>>b;cin>>m;
	for(int i=0;i<a.length();i++){
		if((a[i]-'0')==n){
			d=d*10+n;
		}
	}
	for(int i=0;i<b.length();i++){
		if((b[i]-'0')==m){
			e=e*10+m;
		}
	}
	cout << d+e << endl; // prints !!!Hello World!!!
	return 0;
}
