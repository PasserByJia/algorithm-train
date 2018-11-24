//============================================================================
// Name        : LGP2925.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int C ,H,weight[5005],dp[50005];
int main() {

	scanf("%d%d",&C,&H);
	memset(dp, 0, sizeof(dp));
	for(int i =1;i<=H;i++)
	{
		//cin>>weight[i];
		scanf("%d",&weight[i]);
	}

	for(int i=1;i<=H;i++)
	{
		for(int v=C;v>=weight[i];v--)
		{
			dp[v]= max(dp[v-weight[i]]+weight[i],dp[v]);
			if(dp[v]==C)
			{
				printf("%d",C);
				return 0;
			}
		}
	}
	//cout << dp[C] << endl; // prints !!!Hello World!!!
    printf("%d",dp[C]);
	return 0;
}
