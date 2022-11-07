#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n], b[n];
    int c=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        c=c+a[i];
        b[i]=a[i];
    }
    
    if (c==n)
    {
        c=c-1;
        goto end;
    }
    

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                if (a[k]==1)
                {
                    a[k]=0;
                }else
                {
                    a[k]=1;
                }
                
            }
            int d=0;
            for (int k = 0; k < n; k++)
            {
                d=d+a[k];
            }
            
            if (d>c)
            {
                c=d;
            }

            for (int k = 0; k < n; k++)
            {
                a[k]=b[k];
            }
            
            
        }
        
    }
    end:
    
    cout<<c;

    return 0;
}
