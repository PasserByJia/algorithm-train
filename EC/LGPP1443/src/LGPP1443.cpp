//============================================================================
// Name        : LGPP1443.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
struct xy{
    int x,y;
}node,Top;
const int dx[4]={1,-1,2,-2};
const int dy[4]={1,-1,2,-2};
int a[401][401];
bool b[401][401];
int n,m;
void bfs(int x,int y,int step){
    a[x][y] = step;
    b[x][y] = false;
    queue<xy> Q;
    node.x = x;
    node.y = y;
    Q.push(node);
    while (!Q.empty()){
        Top=Q.front();
        Q.pop();
            for (int i=0;i<4;i++)
                for (int j=0;j<4;j++)
                    if (abs(dx[i])!=abs(dy[j])){
                        int X=Top.x+dx[i];
                        int Y=Top.y+dy[j];
                        if (X<1||X>n||Y<1||Y>m) continue;
                        if (b[X][Y]){
                            node.x=X;
                            node.y=Y;
                            Q.push(node);
                            b[X][Y] = false;
                            a[X][Y] = a[Top.x][Top.y]+1;
                        }
                    }
    }
}
int main(){
    memset(b,true,sizeof(b));
    memset(a,-1,sizeof(a));
    int x,y;
    cin>>n>>m>>x>>y;
    bfs(x,y,0);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++)
        	printf("%-5d", a[i][j]);
        cout<<"\n";
    }
    return 0;
}
