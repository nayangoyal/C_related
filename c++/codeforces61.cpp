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
        if (n!=5)
        {
            cout<<"NO"<<endl;
        }else
        {
            int k=0;
            string s1 = "Timur";
            for (int j = 0; s1[j]!='\0'; j++)
            {
                int c=0;
                for (int k = 0; s[k]!='\0'; k++)
                {
                    if (s1[j]==s[k])
                    {
                        break;
                    }
                    c++;
                }
                if (c==5)
                {
                    k=c;
                    cout<<"NO"<<endl;
                    break;
                }
                
                
            }
            if (k!=5)
            {
                cout<<"YES"<<endl;
            }
            
            
            
        }
        
    }
    
    return 0;
}