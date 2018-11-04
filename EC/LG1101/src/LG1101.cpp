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
char res[105][105];
char key[] = {'y','i','z','h','o','n','g'};

int dfs(int x,int y,int count)
{

	if(x<1||x>n||y<1||y>n) return 0;
	if(vis[x][y]==0)return 0;
//	cout<< "???"<<endl;
//	cout<< count<<endl;
	if(count<=6 && word[x][y]!=key[count]) return 0;
	if(count ==6&&word[x][y]==key[count])
	{
		res[x][y] = word[x][y];
		return 1;
	}
	vis[x][y] =0;
	int flag =0;
//	int cir =0;
//	cout<<dic<<" "<<cir<<endl;
	for(int i=-1;i<=1;i++)
		for(int j=-1;j<=1;j++)
		{
			if(i!=0||j!=0)
			{
				if(dfs(x+i,y+j,count+1))
				{
					flag=1;
				}

			}
		}
	if(flag)
	{
		res[x][y] = word[x][y];
		return 1;
	}else{
		return 0;
	}
	vis[x][y] = 1;
}

int main() {
	cin>>n;
	char temp[105];
	memset(vis,0, sizeof(vis));
	memset(res, '*', sizeof(res));
	for(int i =1 ;i<=n;i++)
	{
		cin>>temp;
		for(int j =1;j<=n;j++)
		{
			word[i][j] = temp[j-1];
			//cout<<temp[j-1];
			if(temp[j-1]=='y'||temp[j-1]=='i'||temp[j-1]=='z'||temp[j-1]=='h'||temp[j-1]=='o'||temp[j-1]=='n'||temp[j-1]=='g')
			{
				vis[i][j] =1;
			}
			//cout<<vis[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j =1;j<=n;j++)
		{
			if(word[i][j]=='y')
			{
				//cout<<word[i][j];
				dfs(i,j,0);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j =1;j<=n;j++)
		{
			cout<<res[i][j];
			//cout<<vis[i][j];
		}
		cout<<endl;
	}
}
