//============================================================================
// Name        : LGP1055.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
char isbn[20];
int q[]={1,0,2,3,4,0,5,6,7,8,9};
int main() {
	int coutt=0;
	cin>>isbn;
	for(int i=0;i<11;i++){
		if(i==1||i==5)i++;
		//cout <<isbn[i]<<" "<<q[i]<<" "<<((int)(isbn[i]-48))*q[i]<<endl;
		coutt+=(((int)(isbn[i]-48))*q[i]);
	}
	//1-007-00009-Xcout<<coutt<<endl;
	int f = coutt%11;
	//cout<<coutt<<" "<<f<<endl;
	if(f==(int)(isbn[12]-48)||(f==10&&isbn[12]=='X')) cout <<"Right" << endl;
	else if(f==10){
		isbn[12] ='X' ;
		cout <<isbn<< endl;
	}
	else{
		isbn[12]=(char)(f+48);
		cout <<isbn<< endl;
	}
	 // prints !!!Hello World!!!
	return 0;
}
