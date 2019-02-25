#include <bits/stdc++.h>
using namespace std;
int num[1000],ans[1000];
int cmp(int a,int b){
	return a>b;
}
int main() {
	int nu[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>nu[i];
		int m=nu[i];
		if(!num[m]){
			while(m!=1){
				if(m%2==0){
					m/=2;
					num[m]++;
				}else{
					m = (3*m+1)/2;
					num[m]++;
				}
			}
		}

	}
	sort(nu,nu+n,cmp);
	int end =0;
	for(int i=0;i<n;i++){
		if(num[nu[i]]==0){
			end = nu[i];
		}
	}
	for(int i=0;i<n;i++){
		if(num[nu[i]]==0){
			cout<<nu[i];
			if(nu[i]!=end){
				cout<<" ";
			}
		}
	}
	return 0;
}

