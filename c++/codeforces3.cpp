#include<iostream>
using namespace std;
 
int main()
{
    int n,v;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>v;
        if(v%2020 == 0 || v%2021 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            while(v>0)
            {
                v=v-2021;
                if(v%2020==0&&v>0)
                {
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(v<0)
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}