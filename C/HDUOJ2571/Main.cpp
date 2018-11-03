#include <stdio.h>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1005;

int main()
{
    //freopen("in.txt", "r", stdin);
    int C, i, j, k, m, n;
    int dp[25][N], a[25][N];
    scanf("%d", &C);
    while(C --)
    {
        scanf("%d%d", &n, &m);
        memset(dp, 0, sizeof(dp));
        for(i = 1; i <= n; i ++)
            for(j = 1; j <= m; j ++)
                scanf("%d", &a[i][j]);
        for(i = 1; i <= n; i ++)
            dp[i][0] = -105;
        for(i = 1; i <= m; i ++)
            dp[0][i] = -105;
        dp[0][1] = dp[1][0] = 0;
        for(i = 1; i <= n; i ++)
            for(j = 1; j <= m; j ++)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                for(k = 2; k <= m; k ++)
                {
                    if(j % k == 0)
                        dp[i][j] = max(dp[i][j], dp[i][j/k]);
                }
                dp[i][j] += a[i][j];
            }
        printf("%d\n", dp[n][m]);
    }
    return 0;
}
