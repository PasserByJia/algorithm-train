#include<iostream>
#include<algorithm>
using namespace std;
int s[105];
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
          break;
        int p=0,b,c,a;
        for(int k=1;k<=n;k*=10)
        {
            c=(n/k)/11;
            b=(n/k)%11;
            if(b+c&&b<10)       //不进位
            {
                a=(n-b*k-11*c*k)/2;
                if(n==2*a+b*k+11*c*k)
                  s[p++]=a+b*k+10*c*k;
            }
            b--;
            if(b+c&&b>=0)     //进位后
            {
                a=(n-b*k-11*c*k)/2;
                if(n==2*a+b*k+11*c*k)
                  s[p++]=a+b*k+10*c*k;
            }
        }
        if(p)
        {
            sort(s,s+p);
            cout<<s[0];
            for(int i=1;i<p;i++)
              if(s[i]!=s[i-1])         //去重
                cout<<" "<<s[i];
            cout<<endl;
        }
        else
          cout<<"No solution."<<endl;
    }
    return 0;
}
