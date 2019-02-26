//============================================================================
// Name        : PAT1011.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,a,b,c;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b>>c;
		if(a+b>c)printf("Case #%d: true\n",i);
		else printf("Case #%d: false\n",i);
	}
	 // prints !!!Hello World!!!
	return 0;
}
