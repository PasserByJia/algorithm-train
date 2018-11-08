//============================================================================
// Name        : LGP1146.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;
const int maxn=101;
bool a[maxn];
int n;
int main()
{

    cin>>n;
    cout<<n<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j!=i){
                if(a[j])a[j]=0;
                else a[j]=1;
            }
            cout<<a[j];
        }
        cout<<endl;
    }
    return 0;
}
