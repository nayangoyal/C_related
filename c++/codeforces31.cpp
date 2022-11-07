#include<iostream>
using namespace std;

int main()
{
    int n, v;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>v;
        int a[v];
        for (int j = 0; j < v; j++)
        {
            cin>>a[j];
        }

        if (v%2!=0)
        {
            for (int j = 0; j < (v-1)/2; j++)
            {
                cout<<a[j]<<" ";
                cout<<a[v-1-j]<<" ";
            }
            cout<<a[(v-1)/2];
        }else
        {
            for (int j = 0; j < v/2; j++)
            {
                cout<<a[j]<<" ";
                cout<<a[v-1-j]<<" ";
            }
            
        }
                
        
        
    }
    
    return 0;
}
