//============================================================================
// Name        : LGP1308.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
char str[1000005][20];
long long testp[1000005];
long long hashFunc(char S[],int len){
	long long id =0;
	for(int i=0;i<len;i++){
		id = id * 26 +(S[i]-96);
	}
	//cout<<id<<endl;
	return id;
}
int main() {
	//转换成小写方便对比
	string a,b;
	getline(cin,a);
	getline(cin,b);
	transform(a.begin(),a.end(),a.begin(),::tolower);
	transform(b.begin(),b.end(),b.begin(),::tolower);
	//cout <<a<<" "<<b<<endl; // prints !!!Hello World!!!
	//按空格切割字符串
	int r=0,c=0;
	for(int i=0;i<b.length();i++){
		if(b[i]!=' '){
			str[r][c++]=b[i];
		}else{
			str[r][c]='\0';
			r++;
			c=0;
		}
	}
	char *ss=(char*)a.data();
	int lenx = strlen(ss);
	long long ssid =  hashFunc(ss,lenx);
	b=" "+b;
	int countt=0;
	int fisrta=0;
	int j=0;
	for(int i =0;i<b.length()&&j<=r;i++){
		if(b[i]==' '){
			int lens= strlen(str[j]);
			if(ssid==hashFunc(str[j],lens)){
				if(countt==0){
					countt++;
					fisrta=i;
				}else{
					countt++;
				}
			}
			j++;
		}
	}
	if(countt)cout<<countt<<" "<<fisrta<<endl;
	else cout<<-1<<endl;
}

