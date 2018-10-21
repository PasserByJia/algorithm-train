#include<iostream>
#include<string>
#include<stdio.h>
#include<cmath>

using namespace std;

int main()
{
    int m,n;
    int arrx[100];
    char chx[100];
    char cinx[100];
    int endx[100];
    int res[100];
    int cas=0;

    while(cin>>m &&m)
    {
        getchar();//读取每一层节点所对应的变量
		for (int i = 0; i < m ;i++) {
			getchar();
			scanf("%d",&arrx[i]);
			getchar();
		}
		//读取最终节点的集合
        cin>>cinx;
        for(int i=0;cinx[i]!='\0';i++)
        {
            endx[i]=cinx[i]-'0';
        }
        //搜索节点结果
        cin>>n;
        int xx[100];
        for(int i=0;i<n;i++)
        {
            char ch1[100];
            cin>>ch1;
            int count=0;
            //将字符串形式的查询码转换成数字
            for(int j=0;ch1[j]!='\0';j++)
            {
                res[j+1]=ch1[j]-'0';
                count++;
            }
            int r =0;
            int k=0;
            //将二进制转换成十进制
            for(int j=0,k=count-1;j<count;j++,k--)
            {
                r+=(res[arrx[j]]*pow(2,k));
            }
            xx[i]=endx[r];
        }
        cout<<"S-Tree #"<<++cas<<":"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<xx[i];
        }
        cout<<endl<<endl;
    }
}
