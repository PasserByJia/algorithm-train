//============================================================================
// Name        : LGP3717.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include<math.h>
using namespace std;
const int maxn=101;
int vis[maxn][maxn];
int n,m,r;
int dir[][2]={{-1,0},{0,-1},{0,1},{1,0}};
//void dfs(int x,int y,int x1,int y1)
//{
//	if(x1<1||x1>n||y1<1||y1>n) return;
//	if(vis[x1][y1])return;
//	if((x-x1)*(x-x1)+(y-y1)*(y-y1)>r*r) return;
//	vis[x1][y1]=1;
//	for(int i=0;i<4;i++)
//	{
//		dfs(x,y,x1+dir[i][0],y1+dir[i][1]);
//	}
//
//}
int main() {
	cin>>n>>m>>r;
	memset(vis,0,sizeof(vis));
	for(int i=0;i<m;i++)
	{
		int a ,b;
		cin>>a>>b;
		for(register int j=1; j<=n; j++)
		            for(register int k=1; k<=n; k++)
		                if((a-j)*(a-j)+(b-k)*(b-k)<=r*r)
		                    vis[j][k]=true;
	}
	int count=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(vis[i][j]) count++;
		}
	}

	cout<<count<<endl;
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
