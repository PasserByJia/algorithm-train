//============================================================================
// Name        : PAT1033.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <bits/stdc++.h>

using namespace std;
int grade[100010];
int main() {
	int n,m,g,max=-1,index=-1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m>>g;
		grade[m]+=g;
	}
	for(int i=1;i<100010;i++){
		if(grade[i]>max){
			max=grade[i];
			index = i;
		}
	}
	cout << index<<" "<<max<< endl; // prints !!!Hello World!!!
	return 0;
}
