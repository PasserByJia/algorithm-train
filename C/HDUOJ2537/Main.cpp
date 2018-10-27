#include<iostream>
using namespace std;

int main()
{

    int n ;
    while(cin>>n)
    {
        char num[20];
        int countR=0,countY=0;
        cin>>num;
        for(int i=0;i<n;i++)
        {
            if(num[i]=='R') countR++;
            else if(num[i]=='Y') countY++;
            else if(num[i]=='B')
            {
                if(countR<7) cout<<"Yellow"<<endl;
                else cout<<"Red"<<endl;
                break;
            }else{
                if(countY<7) cout<<"Red"<<endl;
                else cout<<"Yellow"<<endl;
                break;
            }
        }
    }

}
