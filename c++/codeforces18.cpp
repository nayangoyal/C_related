#include<iostream>
using namespace std;

int main()
{
    int t, v;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>v;
        int e, f;
        if (v%2==0)
        {
            for (int j = 1; j <= v; j++)
            {
                cout<<v+1-j<<" ";
            }
            cout<<endl;
        }else
        {
            e=(v+1)/2;
            f=e+1;
            for (int j = 1; j <= v; j++)
            {
                if (j==e)
                {
                    cout<<j-1<<" ";
                }else
                {
                    if (j==f)
                    {
                        cout<<j-1<<" ";
                    }else
                    {
                        cout<<v+1-j<<" ";
                    }

                }

            }
            cout<<endl;
        }
        
    }
    
    return 0;
}
