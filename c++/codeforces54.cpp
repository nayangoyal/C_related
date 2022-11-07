#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        long long a[n];
        for (int j = 0; j < n; j++)
        {
            cin>>a[j];
        }
        sort(a, a+n);
        long long c=0, b=1;
        for (int j = 1; j < n; j++)
        {
            if (a[c]!=a[j])
            {
                b++;
                c=j;
            }
            
        }
        cout<<b<<endl;
        
    }
    
    return 0;
}