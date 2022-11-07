#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, a;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    cin>>a;
	    vector<int> v1(a);
	    vector<int> v3;
	    for(int j=0; j<a; j++)
	    {
	        cin>>v1[j];
	    }
	    int k=a-1;
	    int r=0;
        vector<int> v2;
        for(int j=0; j<a/2; j++)
        {
            int e=v1[k]-v1[j];
            k=k-1;
            v3.push_back(e);
            v2.push_back(e);

        }
        sort(v2.begin(), v2.end(), greater<int>());
        for (int j = 0; j< v2.size(); j++)
        {
            if (v2[j]!=v3[j])
            {
                cout<<-1<<endl;
                r=1;
                break;
            }
            
        }
        if (r==0)
        {
            if (v3[v3.size()-1]<0)
            {
                cout<<-1<<endl;
            }else
            {
                cout<<v1[a-1]-v1[0]<<endl;
            }
            
        }
        
        
        
    }
    return 0;
}