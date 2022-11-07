#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n, v;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>v;
        if (v%4==0)
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}
