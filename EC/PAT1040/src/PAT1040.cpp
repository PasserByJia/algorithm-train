//============================================================================
// Name        : PAT1040.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int flag = 0;
    int i,cnt = 0;
    int t = 0,a_t = 0,pat = 0;

    char a[100001];
    cin>>a;
    int len = strlen(a);
    for(i = len-1; i >= 0; i--)
    {
        if(a[i] == 'T')
            t++;
        if(a[i] == 'A')
        {
            a_t = (a_t + t) % 1000000007;
        }
        if(a[i] == 'P')
        {
            pat = (pat + a_t) % 1000000007;

        }
    }
    cout<<pat<<endl;
    return 0;
}
