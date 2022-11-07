#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        cin>>a[i];
    }
    // int b[t];
    int e=1, j=0;
    for (int i = 0; i < t-1; i++)
    {
        if (a[i]<a[i+1])
        {
            e=e+1;
        }else
        {
            if (j<e)
            {
                j=e;
                e=1;
            }else
            {
                e=1;
            }
            
        }
        
    }
    if (j<e)
    {
        j=e;
    }
    
    
    // sort(b, b+j);
    cout<<j;
    return 0;
}