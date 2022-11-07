#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>a;
        vector<int> v1(a);
        for (int j = 0; j < a; j++)
        {
            cin>>v1[j];
        }
        vector<int> v2(a);
        for (int j = 0; j < a; j++)
        {
            int target = v1[j];
            int res=count(v1.begin(), v1.end(), target);
            v2[j]=res;
        }
        int max1 = *max_element(v2.begin(), v2.end());
        if (max1>1)
        {
            cout<<"NO"<<endl;
        }else
        {
            cout<<"YES"<<endl;
        }
        
    }
    
    return 0;
}