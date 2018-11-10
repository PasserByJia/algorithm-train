//============================================================================
// Name        : LGP2871.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int m,n,w[3500],c[3500],f[12881];

int main() {
	cin>>n>>m;
	memset(f, 0, sizeof(f));
	for(int i =1;i<=n;i++)
	{
		cin>>w[i];
		cin>>c[i];
	}

	for(int i =1;i<=n;i++)
	{
		for(int v=m;v>0;v--)
		{
			if(w[i]<=v)
			{
				f[v] = max(f[v-w[i]]+c[i],f[v]);
			}
		}
	}
	cout<<f[m];
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
