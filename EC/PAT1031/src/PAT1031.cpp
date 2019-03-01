#include <bits/stdc++.h>
using namespace std;
int q[] ={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char M[] ={'1', '0', 'X' ,'9' ,'8' ,'7' ,'6' ,'5' ,'4', '3', '2'};
int main() {
	int n,flag=1;
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		int sum=0;
		for(int i =0;i<s.length()-1;i++){
			sum+=((s[i]-'0')*q[i]);
		}
		int Z = sum%11;
		if(s[17]!=M[Z]){
			cout <<s<< endl; // prints !!!Hello World!!!
		}
	}
	if(flag)cout <<"All passed"<< endl;
	return 0;
}
