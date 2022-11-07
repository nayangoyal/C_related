#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    vector<string> a(m);
    vector<string> b(m);
    string s1, s2;
    for (int i = 0; i < m; i++)
    {
        cin>>s1;
        cin>>s2;
        a.push_back(s1);
        b.push_back(s2);
    }
    
    string s3;
    for (int i = 0; i < n; i++)
    {
        cin>>s3;
        vector<string>::iterator iter = find(a.begin(), a.end(), s3);
        if (iter != a.end())
        {
            int d=(iter-a.begin());
            int e=a[d].length();
            int f=b[d].length();
            if (e<=f)
            {
                cout<<a[d]<<endl;
            }else
            {
                cout<<b[d]<<endl;
            }
            
        }
        
    }
    
    return 0;
}