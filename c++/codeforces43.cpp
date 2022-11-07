#include<iostream>
using namespace std;

int main()
{
    int n, v;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>v;
        int a[2*v];
        int d=0, e=0;
        for (int j = 0; j < 2*v; j++)
        {
            cin>>a[j];
            if (a[j]%2==0)
            {
                d++;
            }else
            {
                e++;
            }
            
        }
        if (d==e)
        {
            cout<<"Yes"<<endl;
        }else
        {
            cout<<"No"<<endl;
        }
        
    }
    
    return 0;
}
