#include<iostream>
using namespace std;

int main ()
{
    int n, m;
    cin>>n>>m;
    char a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    
    int c=0,d=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j]=='W'||a[i][j]=='G'||a[i][j]=='B')
            {
                d++;
            }else
            {
                c++;
            }
            
        }
        
    }
    
    if (d==m*n)
    {
        cout<<"#Black&White";
    }else
    {
        cout<<"#Color";
    }
    
    return 0;
}
