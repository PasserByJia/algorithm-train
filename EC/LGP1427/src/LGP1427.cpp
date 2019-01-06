//============================================================================
// Name        : LGP1427.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    while (1){
        int a;
        cin>>a;
        if (!a) break;
        s.push(a);
    }
    while (!s.empty()){
        cout<<s.top();
        printf(" ");
        s.pop();
    }
    cout<<endl;
    return 0;
}
