//============================================================================
// Name        : PATA1025.cpp
// Author      : PasserJia
// Version     : Ranking
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
struct Student{
	char id[15]; //
	int score;
	int local_number;
	int local_rank;
}stu[100010];
int cmp(Student a,Student b){
	if(a.score!=b.score){
		return a.score>b.score;
	}else{
		return strcmp(a.id,b.id)<0;
	}
}
int main() {
	int n,k,num=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>k;
		for(int j =0;j<k;j++){
			cin>>stu[num].id>>stu[num].score;
			stu[num].local_number=i;
			num++;
		}
		sort(stu+num-k,stu+num,cmp);
		stu[num-k].local_rank =1;
		for(int j=num-k+1;j<num;j++){
			if(stu[j].score==stu[j-1].score){
				stu[j].local_rank=stu[j-1].local_rank;
			}else{
				stu[j].local_rank= j+1-(num-k);
			}
		}
	}
	cout<<num<<endl;
	sort(stu,stu+num,cmp);
	int r = 1;
	for(int i=0;i<num;i++){
		if(i>0&&stu[i].score!=stu[i-1].score){
			r=i+1;
		}
		cout<<stu[i].id<<" ";
		cout<<r<<" "<<stu[i].local_number<<" "<<stu[i].local_rank<<endl;
	}

	return 0;
}
