#include <bits/stdc++.h>
using namespace std;
int main() {
    long long count=0,n,t,t_i[200005];
    cin>>n>>t;
    for(long long i =0;i<n;i++)
    {
        cin>>t_i[i];
        if(i==0)
        {
            count+=t;
        }else
        {   long long temp = t_i[i]-t_i[i-1]; 
            if(temp<t)
            {
                count+=temp;
            }else{
                count+=t;
            }
        }
        
    }
    cout << count;
}
