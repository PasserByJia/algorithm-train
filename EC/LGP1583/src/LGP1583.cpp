//============================================================================
// Name        : LGP1583.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
struct people{
	int id;
	int w;
}p[20005];
int E[15];
int cmp(people a,people b){
	if(a.w!=b.w){
		return a.w>b.w;
	}else{
		return a.id<b.id;
	}
}
int main() {
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=10;i++){
		cin>>E[i];
	}
	for(int i=1;i<=n;i++){
		p[i].id=i;
		cin>>p[i].w;
	}
	sort(p+1,p+n+1,cmp);
	for(int i=1;i<=n;i++){
		int mo = (i-1)%10+1;
		p[i].w+=(E[mo]);
	}
	sort(p+1,p+n+1,cmp);
	for(int i=1;i<=k;i++){
		cout<<p[i].id;
		if(i!=k) cout<<" ";
	}
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
