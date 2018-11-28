#include<bits/stdc++.h>
int n,maxn=-1,temp,time1=0;
int floots[100000010];
int main() {

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&temp);
        if(!floots[temp]) time1+=5;
        floots[temp] =1;
        if(temp>maxn) maxn =temp;
    }
    time1 += (maxn*10);
    time1 += n;
    printf("%d",time1);
}
