//============================================================================
// Name        : LGP1051.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name[101];
    int qimo[101],banji[101];
    char xuesheng[101],xibu[101];
    int lunwen[101];
    int n,ans=0;
    int money;
    int max1=-1;
    string maxstudent;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        money=0;

        cin>>name[i]>>qimo[i]>>banji[i]>>xuesheng[i]>>xibu[i]>>lunwen[i];
        if(qimo[i]>80 && lunwen[i]>=1) money+=8000;
        if(qimo[i]>85 && banji[i]>80) money+=4000;
        if(qimo[i]>90) money+=2000;
        if(qimo[i]>85 && xibu[i]=='Y') money+=1000;
        if(banji[i]>80 && xuesheng[i]=='Y') money+=850;

        ans+=money;

        if(money>max1)
        {
            max1=money;
            maxstudent=name[i];
        }

    }

    cout<<maxstudent<<endl<<max1<<endl<<ans;

    return 0;
}
