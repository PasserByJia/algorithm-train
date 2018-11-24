//============================================================================
// Name        : LGP2347.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int a[10010],x,num=0,b[10]={0,1,2,3,5,10,20},ans;
bool t[10010];

int main() {
	for(int i=1;i<=6;i++)
	{
	    cin>>x;
	    for(int j=1;j<=x;j++)  a[++num]=b[i];
	}
	t[0]=1;
	    for(int i=1;i<=num;i++)
	        for(int j=1010;j>=0;j--)  if(t[j])  t[j+a[i]]=1;
	    for(int i=1;i<=1010;i++)  if(t[i])  ans++;
	    printf("Total=%d",ans);
	    return 0;
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
