//============================================================================
// Name        : LGP1634.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int n;//几轮
int x;//感染数量
int count =1;
int main() {
	cin>>x>>n;
	for(int i=0;i<n;i++)
	{
		count+=(count*x);
	}
	cout<<count<<endl;
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
