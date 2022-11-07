#include<iostream>
using namespace std;

int main()
{
    int t, h, m;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>h>>m;
        int e=23-h;
        int f=60-m;
        int g=(e*60)+f;
        cout<<g<<endl;
    }
    
    return 0;
}
