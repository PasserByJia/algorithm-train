//============================================================================
// Name        : LGP2689(2).cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <bits/stdc++.h>
using namespace std;
const int MAXN=0x3f3f3f3f;
int ex,ey,t;
int dirs[100][100];
int dfs(int x,int y,int step)
{
	if(x==ex&&y==ey) return 0;
	if(step+1>t) return MAXN;
	return min(dfs(x,y,step+1),dfs(x+dirs[step][0],y+dirs[step][1],step+1)+1);
}
int main() {
	int x, y;
	cin>>x>>y>>ex>>ey>>t;
	memset(dirs,0,sizeof(dirs));
	for(int i=0;i<t;i++)
	{
		char temp ;
		cin>>temp;
		if(temp=='N')dirs[i][0]=1;
		else if(temp=='E')dirs[i][1]=1;
		else if(temp=='S')dirs[i][0]=-1;
		else if(temp=='W')dirs[i][1]=-1;
	}
	int ans = dfs(x,y,0);
	if(ans==0x3f3f3f3f)
       cout<<-1;
	else
	   cout<<ans;
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
