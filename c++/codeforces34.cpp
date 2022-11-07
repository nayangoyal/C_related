#include<iostream>
using namespace std;

int prime(int n)
{
    int m=n/2;
    int c=1;
    for (int i = 2; i <= m; i++)
    {
        if (n%i==0)
        {
           c=0;
           break; 
        }
        
    }
    return c;
}

int main()
{
    int a, b;
    cin>>a>>b;
    if (prime(a)&&prime(b))
    {
        if (b-a==1)
        {
            cout<<"YES";
        }else
        {
            if (b-a==2)
            {
                cout<<"YES";
            }else
            {
                if (b-a==4)
                {
                    int c;
                    for (int i = a+1; i < b; i++)
                    {
                        if (prime(i))
                        {
                            cout<<"NO";
                            break;
                        }
                        c=i;
                    }
                    if (c+1==b)
                    {
                        cout<<"YES";
                    }
                }else
                {
                    if (b-a==6)
                    {
                        int c;
                        for (int i = a+1; i < b; i++)
                        {
                            if (prime(i))
                            {
                                cout<<"NO";
                                break;
                            }
                            c=i;
                        }
                        if (c+1==b)
                        {
                            cout<<"YES";
                        }    
                    }else
                    {
                        cout<<"NO";
                    }
                    
                }
                
            }
            
        }
        
    }else
    {
        cout<<"NO";
    }
        
    return 0;
}
