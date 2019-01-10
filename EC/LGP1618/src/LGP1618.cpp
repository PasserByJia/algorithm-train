//============================================================================
// Name        : LGP1618.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//提交就RE什么鬼?
#include <bits/stdc++.h>
using namespace std;
int num[]={0,1,2,3,4,5,6,7,8,9};
int boole[15];
int temp[25];
int boonum[1005];
void get_subset(int i){
	if(i==4){
		int sum=0;
		for(int j=1;j<=3;j++){
			sum=sum*10+num[temp[j]];
		}
		boonum[sum]=1;
		return;
	}
	for(int j=1;j<=9;j++){
		if(!boole[j]){
			temp[i] = j;
			boole[j]=1;
			get_subset(i+1);
			boole[j]=0;
		}
	}
}
int isUse(int i){
	int a= i%10;
	i/=10;
	int b =i%10;
	int c =i/10;
	if(a&&b&&c&&!boole[a]&&!boole[b]&&!boole[c]){
		boole[a]=1;
		boole[b]=1;
		boole[c]=1;
		return 1;
	}else{
		return 0;
	}
}

int main() {
	memset(boonum,0,sizeof(boonum));
	int a,b,c,flag=0;
	cin>>a>>b>>c;
	get_subset(1);
	for(int i=123;i<1000;i++){
		if(boonum[i]){
			isUse(i);
		}else{
			continue;
		}
		int temp = (i/a)*b;
		int temp2 = (temp/b)*c;
		if(boonum[temp]&&boonum[temp2]&&isUse(temp)&&isUse(temp2)){
			cout<<i<<" "<<temp<<" "<<temp2<<endl;
			flag=1;
		}
		memset(boole,0,sizeof(boole));
	}
	if(!flag){
		cout<<"No!!!"<<endl;
	}
	return 0;
}
