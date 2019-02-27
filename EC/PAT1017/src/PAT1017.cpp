//============================================================================
// Name        : PAT1017.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
struct bign {
	int d[1005];
	int len;
	bign(){
		memset(d,0,sizeof(d));
		len =0;
	}
};
bign change(char str[]){
	bign a;
	a.len = strlen(str);
	for(int i=0;i<a.len;i++){
		a.d[a.len-i-1] = str[i]-'0';
	}
	return a;
}
int main() {
	char s[1005];
	int n,r=0;
	cin>>s;
	cin>>n;
	bign a = change(s);
	bign b;
	b.len= a.len;
	//ำเสý
	for(int i=a.len-1;i>=0;i--){
		r = r*10+a.d[i];
		if(r<n) b.d[i]=0;
		else{
			b.d[i]=r/n;
			r= r%n;
		}
	}
	while(b.len-1>1&&b.d[b.len-1]==0){
		b.len--;
	}
	for(int i=b.len-1;i>=0;i--)
	cout << b.d[i]; // prints !!!Hello World!!!
	cout<<" "<<r;
	return 0;
}
