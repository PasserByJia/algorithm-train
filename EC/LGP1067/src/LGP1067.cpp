//============================================================================
// Name        : LGP1067.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,x,flag=0;
	cin>>n;
	for(int i=n;i>=0;i--){
		cin>>x;
		if(x==0){
			continue;
		}else if(x<0&&!flag){
			cout<<"-";
		}else if(i!=n&&flag){
			if(x>0){
				cout<<"+";
			}else{
				cout<<"-";
			}
		}
		flag=1;
		if(abs(x)>1&&i!=0){
			cout<<abs(x);
		}
		if(i==1){
			cout<<"x";
		}else if(i!=0){
			cout<<"x^"<<i;
		}else{
			cout<<abs(x);
		}
	}
	return 0;
}
