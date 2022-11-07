#include<iostream>
using namespace std;

int main(){
    int t;
    long long n, k;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n>>k;
        if ((n%2!=0&&k%2==0)||(n%2==0&&k%2!=0))
        {
            cout<<"NO"<<endl;
        }else
        {
            if ((k*k)<=n)
            {
                cout<<"YES"<<endl;
            }else
            {
                cout<<"NO"<<endl;
            }
            
        }
        
    }
    return 0;
}