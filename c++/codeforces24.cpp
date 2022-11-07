#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a, b,c;
    for (int i = 0; i < t; i++)
    {
        
        cin>>a>>b;
        if (a%2!=0&&b%2!=0)
        {
            c=(a*b)+1;
            c=c/2;
        }else
        {
            c=a*b;
            c=c/2;
        }
        cout<<c<<endl;
    }
    
    return 0;
}
