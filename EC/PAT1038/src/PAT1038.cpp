//============================================================================
// Name        : PAT1038.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int grade[110];
int main() {
	int n;
	scanf("%d",&n);
	for(int i =0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		grade[temp]++;
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		if(i!=0)printf(" ");
		int temp;
		scanf("%d",&temp);
		printf("%d",grade[temp]);
	}
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
