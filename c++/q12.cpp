#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        vector<int> v1(n);

        cout<<1<<" ";
        for (int j = 3; j <= n; j++)
        {
            cout<<j<<" ";
        }
        cout<<2<<endl;
    }
    
    return 0;
}