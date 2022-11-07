#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        int e=0;
        for (int j = 0; j < s1.length(); j++)
        {
            
            if (s1[j]!=s2[j])
            {
                if ((s1[j]=='G'&&s2[j]=='B')||(s2[j]=='G'&&s1[j]=='B'))
                {
                    continue;
                }else
                {
                    e=1;
                    break;
                }
            }
            
            if(e==1)
            {
                break;
            }
        }
        if (e==1)
        {
            cout<<"NO"<<endl;
        }else
        {
            cout<<"YES"<<endl;
        }
        
        
    }
    
    return 0;
}