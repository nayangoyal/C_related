#include<iostream>
using namespace std;

int main()
{
    int Y, W;
    cin>>Y;
    cin>>W;
    int d=1, c=0;
    while (d<=6)
    {
        if (W>Y)
        {
            if (d>=W)
            {
                c++;
            }
            
        }else
        {
            if (Y>=W)
            {
                if (d>=Y)
                {
                    c++;
                }
            }
        }
        
        d++;
        
    }

     if (c==0)
     {
        cout<<"0/1";
     }else
     {
        if (c==1)
        {
            cout<<"1/6";
        }else
        {
            if (c==5)
            {
                cout<<"5/6";
            }else
            {
                if (c==4)
                {
                    cout<<"2/3";
                }else
                {
                    int e=6/c;
                    cout<<"1/"<<e;
                }
                
            }
            
        }
        
     }
        
    return 0;
}
