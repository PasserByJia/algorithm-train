//============================================================================
// Name        : LGP1464.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int W[25][25][25];
int w(int a,int b,int c){
	if(a<=0||b<=0||c<=0){
		return 1;
	}
	if(a>20||b>20||c>20){
		return w(20,20,20);
	}
	if(W[a][b][c]) return W[a][b][c];
	if(a<b&&b<c){
		return W[a][b][c]= w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
	}else{
		return W[a][b][c]= w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
	}
}
int main() {
	int a,b,c;
	while (cin >> a >> b >> c) {
		if (a == -1 && b == -1 && c == -1)
			break;
		printf("w(%d, %d, %d) = ", a, b, c);
		cout << w(a,b,c) << endl;
	}
}
