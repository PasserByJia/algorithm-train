//============================================================================
// Name        : PAT1018.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
struct peo{
	int s;
	int p;
	int f;
	int cout[100];
	peo(){
		memset(cout,0,sizeof(cout));
		s=0;
		p=0;
		f=0;
	}
};
int main() {
	int n;// B 66 C 67 J 73
	char j ,y;
	peo p1,p2;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>j>>y;
		if(j==y){
			p1.p++;
			p2.p++;

		}else{
			if((j=='C'&&y=='J')||(j=='J'&&y=='B')||(j=='B'&&y=='C')){
				p1.s++;
				p2.f++;
				p1.cout[j]++;

			}else{
				p1.f++;
				p2.s++;
				p2.cout[y]++;
			}
		}
	}
	int max1=0;
	char JJ;
	if(p1.cout[66]>max1) {max1=p1.cout[66];JJ='B';}
	if(p1.cout[67]>max1) {max1=p1.cout[67];JJ='C';}
	if(p1.cout[74]>max1) {max1=p1.cout[74];JJ='J';}
	int max2=0;
	char YY;
	if(p2.cout[66]>max2) {max2=p2.cout[66];YY='B';}
	if(p2.cout[67]>max2) {max2=p2.cout[67];YY='C';}
	if(p2.cout[74]>max2) {max2=p2.cout[74];YY='J';}
	cout << p1.s<<" "<<p1.p<<" "<<p1.f << endl; // prints !!!Hello World!!!
	cout << p2.s<<" "<<p2.p<<" "<<p2.f << endl;
	cout << JJ<<" "<<YY<< endl;
	return 0;
}
/*
 *
 * 5
B B
B B
J J
B B
J J*/
