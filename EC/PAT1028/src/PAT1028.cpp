//============================================================================
// Name        : PAT1028.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
struct peo{
	string name;
	int year;
	int month;
	int day;
	peo(){
		name = "";
		year =0;
		month =0;
		day =0;
	}
}p[100010];
bool cmp(peo a,peo b){
	if(a.year!=b.year){
		return a.year<b.year;
	}else{
		if(a.month!=b.month){
			return a.month<b.month;
		}else{
			return a.day<b.day;
		}
	}
}
int main() {
	int n,count=0;
	string s1,s2;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s1>>s2;
		peo pp;
		pp.name =s1;
		int flag =0;
		for(int l=0;l<s2.length();l++){
			if(s2[l]=='/'){
				flag++;
				continue;
			}
			if(flag==0){
				pp.year =pp.year*10+(s2[l]-'0');
			}else if(flag==1){
				pp.month =pp.month*10+(s2[l]-'0');
			}else if(flag==2){
				pp.day =pp.day*10+(s2[l]-'0');
			}
		}
		if(pp.year>1814&&pp.year<2014){
			p[count] = pp;
			count++;
		}else if(pp.year==1814){
			if(pp.month>9){
				p[count] = pp;
				count++;
			}else if(pp.month==9&&pp.day>=6){
				p[count] = pp;
				count++;
			}
		}else if(pp.year==2014){
			if(pp.month<9){
				p[count] = pp;
				count++;
			}else if(pp.month==9&&pp.day<=6){
				p[count] = pp;
				count++;
			}
		}
	}
	sort(p,p+count,cmp);
	if(count==0){
		cout<<0<<endl;
	}else{
		cout << count<<" "<<p[0].name<<" "<<p[count-1].name<< endl; // prints !!!Hello World!!!
	}
	return 0;
}
/*
 * 5
John 2001/05/12
Tom 1814/09/06
Ann 2014/09/07
James 1814/09/05
Steve 1967/11/20
 * */
