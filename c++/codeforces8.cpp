#include<iostream>
using namespace std;

int main()
{
    int t,w,h,n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>w>>h>>n;
        int c=1;
        int d=w*h;
        while (d%2==0)
        {
            d=d/2;
            c=c*2;
        }
        if (c>=n)
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    
    return 0;
}
