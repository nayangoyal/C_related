#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        // b[i]=a[i];
    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if (b[i]>b[j])
    //         {
    //             int z=b[i];
    //             b[i]=b[j];
    //             b[j]=z;
    //         }
    //     }
    // }

    int c=0;
    int l=0, r=0;
    for (int i = 0; i < n-1; i++)
    {
        if (a[i]>a[i+1])
        {
            l=i;
            break;
        }
        
    }

    for (int i = n-1; i >= 1; i--)
    {
        if (a[i]<a[i-1])
        {
            r=i;
            break;
        }
        
    }

    reverse (a + l, a + r + 1);
    for (int i = 0; i <n-1; i ++)
    {
        if (a [i]> a [i + 1])
        {
            c = 1;
            break;
        }
    }

    if (c==1)
    {
        cout<<"NO";
    }else
    {
        cout<<"YES"<<endl<<l+1<<" "<<r+1;
    }
    
    
    return 0;
}
