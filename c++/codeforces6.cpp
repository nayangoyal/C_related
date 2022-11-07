#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n, v;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>v;
        int c=0;
        for (int j = 1; j <= (v/2)-1; j++)
        {
            c=c+pow(2,j);
        }
        c=c+pow(2,v);
        int d=0;
        for (int j = v/2; j <=v-1; j++)
        {
            d=d+pow(2,j);
        }
        cout<<c-d<<endl;
    }
    
    return 0;
}
