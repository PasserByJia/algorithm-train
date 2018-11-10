//============================================================================
// Name        : LGP3742.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
char x[101];
char y[101];
int n;

int main() {
	cin>>n;
	cin>>x;
	cin>>y;
	for(int i=0;i<n;i++)
	{
		if(x[i]<y[i])
		{
			cout<<-1<<endl;
			break;
		}
	}
	cout<<y<<endl;
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
