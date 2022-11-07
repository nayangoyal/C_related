#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> v1(12);
    for (int i = 0; i < 12; i++)
    {
        cin>>v1[i];
    }
    sort(v1.begin(), v1.end());
    int c=0, d=0, j=12;
    while (c<t)
    {
        // if(c>=t)
        // {
        //     c=c-v1[j];
        //     d=d-1;
        // }else
        // {
            j=j-1;
            d++;
            c=c+v1[j];
        // }
    }
    if (d>12)
    {
        cout<<-1<<endl;
    }else
    {
        cout<<d<<endl;
    }
    
    return 0;
}