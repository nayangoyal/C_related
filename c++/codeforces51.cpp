#include<iostream>
using namespace std;

int main(){
    int n, a, b;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        if ((a*2)>b)
        {
            cout<<-1<<" "<<-1;
        }else
        {
            cout<<a<<" "<<2*a;
        }
    
    }
    return 0;
}