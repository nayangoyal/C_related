#include<iostream>
using namespace std;

int main()
{
    int n, v;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int c=0;
        cin>>v;
        int a[v];
        for (int j = 0; j < v; j++)
        {
            cin>>a[j];
            // c=c+a[j];
        }
        
        for (int k = 0; k < v; k++)
        {
            for (int j = k+1; j < v; j++)
            {
                if (a[k]>a[j])
                {
                    int z=a[k];
                    a[k]=a[j];
                    a[j]=z;
                }
            }
        }
        
        if (v%2!=0)
        {
            int e=0;
            for (int j = 0; j < v; j++)
            {
                if (a[i]%2!=0)
                {
                    break;
                }
                e++;
            }
            if (e!=v)
            {
                cout<<"YES"<<endl;
            }else
            {
                cout<<"NO"<<endl;
            }
            
        }else
        {
            int e=0, f=0;
            for (int j = 0; j < v; j++)
            {
                if (a[j]%2!=0)
                {
                    e++;
                }else
                {
                    f++;
                }
                
                if(e>0&&f>0)
                {
                    break;
                }

            }

            if (e>0&&f>0)
            {
                cout<<"YES"<<endl;
            }else
            {
                cout<<"NO"<<endl;
            }
            
        }
        
    }
    
    return 0;
}
