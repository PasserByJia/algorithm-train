//============================================================================
// Name        : PAT1026.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
//123 4577973
int main() {
	int m,n,temp,ans;
	cin>>m>>n;
	ans = n-m;
	temp= ans%100;
	ans /=100;
	if(temp>=50)ans++;
	int h = ans/3600;
	printf("%02d:",h); // prints !!!Hello World!!!
	ans = ans%3600;
	int mm = ans/60;
	ans = ans%60;
	printf("%02d:",mm);
	printf("%02d",ans%60);
	return 0;
}
