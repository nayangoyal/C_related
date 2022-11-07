#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    sort(b, b+n);
    long long e = b[n-1]-b[0];
    cout<<e<<" ";
    long long d=1;
    for (int i = 1; i<n; i++)
    {
        if(b[0]==b[i])
        {
            d++;
        }else
        {
            break;
        }    
    }
    
    long long f=1;
    for (int i = n-2; i>=0; i--)
    {
        if(b[n-1]==b[i])
        {
            f++;
        }else
        {
            break;
        }    
    }
    if (b[0]==b[n-1])
    {
        cout<<(n*(n-1))/2;
    }else
    {
        cout<<f*d;
    }
    
    return 0;
}