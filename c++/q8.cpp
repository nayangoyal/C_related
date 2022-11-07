#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        vector<int> v1(n);
        for (int j = 0; j < n; j++)
        {
            cin>>v1[j];
        }
        string s1;
        cin>>s1;
        int c=0;
        for (int j = 0; j < n; j++)
        {
            for (int k = j; k < n; k++)
            {
                if (v1[j]==v1[k])
                {
                    if (s1[j]==s1[k])
                    {
                        continue;
                    }else
                    {
                        c=1;
                        break;
                    }
                    
                }
                
                if (c==1)
                {
                    break;
                }
                
            }
            
            if (c==1)
            {
                cout<<"NO"<<endl;
                break;
            }
            

        }
        if (c==0)
        {
            cout<<"YES"<<endl;
        }
        
        
    }
    
    return 0;
}