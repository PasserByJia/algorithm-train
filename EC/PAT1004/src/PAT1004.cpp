//============================================================================
// Name        : PAT1004.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
struct student{
	string name;
	string no;
	int grade;
} s[100000];
int cmp(student a,student b){
	return a.grade< b.grade;
}
int main() {
	int n ;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i].name>>s[i].no>>s[i].grade;
	}
	sort(s,s+n,cmp);
	cout << s[n-1].name<<" "<<s[n-1].no << endl; // prints !!!Hello World!!!
	cout << s[0].name<<" "<<s[0].no << endl; // prints !!!Hello World!!!
	return 0;
}
