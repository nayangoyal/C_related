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
	    for(int j=0; j<n; j++)
	    {
	        cin>>a[j];
	    }
	    if(n%2!=0)
	    {
	        cout<<"NO"<<endl;
	    }else
	    {
	        if (n==2)
            {
                cout<<"YES"<<endl;
            }else
            {
                sort(a, a+n);
	            int k=0;
	            for(int j=0; j<n; j++)
	            {
                    if (a[j]==a[j+1]&&a[j]==a[j+2])
                    {
                        k=1;
                        cout<<"NO"<<endl;
                        break;
                    }else
                    {
                        if (a[j]==a[j+1])
                        {
                            j=j+1;
                        }
                        
                    }

	            }
	            if(k==0)
	            {
	                cout<<"YES"<<endl;
	            }
            }
            
	    }
	}
	return 0;
}
