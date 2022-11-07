#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        vector<int> v1(n);
        int d=0, c=0;
        int e=0;
        for (int j = 0; j < n; j++)
        {
            cin>>v1[j];
            c=c+v1[j];
            
        }
        if (c<n)
        {
            cout<<1<<endl;
        }else
        {
            if (c>n)
            {
                cout<<c-n<<endl;
            }else
            {
                cout<<0<<endl;
            }
            
        }
        
    }
    
    return 0;
}