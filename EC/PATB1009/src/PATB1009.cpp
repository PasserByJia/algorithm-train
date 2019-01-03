//============================================================================
// Name        : PATB1009.cpp
// Author      : PasserJia
// Version     : Talk backwards
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
char str[80][80];
int main() {
	char s[80];
	//cin>>s;  //cin  and scanf Cannot read a string containing spaces
	gets(s); //if you want read a string please using gets();
	int r=0,c=0,len = strlen(s);
	for(int i=0;i<len;i++){
		if(s[i]!=' '){
			str[r][c++]=s[i];
		}else{
			str[r][c]='\0';
			r++;
			c=0;
		}
	}
	for(int j =r;j>=0;j--){
		cout<<str[j];
		if(j>0)cout<<" ";//there should be no spaces at the end of the output
	}
	return 0;
}
