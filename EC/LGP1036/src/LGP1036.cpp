//============================================================================
// Name        : LGP1036.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int num[25];
int boole[25];
int temp[25];
int countt=0;
int n,k;
int isprime(int n){//≈–∂œ «∑Ò÷  ˝
    int s=sqrt(double(n));
    for(int i=2;i<=s;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
void get_subset(int i){
	if(i==k+1){
		int sum=0;
		for(int j=1;j<=k;j++){
			sum+=num[temp[j]];
		}
		if(isprime(sum)){
			countt++;
		}
		return;
	}
	for(int j=1;j<=n;j++){
		if(!boole[j]&&j>temp[i-1]){
			temp[i] = j;
			boole[j]=1;
			get_subset(i+1);
			boole[j]=0;
		}
	}

}

int main() {
	memset(boole,0,sizeof(boole));
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>num[i];
	}
	sort(num,num+n);
	get_subset(1);
	cout <<countt<< endl;
	return 0;
}
