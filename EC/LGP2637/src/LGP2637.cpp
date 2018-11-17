//============================================================================
// Name        : LGP2637.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <bits/stdc++.h>
using namespace std;
int m,n,a[1010],ans=0,sum=0;
bool cmp(int x,int y)
{
    return x<y;
}

int main() {
     scanf("%d%d",&n,&m);
     for(int i=1;i<=m;i++)
     {
         scanf("%d",&a[i]);
     }
    sort(a+1,a+m+1,cmp);
    for(int i=1;i<=m;i++)
    {
         int now=a[i];
         if(now*(m-i+1)>ans)
         {
              ans=now*(m-i+1);
              sum=now;
         }
    }
    printf("%d %d",sum,ans);
    return 0;
}
