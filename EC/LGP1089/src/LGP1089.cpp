//============================================================================
// Name        : LGP1089.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int save=0,hand=0,fo;
int main() {

	for(int i=1;i<=12;i++)
	{
		cin>>fo;
		if(hand<fo)
		{
			if(hand+100>=fo)
			{
				save +=200;
				hand = hand+100-fo;
			}else if(hand+200>=fo){
				save +=100;
				hand = hand+200-fo;
			}else if(hand+300>=fo){
				hand = hand+300-fo;
			}else{
				cout<<"-"<<i<< endl;
				return 0;
			}
		}else{
			save+=300;
			hand = hand - fo;

		}
	}
	cout << save*1.2+hand << endl; // prints !!!Hello World!!!
	return 0;
}
