//============================================================================
// Name        : LGP1554.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
long long a , b;
int res[11];
int main() {
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		int j =i;
		while(j>0)
		{
			int temp = j%10;
			res[temp]++;
			j=j/10;
		}
	}
	for(int i=0;i<10;i++)
	{
		cout<<res[i]<<" ";
	}
	return 0;
}
