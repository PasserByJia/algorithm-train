//============================================================================
// Name        : PAT1019.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n;
	m=n;
	int temp[10];
	while(1){
		for(int i=0;i<4;i++){
			temp[i]= m%10;
			m/=10;
		}
		if(temp[0]==temp[1]&&temp[1]==temp[2]&&temp[2]==temp[3]&&temp[3]==temp[0]){
			cout<<n<<" - "<<n<<" = 0000"<<endl;
			break;
		}
		sort(temp,temp+4);
		int newn =0;
		for(int i=0;i<4;i++){
			newn= newn*10+temp[i];
		}
		int new2=0;
		for(int i=3;i>=0;i--){
			new2= new2*10+temp[i];
		}
		m =new2-newn;
		if(newn<10){
			cout<<new2<<" - 000"<<newn<<" = ";
		}else if(newn<100){
			cout<<new2<<" - 00"<<newn<<" = ";
		}else if(newn<1000){
			cout<<new2<<" - 0"<<newn<<" = ";
		}else{
			cout<<new2<<" - "<<newn<<" = ";
		}
		if(m<10){
			cout<<"000"<<m<<endl;
		}else if(m<100){
			cout<<"00"<<m<<endl;
		}else if(m<1000){
			cout<<"0"<<m<<endl;
		}else{
			cout<<m<<endl;
		}
		if(m==6174)break;
	}
	return 0;
}
