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
	int count(0);  //������¼�������
	while(1){
		int temp1(0), temp2(0);
		cin >> temp1 >> temp2;
		count+=2;
		if(temp2==0 && count ==2){
			cout << "0 0";       //�����ʽ ��ֻ������
			break;
		}else if(temp2==0){
			break;    //ָ��Ϊ0ʱ����Ҫ����ϵ����ָ��������������
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

