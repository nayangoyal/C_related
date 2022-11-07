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
        for (int j = 0; j < n; j++)
        {
            cin>>v1[j];
        }
        sort(v1.begin(), v1.end());

        int d=10;
        int k=0;
        
        d=d-n;
        cout<<3*d*(d-1)<<endl;
    }
    
    return 0;
}