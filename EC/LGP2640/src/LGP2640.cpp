#include <bits/stdc++.h>
using namespace std;

int prime(int x){
    if(x<5){if(x==2||x==3)return 1;}
    else return 0;
    if(!(x%6==5||x%6==1)) return 0;
    else
    {
    	for(int i=2;i*i<=x;i++)
        if(x%i==0)return 0;
        return 1;
    }
}

int main(){
    int n,k;
    int l=1;
    cin>>n>>k;
    for(int i=2;i<=n-k;i++)
        if(prime(i)&&prime(i+k)){
            cout<<i<<" "<<i+k<<endl;
            l=0;
        }
    if(l)cout<<"empty";
    return 0;
}
