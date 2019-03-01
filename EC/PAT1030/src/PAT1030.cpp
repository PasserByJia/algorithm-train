//============================================================================
// Name        : PAT1030.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
long long num[100010];
int main() {
	int n;long long p;
	scanf("%d%lld",&n,&p);
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	sort(num,num+n);
	int count =0;
	for(int i=0 ;i<n ;i++){
		 int m = num[i];
		for(int j=i+count ;j<n ;j++){ //ÓÅ»¯
			int M = num[j];
			if(M<=p*m){
				if(j-i+1>count){
					count = j-i+1;
				}
			}
			else{
				break;
			}
		}
	}
	printf("%d",count);
	return 0;
}
