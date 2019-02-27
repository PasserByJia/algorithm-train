//============================================================================
// Name        : PAT1021.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int num[15];
int main() {
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		num[s[i]-'0']++;
	}
	for(int i=0;i<10;i++){
		if(num[i]!=0)cout<<i<<":"<<num[i]<<endl;
	}
	 // prints !!!Hello World!!!
	return 0;
}
