#include <bits/stdc++.h>
using namespace std;
int vis[20][20];
int a,b,N,count1=0;
void dfs(int x,int y)
{
    if(x==b&&y==a){count1++;/*cout<<"===="<<endl*/; return;}
    if(x>b||y>a) return;
    if(vis[x][y]) return;
    //cout<<x<<" "<<y<<endl;
    dfs(x+1,y);
    dfs(x,y+1);
}

int main() {
    cin>>a>>b;
    cin>>N;
    memset(vis,0,sizeof(vis));
    for(int i=0;i<N;i++)
    {
        int k,l;
        cin>>k>>l;
        vis[l][k]=1;
    }
    dfs(1,1);
    cout << count1;
}
