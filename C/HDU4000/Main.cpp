#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int a, n, c[100001];
long long ans, tmp, tmp1;

int lowbit(int x)
{
    return x&(-x);
}

void update(int i)
{
	while(i<=n)
    {
        c[i]+=1;
        i+=lowbit(i);
    }
}
int sum(int i)
{
	int s=0;
	while(i>0)
    {
        s += c[i];
        i-=lowbit(i);
    }
	return s;
}

int main()
{
	int i, T, cnt=1;
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &n);
		ans = 0;
		memset(c,0,sizeof(c));
		for(i=1; i<=n; i++)
		{
			scanf("%d", &a);
			update(a);
			tmp = sum(a-1);
			tmp1 = (n-a)-(i-1-tmp);
			ans -= tmp*tmp1;
			if(tmp1>=2)
				ans += tmp1*(tmp1-1)/2;
		}
		ans %=100000007;
		printf("Case #%d: %I64d\n", cnt++, ans);
	}

	return 0;
}
