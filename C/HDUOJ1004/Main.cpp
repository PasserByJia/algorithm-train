#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    int count[1000],color,n,i,j;
    char ball[1000][15],temp[15];
    bool flag;
    while(cin>>n&&n)
    {
        memset(count,0,1000);
        color=0;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            flag=false;
            for(j=0;j<i;j++)
            {
                if(strcmp(ball[j],temp)==0)
                {
                    count[j]++;
                    flag=true;
                }
            }
            if(!flag)
            {
                strcpy(ball[i],temp);
                count[i]++;
                color++;
            }
        }
        int max=0;
        for(i=0,j=0;i<color;i++)
        {
            if(max<count[i])
            {
                max=count[i];
                j=i;
            }
        }
        cout<<ball[j]<<endl;
    }
    return 0;
}
