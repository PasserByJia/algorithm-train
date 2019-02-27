//============================================================================
// Name        : PAT1025.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	int address;
	int next;
	int order;
} node[100010];
bool cmp(Node a,Node b){
	return a.order<b.order;
}
int main() {
	for(int i=0;i<100010;i++){
		node[i].order =100010;
	}
	int begin ,n,K,address;
	scanf("%d%d%d",&begin,&n,&K);
	for(int i=0;i<n;i++){
		scanf("%d",&address);
		scanf("%d%d",&node[address].data,&node[address].next);
		node[address].address = address;
	}
	int p = begin ,count=0;
	while(p!=-1){
		node[p].order= count++;
		p= node[p].next;
	}
	sort(node,node+100010,cmp);
	n= count;
	for(int i=0;i<n/K;i++){
		for(int j = (i+1)*K-1;j>i*K;j--){
			printf("%05d %d %05d\n",node[j].address,node[j].data,node[j-1].address);
		}
		//
		printf("%05d %d ",node[i*K].address,node[i*K].data);
		if(i<n/K-1){
			printf("%05d\n",node[(i+2)*K-1].address);
		}else{
			if(n%K==0)printf("-1\n");
			else{
				printf("%05d\n",node[(i+1)*K].address);
				for(int i=n/K*K;i<n;i++){
					printf("%05d %d ",node[i].address,node[i].data);
					if(i<n-1){
						printf("%05d\n",node[i+1].address);
					}else{
						printf("-1\n");
					}
				}
			}
		}
	}
	return 0;
}
