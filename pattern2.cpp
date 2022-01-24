#include<iostream>
using namespace std;
int main()
{
    int t;
    for(int i=1;i<=9;i=i+2)
    {
        t=i;
        for(int j=1;j<=5;++j)
        {
            cout<<t<<" ";
            if(t==9)
            t=1;
            else
            t=t+2;
        }
        cout<<endl;
    }
}