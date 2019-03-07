//============================================================================
// Name        : LGP1049.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int w[105];
int dp[10005];
int main() {
	int m,n;
	cin>>m>>n;
	memset(dp, 0, sizeof(dp));
	for(int i=1;i<=n;i++){cin>>w[i];}
	for( int i=1;i<=n;i++){
	        for( int j=m;j>=w[i];j--){
	            if(dp[j]<dp[j-w[i]]+w[i]){
	            	dp[j]=dp[j-w[i]]+w[i];
	            }
	        }
	    }
	cout <<m-dp[m]<< endl;
	return 0;
}
