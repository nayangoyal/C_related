#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long x,y,a,b;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
        cin>>a>>b;

        if (x>y)
        {
            long long e=y*b;
            long long f=(x-y)*a;
            long long k=e+f;
            long long g=(x+y)*a;
            if (g<k)
            {
                cout<<g<<endl;
            }else
            {
                cout<<k<<endl;
            }
            
        }else
        {
            long long e=x*b;
            long long f=(y-x)*a;
            long long k=e+f;
            long long g=(x+y)*a;
            if (g<k)
            {
                cout<<g<<endl;
            }else
            {
                cout<<k<<endl;
            }
        }
        
    }
    
    return 0;
}
