//============================================================================
// Name        : LGP1059.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int randomnum[105];
int ramnum[1005];
int main() {
	int n,count1=0,max=-1;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(!ramnum[x]){
			count1++;
			ramnum[x]++;
		}
		if(x>max) max=x;
	}
	cout <<count1<< endl;
	for(int i=0;i<1005;i++){
		if(ramnum[i]){
			cout<<i;
			if(i!=max){
				cout<<" ";
			}
		}
	}
	return 0;
}
