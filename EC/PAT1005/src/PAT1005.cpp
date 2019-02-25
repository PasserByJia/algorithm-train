

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
	int cnt =0;
	for(int i =0;i<n;i++){
		int l = nu[i];
		if(!num[l]){
			ans[cnt++]= l;
		}
	}
	sort(ans,ans+cnt,cmp);
	int is =1;
	for(int i=0;i<cnt;i++){
		if(is){
			cout<<ans[i];
			is =0;
		}else{
			cout<<" "<<ans[i];
		}
	}
	return 0;
}

