/*
 * Main.cpp
 *
 *  Created on: 2018Äê11ÔÂ4ÈÕ
 *      Author: 87375
 */

#include<iostream>
#include<math.h>
using namespace std;
char FBI[1050];
void fbi(int x, int y)
{
	if(y>x)
	{
		fbi(x,(x+y)/2);
		fbi((y+x+1)/2,y);
	}
	int F=0,B=0;
	for(int i=x;i<=y;i++)
	{
		if(FBI[i]=='0')
		{
			B++;
		}else if(FBI[i]=='1')
		{
			F++;
		}
	}
	if(B&&!F)
	{
		cout<<"B";
	}else if(B&&F)
	{
		cout<<"F";
	}else if(!B&&F)
	{
		cout<<"I";
	}
}

int main()
{
	int n ;
	cin>>n>>FBI;
	fbi(0,pow(2,n)-1);
	return 0;
}
