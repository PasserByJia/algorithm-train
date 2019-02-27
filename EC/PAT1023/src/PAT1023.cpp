//============================================================================
// Name        : PAT1023.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int num[15];
int main() {
	int flag=1,min;
	for(int i=0;i<10;i++){
		cin>>num[i];
		if(i!=0&&num[i]!=0&&flag){
			min =i;
			flag=0;
		}
	}
	if(num[0]==0){
		for(int i=0;i<10;i++){
			for(int j=0;j<num[i];j++){
				cout<<i;
			}
		}
	}else{
		cout<<min;
		num[min]--;
		for(int i=0;i<10;i++){
			for(int j=0;j<num[i];j++){
				cout<<i;
			}
		}
	}
}
//2 0 0 1 3 0 0 1 0 0
//2 2 0 0 0 3 0 0 1 0
