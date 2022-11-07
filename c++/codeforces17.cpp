#include<iostream>
using namespace std;

int main()
{
    long long n,k;
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>k;
        long long e=n*k;
        e=e-1;
        long long f=e/(n-1);
        cout<<f<<endl;
    }
    
    
    return 0;
}
