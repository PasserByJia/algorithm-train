//============================================================================
// Name        : LGP2639.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int n ,m;
int food[505];
int dp[45000];
int main() {
	cin>>n>>m;
	memset(dp, 0, sizeof(dp));
	for(int i=1;i<=m;i++)
	{
		cin>>food[i];
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=n;j>0;j--)
		{
			if(food[i]<=j)
			{
				dp[j]=max(dp[j],dp[j-food[i]]+food[i]);
			}
		}
	}
	cout << dp[n] << endl; // prints !!!Hello World!!!
	return 0;
}
