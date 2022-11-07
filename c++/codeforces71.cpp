#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int solve(int best, int other1, int other2)
{
    return max(0, max(other1, other2)+1-best);
}

int main(){
    int t;
    cin>>t;
    long long a, b, c;
    for (int i = 0; i < t; i++)
    {
        cin>>a>>b>>c;
        cout<<solve(a,b,c)<<" "<<solve(b, c, a)<<" "<<solve(c, a, b)<<endl;
        
    }
    
    return 0;
}