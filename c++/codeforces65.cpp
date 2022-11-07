#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long long a, b, c;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>a>>b>>c;
        long long e = 2*abs(a-b);
        if (a>e||b>e||c>e)
        {
            cout<<-1<<endl;
        }else
        {
            long long d=(e/2)+c;
            while (d>e)
            {
                d=d-e;
            }
            cout<<d<<endl;
        }
        
    }
    
    return 0;
}