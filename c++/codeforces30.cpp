#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    if (n%2!=0)
    {
        int p=(n-1)/2;
        int q=p;
        int j=0;
        int b[(n+1)/2];
        while (p>0)
        {
            int c=0;
            for (int i = p; i <= q; i++)
            {
                if (a[i]==0)
                {
                    a[i]=1;
                }else
                {
                    a[i]=0;
                }
                
            }

            for (int i = 0; i < n; i++)
            {
                c=c+a[i];
            }
            b[j]=c;
            p--;
            q++;
            j++;
        }
        
        int max=0;
        for (int i = 0; i < j; i++)
        {
            if (b[i]>max)
            {
                int z=b[i];
                b[i]=max;
                max=z;
            }
            
        }
        
        cout<<max;
    }
    
    
    return 0;
}
