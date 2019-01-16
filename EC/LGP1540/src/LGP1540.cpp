//============================================================================
// Name        : LGP1540.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int mm[1005];
int counts[1005];
int main() {
	int m,n,temp,sum=1,sum2=0,j=0;
	cin>>m>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(counts[temp]==0&&sum<=m){
			counts[temp]=1;
			mm[sum++] = temp;
			sum2++;
		}else if(sum>m){
			if(counts[temp]==0){
				j++;
				counts[mm[j]]=0;
				mm[j]=0;
				counts[temp]=1;
				mm[sum++] = temp;
				sum2++;
			}
		}
	}
	cout<<sum2;
	return 0;
}
