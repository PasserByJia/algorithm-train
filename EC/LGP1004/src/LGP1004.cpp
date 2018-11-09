#include <iostream>
#include<cstdio>
#include <cstring>
using namespace std;
int a[10][10];
int dp[25][25][25][25];
int main() {
	int x,y,z, n;
	memset(dp, 0, sizeof(dp));
	cin>>n;
	while(cin>>x>>y>>z)
	{
		if(!x&&!y&&!z)break;
		a[x][y] = z;
	}
//	for(i = 1; i <= n; i ++)
//	{
//			for(j = 1; j <= n; j ++)
//			{
//				cout<<a[i][j];
//			}
//			cout<<endl;
//	}
	//换汤不换药就是变成四维了，长见识了。
	for(int i=1;i<=n;i++){
	            for(int j=1;j<=n;j++){
	                for(int k=1;k<=n;k++){
	                    for(int l=1;l<=n;l++){
	                        dp[i][j][k][l]=max(max(dp[i-1][j][k-1][l],dp[i-1][j][k][l-1]),max(dp[i][j-1][k-1][l],dp[i][j-1][k][l-1]))+a[i][j]+a[k][l];
	                        //重复点减一
	                        if(i==k&&l==j)dp[i][j][k][l]-=a[i][j];
	                    }
	                }
	            }
	        }
	        cout<<dp[n][n][n][n];
	return 0;
}
