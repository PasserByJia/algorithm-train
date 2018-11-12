#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int m,n,w[10005],c[10005],f[10005];

int main() {
	cin>>m>>n;
	memset(f, 0, sizeof(f));
	for(int i =1;i<=n;i++)
	{
		cin>>c[i];//scoure
		cin>>w[i];//weight
	}

	for(int i =1;i<=n;i++)
	{
		for(int v=w[i];v<=m;v++)
		{
			f[v] = max(f[v-w[i]]+c[i],f[v]);
		}
	}
	cout<<f[m];
	return 0;
}
