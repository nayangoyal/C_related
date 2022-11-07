#include<iostream>
using namespace std;

int main()
{
    int n,v;
    cin>>n;
    // int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>v;
        if (v%2!=0)
        {
            cout<<(v/2)+1<<endl;
        }else
        {
            cout<<v/2<<endl;
        }
        
    }
    
    
    return 0;
}
