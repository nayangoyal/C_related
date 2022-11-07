#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        vector<int> v1(n);
        vector<int> v2(n);
        for (int j = 0; j < n; j++)
        {
            cin>>v1[j];
            v2[j]=v1[j];

        }
        sort(v2.begin(), v2.end());
        int c=0, e=0;
        int d=0;
        for (int j = 0; j < n; j++)
        {
            if (v2[j]!=v1[j])
            {
                c++;
            }
            
        }
        cout<<c/2<<endl;
         
        
    }
    
    return 0;
}