#include<iostream>
using namespace std;

int main()
{
    int t,a,b,c,n,A,B,C;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>a>>b>>c>>n;
        int e=a+b+c+n;
        e=e/3;
        A=e-a;
        B=e-b;
        C=e-c;
        if (A+B+C==n&&A>=0&&B>=0&&C>=0)
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}

