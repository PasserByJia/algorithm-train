//============================================================================
// Name        : LGP1420.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int maxn=0 ,num[10002];
int main() {
	int n,count=1;
	cin>>n;
	memset(num,-1,sizeof(num));
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
		if(num[i]-1==num[i-1])
		{
			count++;
		}else{
			count=1;
		}
		if(count>maxn)maxn=count;
	}
	cout << maxn<< endl; // prints !!!Hello World!!!
	return 0;
}
