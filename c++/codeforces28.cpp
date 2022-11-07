#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n, t;
    cin>>n>>t;
    // long long c = pow(10, n-1);
    // long long d = pow(10, n);
    // while (c%t!=0&&c<d-1)
    // {
    //     c++;
    // }

    // if (c%t==0)
    // {
    //     cout<<c<<endl;
    // }else
    // {
    //     cout<<-1<<endl;
    // }
    
    if (t/n<10)
    {
        if (t<10)
        {
            for (int i = 0; i < n; i++)
            {
                cout<<t;
            }
        }else
        {
            for (int i = 0; i < n-1; i++)
            {
                cout<<t%9;
            }
            cout<<0;
        }
        
    }else
    {
        cout<<-1;
    }
    
    
    
    return 0;
}
