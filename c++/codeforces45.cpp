#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    if (n%2==0)
    {
        int v=n/2;
        while (v%m!=0&&v<=n)
        {
            v++;
        }
        if (v<=n)
        {
            cout<<v;
        }else
        {
            cout<<-1;
        }
        
    }else
    {
        int v=(n-1)/2;
        v=v+1;
        while (v%m!=0&&v<=n)
        {
            v++;
        }
        if (v<=n)
        {
            cout<<v;
        }else
        {
            cout<<-1;
        }
    }
    
    return 0;
}
