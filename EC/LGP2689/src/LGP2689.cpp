#include<iostream>
using namespace std;
int dir[4];
char c;
int main(){
    int k,x,y,x1,y1,l,s=0,t=0;
    cin>>x>>y>>x1>>y1;
    if(x<x1){dir[0]=x1-x;t+=dir[0];}
    if(x>x1){dir[1]=x-x1;t+=dir[1];}
    if(y>y1){dir[2]=y-y1;t+=dir[2];}
    if(y1>y){dir[3]=y1-y;t+=dir[3];}
    cin>>k;
    for(int i=1;i<=k;i++){
        cin>>c;
        if(c=='E')l=0;
        else if(c=='W')l=1;
        else if(c=='S')l=2;
        else if(c=='N')l=3;
        if(dir[l]){
            s++;dir[l]--;
        }
    }
    if(s<t)cout<<-1;
    else cout<<s;

}
