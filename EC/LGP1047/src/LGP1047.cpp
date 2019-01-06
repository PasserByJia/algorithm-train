//============================================================================
// Name        : LGP1047.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int Lenth[10010];
int main() {
	int l,m,cunt=0;
	cin>>l>>m;
	for(int i =0;i<m;i++){
		int a,b;
		cin>>a>>b;
		for(int j=a;j<=b;j++){
			if(Lenth[j]==0){
				Lenth[j]=1;
			}
		}
	}
	for(int i=0;i<=l;i++){
		if(Lenth[i]==0)cunt++;
	}
	cout <<cunt<< endl; // prints !!!Hello World!!!
	return 0;
}
