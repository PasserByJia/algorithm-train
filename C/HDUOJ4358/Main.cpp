
#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#define maxn 30005
using namespace std;

int n,m,ans;
bool vis[maxn];
int in[maxn];
vector<int>edge[maxn];

int main()
{
    int i,j,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        memset(in,0,sizeof(in));
        for(i=1;i<=n;i++) edge[i].clear();
        int u,v;
        for(i=1;i<=m;i++)
        {
            scanf("%d%d",&u,&v);
            in[u]++;
            edge[v].push_back(u);
        }
        priority_queue<int> q;
        for(i=1;i<=n;i++)
        {
            if(in[i]==0) q.push(i);
        }
        memset(vis,0,sizeof(vis));
        vector<int>res;
        ans=0;
        while(!q.empty())
        {
            ans++;
            u=q.top();
            res.push_back(u);
            q.pop();
            vis[u]=1;
            for(i=0;i<edge[u].size();i++)
            {
                v=edge[u][i];
                in[v]--;
                if(in[v]==0) q.push(v);
            }
        }
        for(i=res.size()-1;i>=0;i--)
        {
            if(i==res.size()-1) printf("%d",res[i]);
            else printf(" %d",res[i]);
        }
        puts("");
    }
    return 0;
}
