#include<cstdio>
#include<cstring>
#include<algorithm>
#include<ctime>
#include<cmath>

using namespace std;

const double k = 0.95;
const double T_min = 1e-3;
const double INF = 999999999;
const double PI = acos(-1.0);
const int N = 30 ;
int X,Y,n;

double dis[1005];

struct point
{
    double x,y;
}P[1005],people[35];


inline double Rand(double r,double l){
    return (rand()% ((int)(l-r)*1000) ) / (1000.0+r);
}

inline double D( point a,point b){
    return sqrt( pow((a.x-b.x),2) + pow((a.y-b.y),2) );
}

inline bool judge(point a){
    return ( a.x>=0 && a.x<=X && a.y>=0 && a.y<=Y );
}

inline double oper ( point a){
    double d = INF ;
    for(int i=1;i<=n;i++)
        d = min (d , D( a,P[i] ));
    return d ;
}

int main()
{
    int T;srand(time(0));
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&X,&Y,&n);
        for(int i=1;i<=n;i++)
            scanf("%lf%lf",&P[i].x,&P[i].y);
        for(int i=1;i<=N ; i++)
        {
            people[i].x = Rand(0,X*1.0);
            people[i].y = Rand(0,Y*1.0);
            dis[i] = oper(people[i]);
        }
        double T_now = max(X,Y);
        while( T_now > T_min )
        {
            for(int i=1;i<=N;i++)
            {
                for(int t=1;t<=50;t++)
                {
                    double angle = Rand(0,2*PI);
                    point tem ;
                    tem.x = people[i].x + cos(angle)*T_now ;
                    tem.y = people[i].y + sin(angle)*T_now ;
                    if(!judge(tem))continue ;
                    double d = oper(tem);
                    if( d >= dis[i] )
                    {
                        dis[i] = d;
                        people[i] = tem ;
                    }
                }
            }
        T_now *= k ;
        }
        int ans = 1;
        for(int i=2;i<=N;i++)
            if(dis[i]>dis[ans])
                ans = i;
        printf("The safest point is (%.1f, %.1f).\n",people[ans].x,people[ans].y);
    }return 0;
}

