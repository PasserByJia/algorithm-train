//============================================================================
// Name        : LGP1086.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
struct peanut{
	int x;
	int y;
	int num;
} peanuts[500];

int cmp(peanut a,peanut b){
	return a.num>b.num;
}
int main() {
	int m,n,t,l=0,v=1,coutt=0,step=0;
	cin>>m>>n>>t;
	for(int i =1;i<=m;i++){
		for(int j =1;j<=n;j++){
			int c ;
			cin>>c;
			if(c>0){//将含有含有花生的点保存在结构体体数组中
				peanuts[l].x=j;
				peanuts[l].y=i;
				peanuts[l].num=c;
				l++;
			}
		}
	}
	sort(peanuts,peanuts+l,cmp);//由大到小排序
	step++;step+=peanuts[0].y;//第一步比较特殊先拿出来
    if(step+peanuts[0].y<=t){
		coutt+=peanuts[0].num;
	}else{
		cout<<0<<endl;
		return 0;
	}
	while(v<(m*n)){//只要在本次所迭代的花生处能
		int temp1= abs(peanuts[v].y-peanuts[v-1].y);
		int temp2= abs(peanuts[v].x-peanuts[v-1].x);
		step+=(temp1+temp2+1);
		if(step+peanuts[v].y<=t){
			coutt+=peanuts[v].num;
		}else{
			break;
		}
		v++;
	}
	cout << coutt << endl;
	return 0;
}
