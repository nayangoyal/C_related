#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int n;
	    cin>>n;
	    vector<int> v1(n);
	    for(int j=0; j<n; j++)
	    {
	        cin>>v1[i];
	    }
        sort(v1.begin(), v1.end());
        vector<int> v2(n);
        for (int j = 0; j < n; j++)
        {
            int target = v1[i];
            int res=count(v1.begin(), v1.end(), target);
            v2[i]=res;
        }
        int r = *max_element(v2.begin(), v2.end());
        cout<<n-r<<endl;
        

	}
	return 0;
}