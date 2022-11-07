#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;



int main(){
    int t;
    cin>>t;
    string s1;
    cin>>s1;
    // for (int i = 0; i < t; i++)
    // {
    //     int j=i+1;
    //     if ((s1[j]=='1'&&s1[i]=='0')||(s1[j]=='0'&&s1[i]=='1'))
    //     {
    //         s1.erase(i, 2);
    //         t=s1.length();
    //         i=-1;

    //     }
        
    // }
    // cout<<s1.length();

    int c=0, d=0;
    for (int i = 0; i<t; i++)
    {
        if (s1[i]=='1')
        {
            c++;
        }
        if (s1[i]=='0')
        {
            d++;
        }
    }
    int e = min({c,d});
    cout<<c+d-(2*e);
    return 0;
}