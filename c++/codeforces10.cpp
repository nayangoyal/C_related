#include<iostream>
using namespace std;

int main()
{
    int t ,n, m;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>m;
        int min=2;
        if (min>(n-1))
        {
            min = n-1;
        }
        cout<<min*m<<endl;
        
    }
    
    return 0;
}
