//============================================================================
// Name        : LG1101.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int vis[105][105];
int n;
char word[105][105];
char key[] = {'y','i','z','h','o','n','g'};

int dfs(int x,int y,int count)
{
	if(!vis[x][y]||x<=0||x>=n-1||y<=0||y>=n-1) return 0;
	if(count<=6 &&count>0&& word[x][y]!=key[count]) return 0;
	if(count==6 && word[x][y]==key[count]) return 1;
	int flag =0;
	vis[x][y]=1;
	if(count ==0 && word[x][y]==key[count])
	{
		for(int i=-1;i<=1;i++)
		{
			for(int j =-1;i<=1;i++)
			{
				if(i!=0||j!=0)
				{
					if(dfs(x+i,y+j,count++))flag =1;
				}
			}
		}
	}else if(count !=0)
	{
		for(int i=-1;i<=1;i++)
		{
			for(int j =-1;i<=1;i++)
			{
				if(i!=0||j!=0)
				{
					if(dfs(x+i,y+j,count++))flag =1;
				}
			}
		}
	}else
	{
		word[x][y] ='*';
		for(int i=-1;i<=1;i++)
		{
			for(int j =-1;i<=1;i++)
			{
				if(i!=0||j!=0)
				{
					if(dfs(x+i,y+j,0))flag =1;
				}
			}
		}
	}
	if(flag)
	{
		return 1;
	}else
	{
		return 0;
	}
}

int main() {
	cin>>n;
	memset(vis, 0, sizeof(vis));
	for(int i =0 ;i<n;i++)
	{
		cin>>word[i];

	}
}
