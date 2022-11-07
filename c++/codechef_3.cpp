#include<iostream>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin>>a[j];
        }
        for (int j = 0; j < n; j++)
        {
            // int c=0;
            for (int k = j+1; k < n; k++)
            {
                if (a[j]>a[k])
                {
                    int z=a[j];
                    a[j]=a[k];
                    a[k]=z;
                    // c++;
                }
            }
        }
        int d=0;
        for (int j = 0; j < n; j++)
        {
            int c=0, v;
            for (int k = j; k < n; k++)
            {
                if (a[j]!=a[k])
                {
                    v=j;
                    j=k-1;
                    break;
                }
                c++;
                if (k==n-1)
                {
                    v=j;
                    j=k;
                    break;
                }
            
            }
            if (c==a[v])
            {
                d=d+c;
            }else
            {
                cout<<"NO"<<endl;
                break;
            }
            
        }
        if (d==n)
        {
            cout<<"YES"<<endl;
        }
        
        
    }
    
    return 0;
}
