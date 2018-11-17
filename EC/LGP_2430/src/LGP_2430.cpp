//============================================================================
// Name        : LGP_2430.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int w,l,m,n,wt[5005],problems[5005][2],t,f[5005];
int main() {
	cin>>w>>l>>m>>n;
	for(int i=1;i<=n;i++)
	{
		int temp;
		int multiple = l/w;
		cin>>temp;
		wt[i]=temp*multiple;
	}
	for(int i=1;i<=m;i++)
	{
		int level,re;
		cin>>level>>re;
		problems[i][0] = wt[level];
		problems[i][1] = re;
	}
	cin>>t;
	for(int i =1;i<=m;i++)
		{
			for(int v=t;v>0;v--)
			{
				if(problems[i][0]<=v)
				{
					f[v] = max(f[v-problems[i][0]]+problems[i][1],f[v]);
				}
			}
		}
		cout<<f[t];
		return 0;
}
