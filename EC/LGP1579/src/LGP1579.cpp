//============================================================================
// Name        : LGP1579.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<bits/stdc++.h>
using namespace std;
int a,i,j,k,l,x;
int check(int x)
{
    for (i=2;i<=sqrt(x);i++)
        if (x%i==0)
            return 1;
    return 0;
}
int main()
{
    cin>>a;
    for (j=2;j<=a-4;j++)
        for (k=2;k<=a-4;k++)
        {
            l=a-j-k;
            if (check(j)+check(k)+check(l)!=0)
                continue;
            cout<<j<<' '<<k<<' '<<l;
            return 0;
        }
}
