//============================================================================
// Name        : PAT1006.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,b,s,g;
	cin>>n;
	g = n%10;
	n/=10;
	s= n%10;
	b=n/10;
	for(int i=0;i<b;i++)
		cout<<"B";
	for(int i=0;i<s;i++)
		cout<<"S";
	for(int i=1;i<=g;i++)
		cout<<i;
	cout<<endl;
	return 0;
}
