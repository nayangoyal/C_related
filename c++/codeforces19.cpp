#include<iostream>
using namespace std;

int main()
{
    int t,v;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>v;
        int a[2*v];
        for (int j = 0; j < 2*v; j++)
        {
            cin>>a[j];
        }

        for (int j = 0; j < 2*v; j++)
        {
            for (int k = j+1; k < 2*v; k++)
            {
                if (a[j]==a[k])
                {
                    cout<<a[j]<<" ";
                    break;
                }
                
            }
            
        }
        cout<<endl;
        
    }
    
    return 0;
}

