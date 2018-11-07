//============================================================================
// Name        : LGP3741.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;
char a[100];
int res[2];
int main() {
	int n,max = 0;
	cin>>n;
	cin>>a;
	memset(res,0,sizeof(res));
	for(int i =0;i<n-1;i++){
		if(a[i]=='V'&&a[i+1]=='K') max++;
	}
	//cout<< max <<endl;
	for(int i =0;i<n;i++)
	{
		int temp=0;
		int b[100];
		for(int j=0;j<n;j++) b[j]=a[j];
		if(b[i]=='K') b[i] = 'V';
		else b[i] = 'K';
		for(int j =0;j<n;j++)
		{
			if(b[j]=='V'&&b[j+1]=='K') temp++;
		}
		//cout<<"no."<<i<<temp<<endl;
		if(temp>max) max = temp;
	}
	cout<<max<<endl;
	return 0;
}
