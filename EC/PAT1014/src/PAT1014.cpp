//============================================================================
// Name        : PAT1014.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
string weeks[]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
int main() {
	string s1,s2,s3,s4;
	int week,temp;
	int l=0;
	cin>>s1>>s2>>s3>>s4;
	for(int i=0;i<s1.size();i++){
		if('A'<=s1[i]&&s1[i]<='G'&&'A'<=s2[i]&&s2[i]<='G'&&s1[i]==s2[i]){
			week=s1[i]-'A';
		    temp=i;
			break;
		}
	}
	int hour = 0;
	for(int i=temp+1;i<s1.size();i++){
			if((('A'<=s1[i]&&s1[i]<='N'&&'A'<=s2[i]&&s2[i]<='N')||('0'<=s1[i]&&s1[i]<='9'&&'0'<=s2[i]&&s2[i]<='9'))&&s1[i]==s2[i]){
				if('0'<=s1[i]&&s1[i]<='9'){
					hour= s1[i]-'0';
					break;
				}else{
					hour= (s1[i]-'A')+10;
					break;
				}
			}
		}
	int time=0;
	for(int i=0;i<s3.size();i++){
		if((('a'<=s3[i]&&s3[i]<='z'&&'a'<=s4[i]&&s4[i]<='z')||('A'<=s3[i]&&s3[i]<='Z'&&'A'<=s4[i]&&s4[i]<='Z'))&&s3[i]==s4[i]){
			time = i;
			break;
		}
	}
	cout<<weeks[week]<<" ";
	if(hour<10){
		cout<<"0"<<hour<<":";
	}else{
		cout<<hour<<":";
	}
	if(time<10){
		cout<<"0"<<time;
	}else{
		cout<<time;
	}
	return 0;
}
/*
3485djGkxh4hhGA
356455G545s545A5454
s&hgafdkls&hgavfdkl
d&Hyvcvnmd&Hyvvvvnm

 * */
