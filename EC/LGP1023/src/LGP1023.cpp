//============================================================================
// Name        : LGP1023.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
#define N 10050
int num[N],price[N],temp[N];
int main() {
	/*  预期价格,成本,销量.输入的第一个价格,第一个销量,相关系数  */
	int expect,cost,sales,x,y,fin,k,j,minn,maxn;
	 float umin = -1e9, umax = 1e9;
	cin>>expect>>cost>>sales;
	int i=1,coex;
	price[i] = cost; num[i] = sales;
	cin>>x>>y;
	while(x!=-1 && y!=-1){
		if(x-price[i] == 1){
			i++;
			price[i] = x;
			num[i] = y;
		}
		else{
			coex = -(num[i]-y)/(x-price[i]);//coe为中间每差1元减少的销量
			while(price[i] < x){
				i++;
				price[i] = price[i-1]+1;
				num[i]=num[i-1]+coex;
			}
		}//中间数据有空缺
		cin>>x>>y;
	}//循环读入数据并补充中间空缺的数据
	cin>>fin;
	int tempn = num[i], tempp = price[i];
	    while(tempn-fin > 0){
	        i++;
	        tempp++; price[i] = tempp;
	        tempn -= fin; num[i] = tempn;
	}
//	for(int j=1;j<=i;j++){
//		cout<<price[j]<<" "<<num[j]<<endl;
//	}
	for(j=1; j<=i; j++){
		if(price[j] == expect){
			k = j;
			break;
		}
	}
	if(k == 0){
		printf("NO SOLUTION");
		exit(0);
	}
	for(j = 1; j < k; j++)
		if ((float)((num[k]*(price[k]-price[1])-num[j]*(price[j]-price[1]))/(float)(num[j]-num[k]))<=umax)
		   umax=(float)(num[k]*(price[k]-price[1])-num[j]*(price[j]-price[1]))/(float)(num[j]-num[k]);

	for(j= k+1; j <= i; j++)
		if ((float)((num[j]*(price[j]-price[1])-num[k]*(price[k]-price[1]))/(float)(num[k]-num[j]))>=umin)
		   umin=(float)(num[j]*(price[j]-price[1])-num[k]*(price[k]-price[1]))/(float)(num[k]-num[j]);
	if(umin>umax) printf("NO SOLUTION");//解集为空
	else if(umin > 0){//需要补贴的情况
		if(fabs(umin-(int)(umin))>1e-6) minn=(int)(umin)+1;//float存在误差
		else minn=(int)(umin);
		printf("%d",minn);
	}
	else if(umax < 0){//需要收税的情况
		if(fabs((int)(umax)-umax)>1e-6) maxn=(int)(umax)-1;//float存在误差
		else maxn = (int)(umax);
		printf("%d",maxn);
	}
	else printf("0");//若不需要补贴或收税
	return 0;
}
