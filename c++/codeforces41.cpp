#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    char a[7];
    for (int i = 0; i < t; i++)
    {
        cin>>a;
        int c=0, d=0;
        for (int j = 0; j<3; j++)
        {
            c=c+a[j];
        }
        for (int j = 3; j < 6; j++)
        {
            d=d+a[j];
        }

        if (d==c)
        {
            cout<<"YES"<<endl; 
        }else
        {
            cout<<"NO"<<endl;
        }
        
        
        
        
    }
    
    return 0;
}

