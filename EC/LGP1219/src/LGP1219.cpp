//============================================================================
// Name        : LGP1219.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int n,tot=0,vis[3][40],C[20],m=1;
void dfs(int cur){
	if(cur>n){
		tot++;
		if(m<=3){
			for(int i=1;i<=n;i++){
				cout<<C[i];
				if(i!=n){
					cout<<" ";
				}else{
					cout<<endl;
				}
			}
			m++;
		}
	}
	else for(int i=1;i<=n;i++){
		if(!vis[0][i]&&!vis[1][cur+i]&&!vis[2][cur-i+n]){
			C[cur] =i;
			vis[0][i]=vis[1][cur+i]=vis[2][cur-i+n]=1;
			dfs(cur+1);
			vis[0][i]=vis[1][cur+i]=vis[2][cur-i+n]=0;
		}
	}
}
int main() {
	cin>>n;
	memset(vis,0,sizeof(vis));
	dfs(1);
	cout<<tot;
	return 0;
}
