#include<iostream>
#include<string>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        string s;
        cin>>s;
        int c=2;
        for (int j = 1; s[j]!='\0'; j++)
        {
            int e=0;
            for (int k = 0; k<j; k++)
            {
                if (s[j]==s[k])
                {
                    c=c+1;
                    break;
                }
                e++;
            }
            if (e==j)
            {
                c=c+2;
            }
            
        }
        cout<<c<<endl;
        
    }
    
    return 0;
}