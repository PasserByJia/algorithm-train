//============================================================================
// Name        : LGP1328.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int n;
int na,nb,ans1=0,ans2=0;
int NA[205],NB[205] ;
int score[6][6]={{0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0}};  //¹Ø¼ü°¡
int main()
{
    scanf("%d%d%d",&n,&na,&nb);
    for(int i=1;i<=na;i++)
      scanf("%d",&NA[i]);
    for(int i=1;i<=nb;i++)
      scanf("%d",&NB[i]);
    int j=1,u=1;
    for(int i=1;i<=n;i++)
       {
         ans1+=score[NA[j]][NB[u]];
         ans2+=score[NB[u]][NA[j]];
        if(j==na) j=1;
        else j++;
           if(u==nb) u=1;
           else u++;
       }
    printf("%d %d",ans1,ans2);
}
