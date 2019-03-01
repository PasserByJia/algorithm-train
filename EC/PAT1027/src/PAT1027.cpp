#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,sf=1,be=1;char f;
	cin>>n>>f;
	while(sf<=n){
		sf+=((be+=2)*2);
	}
	sf-=(be*2);
	be-=2;
	for(int i=be;i>1;i-=2){
		for(int l=0;l<(be-i)/2;l++)cout<<" ";
		for(int j=1;j<=i;j++){

			cout<<f;
		}
		cout<<endl;
	}
	for(int l=0;l<(be-1)/2;l++)cout<<" ";
	cout<<f<<endl;
	for(int i=3;i<=be;i+=2){
		for(int l=0;l<(be-i)/2;l++)cout<<" ";
		for(int j=1;j<=i;j++){
			cout<<f;
		}
		cout<<endl;
	}
	cout << n-sf << endl; // prints !!!Hello World!!!
	return 0;
}
