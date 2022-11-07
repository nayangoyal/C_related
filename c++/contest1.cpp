#include<iostream>
using namespace std;

int main()
{
    int t,n,H,M,h,m;
    int a,b;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>H>>M;
        for (int j = 0; j < n; j++)
        {
            cin>>h>>m;
            a=h;
            b=m;
        }
        if (a==H&&b==M)
        {
            cout<<0<<" "<<0<<endl;
        }else
        {
            if (a>H)
            {
                cout<<(a-H-1)<<" "<<(60-M)+b<<endl;
            }else
            {
                cout<<(23-H)+a<<" "<<(60-M)+b<<endl;
            }
            
        }
        
    }
    
    return 0;
}
