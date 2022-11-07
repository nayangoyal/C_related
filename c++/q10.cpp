#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        long long n;
        char ch;
        cin>>n;
        cin>>ch;

        int a=0;
        int b=0, max1=0;
        int f=0;
        string s1;
        cin>>s1;
        int c=0;
        string s2;
        s2 = s1+s1;
        for (int j = 0; j< 2*n; j++)
        {
            if (a==1&&s1[j]=='g')
            {
                a=0;
                max1 = j-f;
                b = max(max1, b);
            }
            if (s1[j]==ch&&a==0)
            {
                f=j;
                a=1;
            }
            
            
            

        }
        
        cout<<b<<endl;
    }
    
    return 0;
}