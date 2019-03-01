//============================================================================
// Name        : PAT1037.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//14.1.28 10.16.27
//14.1.28 10.16.27
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n1,n2,n3,n4=0;
	long long m1,m2,m3,m4=0;
	scanf("%lld.%lld.%lld",&n1,&n2,&n3);
	scanf("%lld.%lld.%lld",&m1,&m2,&m3);
	n4=n1*17*29+n2*29+n3;
	m4=m1*17*29+m2*29+m3;
	int temp = m4-n4;
	int g,s,k;
	k = temp%29;
	temp/=29;
	s = temp%17;
	g = temp/17;
	if(temp>=0){
		cout << g<<"."<<s<<"."<<k<< endl;
	}else{
		cout<<"-" << -g<<"."<<-s<<"."<<-k<< endl;
	}
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
