#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n, x1, y1, x2, y2;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x1>>y1;
        cin>>x2>>y2;

        // int c=sqrt(pow((x2-x1), 2)+pow((y2-y1), 2));
        int c=0;
        if ((x2-x1)>0)
        {
            if ((y2-y1)>0)
            {
                c=(x2-x1)+(y2-y1);
            }else
            {
                c=(x2-x1)-(y2-y1);
            }
            
        }else
        {
            if ((y2-y1)>0)
            {
                c=(-1*(x2-x1))+(y2-y1);
            }else
            {
                c=(-1*(x2-x1))-(y2-y1);
            }
        }
        
        if (c%2==0)
        {
            cout<<"YES"<<endl;
            
        }else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}
