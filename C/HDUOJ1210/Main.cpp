#include <iostream>
using namespace std;
int main(){
    int num,i,p,sum;
    while(cin>>num)
    {
        p=2*num+1;
        for(i=1,sum=1;;i++)
        {
            sum=(sum*2)%p;
            if(sum==1)
                break;
        }
        cout<<i<<endl;
    }
    return 0;
}

/*
内存超限的解法
long n;
long *swap1(long x[],long n)
{
    long *y = new long[2*n];
    long a =0;
    long b=n;
    for(long i =0;i<2*n;i++)
    {
        if(i%2==0){
            y[i]=x[b];
            b++;
        }else{
            y[i]=x[a];
            a++;
        }
    }
    return y;

}
long check(long x[],long y[])
{
    long flag =1;
    for(long i=0;i<2*n;i++)
    {
        if(x[i]!=y[i])
        {
            flag =0;
            break;
        }
    }
    return flag;
}

int main()
{
    while(cin>>n)
    {
        long *x= new long[2*n];
        long *y= new long[2*n];
        long *p = x;
        long *q =y;
        for(long i=1;i<=(2*n);i++)
        {
            *p=i;
            *q=i;
             p++;
             q++;
        }
        long count1 =0;
        do{
            y = swap1(y,n);
            count1++;
        }while(!check(x,y));

        cout<<count1<<"\n";
    }
    return 0;
}*/
