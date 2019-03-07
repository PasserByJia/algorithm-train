//============================================================================
// Name        : LGP1164.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int c[105];
int dp[10005][10005];
int main() {
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>c[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(c[i]==j)dp[i][j]=dp[i-1][j]+1;
			if(j>c[i]) dp[i][j]=dp[i-1][j]+dp[i-1][j-c[i]];
			if(j<c[i]) dp[i][j]=dp[i-1][j];
		}

	}
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++){
//			cout << dp[i][j] << " ";
//		}
//		cout <<  endl;
//	}
	cout << dp[n][m] << endl;
	return 0;
}
