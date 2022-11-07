#include<iostream>
using namespace std;
 
int main()
{
    int n, k;
    cin>>n;
    cin>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    // int min=150000;
    int d=1, c=0;
    for (int i = 0; i < k; i++)
    {
        c=c+a[i];
    }
    int min = c;
    for (int i = 0; i < n-k; i++)
    {
        
        c=c-a[i]+a[k+i];
        if (c<min)
        {
            min=c;
            d=i+2;
        }
        
    }
    cout<<d;
    
    return 0;
}