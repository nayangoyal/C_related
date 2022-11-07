#include<iostream>
using namespace std;

int main()
{
    int n ,a, b;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        if (a>b)
        {
            cout<<7-a<<endl;
        }else
        {
            cout<<7-b<<endl;
        }
        
    }
    
    return 0;
}
