//============================================================================
// Name        : PAT.cpp
// Author      : 
// Version     :1002
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int num[100000];
string ss[10] ={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main() {
	string s;
	cin>>s;
	int sum=0;
	for(int i=0;i<s.length();i++){
		sum+=(s[i]-48);
	}
	int l=0;
	while(sum>0){
		num[l++] = sum%10;
		sum/=10;
	}
	for(int i=l-1;i>=0;i--){
		cout << ss[num[i]] ; // prints !!!Hello World!!!
		if(i!=0)cout << " " ;
	}

	return 0;
}
