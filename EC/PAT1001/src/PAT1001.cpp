//============================================================================
// Name        : PAT1001.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,ans=0;
	cin>>n;
	while(n!=1){
		if(n%2==0){
			n/=2;
		}else{
			n = (3*n+1)/2;
		}
		ans++;
	}
	cout << ans << endl; // prints !!!Hello World!!!
	return 0;
}
