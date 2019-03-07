/*70 3
70 100
69 1
1 2
*/

#include <bits/stdc++.h>
using namespace std;
int t[105],p[105],dp[1005];
int main() {
	int m ,n;
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		cin>>t[i]>>p[i];
	}
	for(int i=1;i<=n;i++){
		for(int j =m;j>0;j--){
			if(t[i]<=j){
				dp[j]= max(dp[j],dp[j-t[i]]+p[i]);
			}
		}
	}
	cout << dp[m] << endl; // prints !!!Hello World!!!
	return 0;
}
