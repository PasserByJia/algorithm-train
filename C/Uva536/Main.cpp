/*0.009s*/

#include<cstdio>
#include<cstring>

void solve(char *pre, char *in, int n, char *post)
{
	if (n <= 0) return;
	char *p = strchr(in, pre[0]); /// 用前序遍历的第一个元素来划分中序遍历以确定左右子树
	solve(pre + 1, in, p - in, post); /// 左子树
	solve(pre + (p - in) + 1, p + 1, in + n - 1 - p, post + (p - in)); /// 右子树
	post[n - 1] = pre[0];/// 根
}

int main()
{
	char pre[30], in[30], post[30];
	int len;
	while (~scanf("%s%s", pre, in))
	{
		len = strlen(pre);
		solve(pre, in, len, post);
		post[len] = 0;
		puts(post);
	}
	return 0;
}
