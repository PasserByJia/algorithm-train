#include <iostream>
#include <math.h>
using namespace std;
long long count1 =0;
//直接使用子集生成会超时，这里直接有公式 每个元素被选中的可能性都有2的n-1次方。
//sad
//void print_subset(int n ,int *A,int cur,int* B)
//{
//	for(int i=0;i<cur;i++) count+=B[A[i]];
//	int s = cur ? A[cur-1]+1:0;
//	for(int i=s;i<n;i++)
//	{
//		A[cur] = i;
//		print_subset(n,A,cur+1,B);
//	}
//
//}
int main() {
	int n ,m=0;
	while (cin>>n){
		count1 += n;
		m++;
	}
	count1*= pow(2,m-1);
	cout<<count1;
	return 0;
}
