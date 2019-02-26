//============================================================================
// Name        : PAT1008.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int num[105];
int main() {
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	for(int i=0;i<m;i++){
		int temp=num[0];
		for(int j=1;j<n;j++){
			int temp1 = temp;
			temp = num[j];
			num[j]=temp1;
			if(j==n-1){
				num[0] = temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout <<num[i];
		if(i!=n-1)cout<<" ";
	}
	 // prints !!!Hello World!!!
	return 0;
}
