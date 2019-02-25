//============================================================================
// Name        : LGP1032.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
struct node{
    string str;
    int st;
};
struct re{
	string s1;
	string s2;
} rr[10];
string ss ,ee;
int l=0,ans;
map<string,int> m;
void bfs(){
	queue <node> q;
	    node s;
	    s.str = ss;
	    s.st = 0;
	    q.push(s);
	    while (!q.empty()){
	    	node u = q.front();
			q.pop();
			if(m.count(u.str) == 1)
			   continue;
			if (u.str == ee){
				ans = u.st;
				break;
			}
			m[u.str] = 1;
			for(int i=0;i<l;i++){
				string temp = u.str;
				while(1){
					int index = temp.find(rr[i].s1);
					if(index==-1)break;
					string temp2 = u.str;
					node v;
					v.str = temp2.replace(index,rr[i].s1.size(),rr[i].s2);
					v.st = u.st+1;
					q.push(v);
					temp[index]='.';
}
			}
	    }
	    if (ans > 10 || ans == 0)
	           cout << "NO ANSWER!" << endl;
	       else
	           cout << ans << endl;
}
int main() {
	cin>>ss>>ee;
	while(cin>>rr[l].s1>>rr[l].s2){
		l++;
		if(l==6)break;
	}
	bfs();
	return 0;
}
