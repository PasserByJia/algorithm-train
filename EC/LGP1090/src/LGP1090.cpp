//============================================================================
// Name        : LGP1090.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <bits/stdc++.h>
using namespace std;

int k,x,num,n1,n2,a1[30001],a2[30001],t[20001],w,sum;
int main()
{
    scanf("%d",&num);
    memset(a1,127/3,sizeof(a1));
    memset(a2,127/3,sizeof(a2));
    for (int i=1;i<=num;i++)
    {
        scanf("%d",&x);
        t[x]++;
    }
    for (int i=1;i<=20000;i++)
    {
        while (t[i])
        {
            t[i]--;
            a1[++n1]=i;
        }
    }
    int i=1,j=1;
    k=1;
    while (k<num)
    {
        if (a1[i]<a2[j])
        {
            w=a1[i];
            i++;
        }
        else
        {
            w=a2[j];
            j++;
        }
        if (a1[i]<a2[j])
        {
            w+=a1[i];
            i++;
        }
        else
        {
            w+=a2[j];
            j++;
        }
        a2[++n2]=w;
        k++;
        sum+=w;
    }
    printf("%d",sum);
}
//int num[10005],t[40005];
//
//int main() {
//	long long n,count1=0,temp,x=0,maxn=40005;
//	cin>>n;
//	memset(t, 0, sizeof(t));
//	for(int i=0;i<n;i++){
//		cin>>temp;
//		t[temp]++;
//	}
//	for(long long i=1;i<=maxn;i++){
//		if(t[i]==0) continue;
//		if(t[i]==1){
//			long long  l=0;
//			l+=i;
//			t[i]--;
//			i++;
//			while(t[i]==0){
//				i++;
//				if(i>maxn) break;
//			}
//			if(i>maxn) break;
//			l+=i;
//			t[i]--;
//			count1+=l;
//			t[l]++;
//			if(t[i]>=1){
//				i--;
//			};
//		}else if(t[i]>=2){
//			while(t[i]>1){
//				x=(i+i);
//				count1+=x;
//				t[x]++;
//				t[i]-=2;
//			}
//			if(t[i]>=1){
//				i--;
//			}
//		}
//	}
//	cout << count1 << endl;
//	return 0;
//}
