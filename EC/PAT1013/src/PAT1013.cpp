//============================================================================
// Name        : PAT1013.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int su[15005];
int main() {
    int i,j,k,n,m;
    su[1]=2;
    k=2;
    for(i=3;i<=110000;i+=2)
    {
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
                break;
        }
        if(j>sqrt(i))
        {
            su[k++]=i;
        }
    }
    //cout<<k;
    cin>>m>>n;
    for(int i=1,j=m;j<=n;j++,i++){
    	if(i%11==0){
    		cout<<endl;
    		i=1;
    	}
    	if(i!=1) cout<<" ";
    	cout<<su[j];
    }
	return 0;
}
