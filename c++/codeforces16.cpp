#include<iostream>
using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>a>>b;
        int e;
        if (b>a)
        {
            e=b-a;
            if (e%2==0)
            {
                cout<<2<<endl;
            }else
            {
                cout<<1<<endl;
            }
        }else
        {
            if (a>b)
            {
                e=a-b;
                if (e%2==0)
                {
                    cout<<1<<endl;
                }else
                {
                    cout<<2<<endl;
                }   
            }else
            {
                cout<<0<<endl;
            }
            
        }
        
    }
    
    return 0;
}
