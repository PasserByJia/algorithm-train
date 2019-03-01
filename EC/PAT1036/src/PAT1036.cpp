//============================================================================
// Name        : PAT1036.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;char c;
	cin>>n;
	cin>>c;
	int temp;
	if(n%2==0){
		temp = n/2;
	}else{
		temp = (n/2)+1;
	}
	for(int i=0;i<temp;i++){
		for(int j =0;j<n;j++){
			if(i==0||i==temp-1){
				cout <<c;
			}else{
				if(j==0||j==n-1){
					cout <<c;
				}else{
					cout <<" ";

				}
			}
		}
		cout <<endl;
	}
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
