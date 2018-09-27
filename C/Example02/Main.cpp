/**
 * DFS 的简单例题，这个要多看看，来自 算法竞赛经典入门 P162 例题油田
*/

#include <cstdio>
#include <cstring>
const int maxn =100+5;

char pic[maxn][maxn];
int m,n,idx[maxn][maxn];

void dfs(int c, int r,int id)
{
    if(c<0||c>=m||r<0||r>=n) return;
    if(idx[c][r] > 0 || pic[c][r]!='@') return;
    idx[c][r] = id;
    for(int dc = -1;dc<=1;dc++)
    {
        for(int dr = -1;dr<=1;dr++)
        {
            if(dc!=0||dr!=0) dfs(c+dc,r+dr,id);
        }
    }
}

int main()
{
    while(scanf("%d%d",&m,&n) && m && n)
    {
        for(int i=0;i<m;i++){scanf("%s",pic[i]);}
        memset(idx,0,sizeof(idx));
        int cnt = 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(idx[i][j]==0&&pic[i][j]=='@')dfs(i,j,++cnt);
            }
        }
        printf("%d\n",cnt);
    }
}
