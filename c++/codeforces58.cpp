#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        vector<int> v1;
        int v2[n];
        for (int j = 0; j < n; j++)
        {
            cin>>v1[j];
            v2[j] = v1[j];
        }
        sort(v2, v2+n);
        int min = v2[0];
        int max = v2[n-1];

        int *p1 = &v1[0];
        int *p2 = &v2[n-1];
        int k=0;
        int f=0;
        vector<int> a;
        for (int j = 0; j < n; j++)
        {
            if (v1[j]==min)
            {
                a.push_back(k);
            }else
            {
                k++;
            }
            if(v1[n-1-j]==min)
            {
                a.push_back(f);
            }else
            {
                f++;
            }
            
        }
        vector<int> b;
        int k=0, f=0;
        for (int j = 0; j < n; j++)
        {
            if (v1[j]==max)
            {
                b.push_back(k);
            }else
            {
                k++;
            }
            if(v1[n-1-j]==max)
            {
                b.push_back(f);
            }else
            {
                f++;
            }
            
        }
    }
    
    return 0;
}