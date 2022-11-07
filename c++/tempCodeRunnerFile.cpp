#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    cin>>s1;
    int c=0;
    int e=0;
    for (int i = 0; s1[i]!='\0'; i++)
    {
        if ((s1[i]=='A'&&s1[i+1]=='B'))
        {
            s1[i]='X';
            s1[i+1]='X';
            c=1;
            break;
        }
        
        
    }
    
    for (int i = 0; s1[i]!='\0'; i++)
    {
        if ((s1[i]=='B'&&s1[i+1]=='A'))
        {
            s1[i]='X';
            s1[i+1]='X';
            e=1;
            break;
        }
        
        
    }

    if (c==1&&e==1)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }
    
    return 0;
}