/*10 5
8 2 0
4 5 1
3 5 1
4 3 0
5 2 0*/

#include <bits/stdc++.h>
using namespace std;//
int w[65],v[65],zc[65];
int dp[10000][10000];
int main() {
	int Nm,m,p,q,s;
	cin>>Nm>>m;
	memset(dp, 0, sizeof(dp));
	for(int i=1;i<=m;i++){
		cin>>p>>q>>s;
		w[i]=p;
		v[i]=p*q;
		zc[i] =s;
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=Nm;j>0;j--)
		{
			if(w[i]<=j)
			{
				if(zc[i]==0)dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[j]);
				if(zc[i]!=0&&dp[zc[i]][j-w[i]]!=0) dp[i][j] = max(dp[zc[i]][j],dp[zc[i]][j-w[i]]+v[j]);
				else dp[i][j] =dp[i-1][j];
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=Nm;j--)
		{
			cout << dp[i][j] << " ";
		}
		cout <<  endl;
	}
	cout << dp[m][Nm] << endl; // prints !!!Hello World!!!
	return 0;
}
