#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin>>n>>k;
        int c=0; 
        int d=0;
        vector<int> v1(n);
        for (int j = 0; j < n; j++)
        {
            cin>>v1[j];
            if (v1[j]==1)
            {
                c++;
            }else
            {
                d++;
            }
            
        }
        
        if (d==n)
        {
            cout<<"NO"<<endl;
        }else
        {
            cout<<"YES"<<endl;
        }
        
    }
    
    return 0;
}