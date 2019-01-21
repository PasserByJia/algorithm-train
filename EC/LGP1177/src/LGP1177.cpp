//============================================================================
// Name        : LGP1177.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int num[100005];
int Partition(int A[],int left,int right){
	int p =(round(1.0*rand()/RAND_MAX*(right-left)+left));
	swap(A[p],A[left]);
	int temp = A[left];
	while(left<right){
		while(left<right&&A[right]>temp) right--;
		A[left] = A[right];
		while(left<right&&A[left]<=temp) left++;
		A[right] = A[left];
	}
	A[left] = temp;
	return left;
}
void quickSort(int A[],int left,int right){
	if(left<right){
		int pos = Partition(A,left,right);
		quickSort(A,left,pos-1);
		quickSort(A,pos+1,right);
	}
}
int main() {
	int n;
	scanf ("%d",&n);
	for(int i=1;i<=n;i++){
		scanf ("%d",&num[i]);
	}
	quickSort(num,1,n);
	for(int i=1;i<=n;i++){
		printf ("%d",num[i]);
		if(i!=n){
			printf(" ");
		}
	}
	return 0;
}
