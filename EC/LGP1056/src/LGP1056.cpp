//============================================================================
// Name        : LGP1056.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
struct st
{
    int v,l,r;
}a[1005],b[1005];
inline bool cmp1(const st x,const st y)
{
    return x.v>y.v;
}
inline bool cmp2(const st x,const st y)
{
    return x.l<y.l;
}
int main()
{
    int m,n,k,l,d;
    cin>>m>>n>>k>>l>>d;
    memset(a,0,sizeof(st)*n);
    memset(b,0,sizeof(st)*n);
    for(int i=1;i<m;i++)
        a[i].l=i,a[i].r=i+1;
    for(int i=1;i<n;i++)
        b[i].l=i,b[i].r=i+1;

    for(int i=0,x,y,p,q;i<d;i++)
    {
        scanf("%d %d %d %d",&x,&y,&p,&q);
        if(x!=p)
            a[min(x,p)].v++;
        else
            b[min(y,q)].v++;
    }
    sort(a,a+m,cmp1);
    sort(a,a+k,cmp2);
    sort(b,b+n,cmp1);
    sort(b,b+l,cmp2);
    for(int i=0;i<k;i++)
        printf("%d ",a[i].l);
    putchar('\n');
    for(int i=0;i<l;i++)
        printf("%d ",b[i].l);
    return 0;
}
