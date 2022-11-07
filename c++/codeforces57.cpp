#include<iostream>
#include<vector>
#include<string>
#include  <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s1;
    string s2;
    for (int i = 0; i < t; i++)
    {
        cin>>s1;
        cin>>s2;
        vector<int> v1;
        int e=0;
        for (int j = 0; s2[j]!='\0'; j++)
        {
            for (int k = 0; s1[k]!='\0'; k++)
            {
                if(s1[k]==s2[j])
                {
                    v1.push_back(k+1);
                    k=0;
                    break;
                }
            }
            
        }

        int d;
        for (int j = 0; j < (v1.size())-1; j++)
        {
            d = v1[j]-v1[j+1];
            if (d<0)
            {
                d=d*(-1);
                e=e+d;
            }else
            {
                e=e+d;
            }
            
        }
        
        cout<<e<<endl;
    }
    
    return 0;
}