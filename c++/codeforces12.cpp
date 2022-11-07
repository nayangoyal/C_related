#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a[4];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>a[j];
        }

        int max1, max2;
        if (a[0]>a[1])
        {
            max1=a[0];
        }else
        {
            max1=a[1];
        }

        if (a[2]>a[3])
        {
            max2=a[2];
        }else
        {
            max2=a[3];
        }
        
        for (int j = 0; j < 4; j++)
        {
            for (int k = j+1; k < 4; k++)
            {
                if (a[j]>a[k])
                {
                    int z=a[j];
                    a[j]=a[k];
                    a[k]=z;
                }
            }
        }

        if ((max1==a[3]||max1==a[2])&&(max2==a[3]||max2==a[2]))
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        
        
        
    }
    
    return 0;
}
