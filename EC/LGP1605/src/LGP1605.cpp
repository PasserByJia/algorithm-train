//============================================================================
// Name        : LGP1605.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int vis[10][10],n,m,t,ex,ey,sum;

void dfs(int x ,int y){
	if(x<1||x>m||y<1||y>n)return;
	if(vis[x][y])return;
	if(x==ex&&y==ey){
		sum++;
		return;
	}
	vis[x][y]=1;
	dfs(x+1,y);
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x,y-1);
	vis[x][y]=0;
}
int main() {
	memset(vis,0,sizeof(vis));
	cin>>n>>m>>t;
	int sx,sy;
	cin>>sx>>sy>>ex>>ey;
	for(int i=0;i<t;i++){
		int x,y;
		cin>>x>>y;
		vis[x][y]=1;
	}
	dfs(sx,sy);
	cout <<sum<< endl; // prints !!!Hello World!!!
	return 0;
}
