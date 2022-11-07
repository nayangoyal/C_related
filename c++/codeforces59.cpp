//============================================================================
// Name        : 1st_ques.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		cin>>n;
		int a[n];
		int p, q;
		for(int j=0; j<n; j++)
		{
			cin>>a[j];
			if(a[j]==1)
			{
				p=j+1;
			}
			if(a[j]==n)
			{
				q=j+1;
			}
		}
		int r=n-p+1;
		int s=n-q+1;
		int e=max({p,q});
		int f=max({r,s});
        int g=min({p,q})+min({r,s});
        cout<<min({e,f,g})<<endl;
        
	}
	return 0;
}
