#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        int e=a-1;
        int f=abs(b-c);
        f=(abs(c-1))+f;
        if (f==e)
        {
            cout<<3<<endl;
        }else
        {
            if (f>e)
            {
                cout<<1<<endl;
            }else
            {
                cout<<2<<endl;
            }
            
        }
        
    }
    
    return 0;
}