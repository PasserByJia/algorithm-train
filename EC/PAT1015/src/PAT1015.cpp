//============================================================================
// Name        : PAT1015.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<bits/stdc++.h>
using namespace std;
struct student{
	int no;
	int d;///
	int c;
	int z;
};
int cmp(student a,student b){
	if(a.z!=b.z) return a.z>b.z;
	else {
		if(a.d!=b.d) return a.d>b.d;
		else{
			if(a.c!=b.c)return a.c>b.c;
			else  return a.no<b.no;
		}
	}
}
int main() {
	vector<student> v1,v2,v3,v4;//表示四类考生
	int n,l,h,coun=0;
	scanf("%d %d %d",&n,&l,&h);
	student su;
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&su.no,&su.d,&su.c);
		su.z =su.d+su.c;
		if(su.d>=l&&su.c>=l){
			coun++;
			if(su.d>=h&&su.c>=h){
				v1.push_back(su);
			}else{
				if(su.d>=h){
					v2.push_back(su);
				}else if(su.d>=su.c){
					v3.push_back(su);
				}else{
					v4.push_back(su);
				}
			}
		}
	}
	sort(v1.begin(),v1.end(),cmp);
	sort(v2.begin(),v2.end(),cmp);
	sort(v3.begin(),v3.end(),cmp);
	sort(v4.begin(),v4.end(),cmp);
	cout<<coun<<endl;
	for(int i=0;i<v1.size();i++){
		printf("%d %d %d\n",v1[i].no,v1[i].d,v1[i].c);
	}
	for(int i=0;i<v2.size();i++){
		printf("%d %d %d\n",v2[i].no,v2[i].d,v2[i].c);
	}
	for(int i=0;i<v3.size();i++){
		printf("%d %d %d\n",v3[i].no,v3[i].d,v3[i].c);
	}
	for(int i=0;i<v4.size();i++){
		printf("%d %d %d\n",v4[i].no,v4[i].d,v4[i].c);
	}
	return 0;
}
/**
 14 60 80
10000001 64 90
10000002 90 60
10000011 85 80
10000003 85 80
10000004 80 85
10000005 83 77
10000006 83 77
10000007 90 78
10000008 75 79
10000009 59 90
10000010 88 45
10000012 80 100
10000013 90 99
10000014 66 60
 */
