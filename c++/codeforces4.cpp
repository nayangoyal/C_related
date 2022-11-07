#include<iostream>
using namespace std;

int main()
{
    int n, v;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>v;
        int z=180-v;
        if(360%z==0)
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
