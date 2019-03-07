/*
1000 5
800 2
400 5
300 5
400 3
200 2
*/
#include <bits/stdc++.h>
using namespace std;
int w[30],v[30],dp[100000];
int main() {
	int Nm,m,p,q;
	cin>>Nm>>m;
	memset(dp, 0, sizeof(dp));
	for(int i=1;i<=m;i++){
		cin>>p>>q;
		w[i]=p;
		v[i]=p*q;
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=Nm;j>0;j--)
		{
			if(w[i]<=j)
			{
				dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
			}
		}
	}
	cout <<dp[Nm]<< endl;
	return 0;
}
