// AC代码，待研究  来自 https://www.jianshu.com/p/7492eaf44660
#include <stdio.h>
#define N 30001

int a[N], dp[N];
int max(int a, int b) {

    return a>b ? a : b;
}

int main()
{
    int n, i;
    a[0] = N;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 1; i <= n; i++) {
            dp[i] = 1;
            scanf("%d", &a[i]);
        }

        for (i = 1; i <= n; i++)
        {
            for (int  j = 1; j <=i; j++)
            {
                if (a[i]>a[j])
                    dp[i]=max(dp[i],dp[j]+1);
            }

        }
        int ans = 0;
        for (i = 1; i <= n; i++)
            ans = max(ans, dp[i]);
        printf("%d\n", ans);
    }


    return 0;
}
