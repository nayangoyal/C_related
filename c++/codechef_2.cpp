#include<iostream>
using namespace std;

int main()
{
    int t, a, b;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>a>>b;
        if (b-a>=0)
        {
            cout<<b-a<<endl;
        }else
        {
            cout<<0<<endl;
        }
        
    }
    
    return 0;
}
