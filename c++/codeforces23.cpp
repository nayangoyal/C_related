#include<iostream>
using namespace std;

int main()
{
    int t, v;
    cin>>t>>v;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = i+1; j < t; j++)
        {
            if (a[i]>a[j])
            {
                int z=a[i];
                a[i]=a[j];
                a[j]=z;
            }
        }
    }
    int c=0;
    for (int i = 0; i < v; i++)
    {
        if (a[i]<0)
        {
            c=c+(-1*a[i]);
        }
        
    }
    
    cout<<c;
    return 0;
}
