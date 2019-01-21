//============================================================================
// Name        : LGP1068.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
struct student{
	int num;
	int score;
}s[5005];
int cmp(student a,student b){
	if(a.score!=b.score){
		return a.score>b.score;
	}else{
		return a.num<b.num;
	}
}
int main() {
	int m,k,num=0,count1=0,l=0;
	cin>>k>>m;
	for(int j =0;j<k;j++){
		cin>>s[num].num>>s[num].score;
		num++;
	}
	sort(s,s+num,cmp);
	int x =(int)(m*1.5);
	int realscore = s[x-1].score;
	while(s[l].score>=realscore){
		count1++;l++;
	}
	cout<<realscore<<" "<<count1<<endl;
	l=0;
	while(s[l].score>=realscore){
		cout<<s[l].num<<" "<<s[l].score<<endl;l++;
	}
	return 0;
}
