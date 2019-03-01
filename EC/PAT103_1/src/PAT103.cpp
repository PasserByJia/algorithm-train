#include <bits/stdc++.h>
using namespace std;
int q[20] ={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char M[20] ={'1', '0', 'X' ,'9' ,'8' ,'7' ,'6' ,'5' ,'4', '3', '2'};
int main() {
	int n,flag=1;
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		int sum=0;
		int j;
		for(j =0;j<17;j++){
			if(!(s[j]>='0'&&s[j]<='9')) break;
			sum = sum +(s[j]-'0')*q[j];
		}
		if(j<17){
			cout <<s<< endl;
			flag =0;
		}else{
			int Z = sum%11;
	//		cout <<Z<< endl;
	//		cout <<M[Z]<< endl;
	//		cout <<s[17]<< endl;
			if(s[17]!=M[Z]){
				cout <<s<< endl;
				flag =0;
			}
		}

	}
	if(flag)cout <<"All passed"<< endl;
	return 0;
}
