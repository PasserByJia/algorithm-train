//============================================================================
// Name        : LGP1478.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
struct apple{
	int h;
	int y;
}  app[5005];
int coun=0;
bool cmp(apple a1,apple a2){
	return a1.y<a2.y;
}
int main() {
	int n,s,a,b;
	cin>>n>>s>>a>>b;
	for(int i =0;i<n;i++){
		cin>>app[i].h>>app[i].y;
	}
	sort(app,app+n,cmp);
//	for(int i =0;i<n;i++){
//		cout<<app[i].h<<" "<<app[i].y<< endl;
//	}
	for(int i =0;i<n;i++){
		if(app[i].h<=(a+b)&&s>=app[i].y){
			coun++;
			s-=app[i].y;
		}
	}
	cout<<coun<< endl; // prints !!!Hello World!!!
	return 0;
}
