#include<bits/stdc++.h>
using namespace std;
int a[51],b[51],c[51];//gfjgh
int f[501][501];
int main()
{
    int i,j,l,m,n,k;
    cin>>m>>n>>k;//ghghfjgf
    for(i=1;i<=k;i++)
      cin>>a[i]>>b[i]>>c[i];//hjhffghfjh
    for(i=1;i<=n;i++)
      for(j=m;j>=a[i];j--)//fghgfgfjjhjfhjghb
        for(l=n;l>=b[i];l--)
          f[j][l]=max(f[j][l],f[j-a[i]][l-b[i]]+c[i]);
      cout<<f[m][n];
      return 0;
}
