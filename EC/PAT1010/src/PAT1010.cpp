//============================================================================
// Name        : PAT1010.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int main(){
	int count(0);  //用来记录输入个数
	while(1){
		int temp1(0), temp2(0);
		cin >> temp1 >> temp2;
		count+=2;
		if(temp2==0 && count ==2){
			cout << "0 0";       //零多项式 ，只有两项
			break;
		}else if(temp2==0){
			break;    //指数为0时不需要考虑系数和指数输出，最后两项
		}else{
			if(count ==2){
				cout << temp1*temp2 << " " << temp2-1;
			}else{
				cout <<" "<< temp1*temp2 << " " << temp2-1;
			}
		}
	}
	return 0;
}

