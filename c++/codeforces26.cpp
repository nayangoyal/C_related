#include<iostream>
using namespace std;

int main()
{
    int t, a, b;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>a>>b;

        int c=1, d=2, j=1, e=1;
        while (a>c&&a>d)
        {
            c=d+1;
            d=(j*b)+2;
            e++;
            j++;
            
        }
        cout<<e<<endl;
    }
    
    return 0;
}
