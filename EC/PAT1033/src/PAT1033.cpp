//============================================================================
// Name        : PAT1033.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
/*
 * TIE.
7_This_is_a_test.
 */
int main() {
	string a ,b;
	getline(cin,a);
	getline(cin,b);
	int flag =a.find('+');
	for(int i=0;i<b.length();i++){
		if(flag==-1){
			if('0'<=b[i]&&b[i]<='9'&&a.find(b[i])!=-1){
				continue;
			}else if('A'<=b[i]&&b[i]<='Z'&&a.find(b[i])!=-1){
				continue;
			}else if('a'<=b[i]&&b[i]<='z'&&a.find(b[i]-32)!=-1){
				continue;
			}else if((b[i]=='_'||b[i]=='.'||b[i]=='-'||b[i]==',')&&a.find(b[i])!=-1){
				continue;
			}
			cout << b[i];
		}else{
			if('A'<=b[i]&&b[i]<='Z'){
				continue;
			}else if('0'<=b[i]&&b[i]<='9'&&a.find(b[i])!=-1){
				continue;
			}else if('a'<=b[i]&&b[i]<='z'&&a.find(b[i]-32)!=-1){
				continue;
			}else if((b[i]=='_'||b[i]=='.'||b[i]=='-'||b[i]==',')&&a.find(b[i])!=-1){
				continue;
			}
			cout << b[i];
		}
	}
	return 0;
}
