#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        long long n, q;
        cin>>n>>q;
        vector<int> v1(n);
        int e=0; 
        int o=0;
        long long c=0;
        for (int j = 0; j < n; j++)
        {
            cin>>v1[j];
            if (v1[j]%2!=0)
            {
                o=o+1;
            }else
            {
                e=e+1;
            }
            c=c+v1[j];
        }
        
        vcetor<int> v2(q);
        vcetor<int> v3(q);

        for (int j = 0; j < q; j++)
        {
            cin>>v2[j]>>v3[j];
            if (v2[j]==0)
            {
                if (v1[k]%2==0)
                {
                    c=c+e*v3[j]+o;
                }else
                {
                    c=c+e*v3[j]+o;
                    o=o+e;
                    e=0;
                }
                cout<<c<<endl;
                
            }else
            {
                
                if (v1[k]%2!=0)
                {
                    c=c+o*v3[j]+e;
                    e=e+o;
                    o=0;
                }else
                {
                    c=c+o*v3[j]+e;
                }
                cout<<c<<endl;
            }
            
        }
        

    }
    
    return 0;
}