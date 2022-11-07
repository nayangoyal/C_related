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
	    vector<int> v3(a);
	    for(int j=0; j<a; j++)
	    {
	        cin>>v1[j];
            v3[j]=v1[j];
	    }
	    vector<int> v2(a);
        for (int j = 0; j < a; j++)
        {
            int target = v1[j];
            int res=count(v1.begin(), v1.end(), target);
            v2[j]=res;
        }
        int r = *max_element(v2.begin(), v2.end());
        int k=a-1;
        int e=0;
        for(int j=0; j<a/2; j++)
        {
            if(v1[k]!=v1[j])
            {
                e=1;
                break;
                
            }else
            {
                k--;
            }
            
        }
        if(e==0)
        {
            cout<<0<<endl;
        }else
        {
            if (r<2)
            {   sort(v3.begin(), v3.end());
                int d=0;
                for (int j = 0; j < a; j++)
                {
                    if(v3[j]!=v1[j])
                    {
                        d++;
                        break;
                    }
                }
                if (d!=0)
                {
                    cout<<"-1"<<endl;
                }else
                {
                    cout<<a-1<<endl;
                }
            
            }else
            {
                sort(v3.begin(), v3.end());
                int d=0;
                for (int j = 0; j < a; j++)
                {
                    if(v3[j]!=v1[j])
                    {
                        d++;
                        break;
                    }
                }
                if (d!=0)
                {
                    cout<<"-1"<<endl;
                }else
                {
                    int max1 = *max_element(v1.begin(), v1.end());
                    int min1 = *min_element(v1.begin(), v1.end());
                    cout<<max1-min1<<endl;
                }
            }
        }
        
                
	}
    return 0;
}