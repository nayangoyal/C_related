#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n; 
    if(n%2==0)
    {   
        while(n--)
        {   
            cout<<n+1<<" ";
        }
    }else
    {   
        cout<<"-1";
    }

    return 0;    
}