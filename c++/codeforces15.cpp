#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0, i=0,g=0;
    while (g<=n)
    {
        c++;
        i=i+c;
        g=i+g;
    }
    cout<<c-1;
    return 0;
}
