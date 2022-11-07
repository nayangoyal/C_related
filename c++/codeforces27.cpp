#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            cin>>a[i];
        }
        for (int k = 0; k < 3; k++)
        {
            for (int j = k+1; j < 3; j++)
            {
                if (a[k]>a[j])
                {
                    int z=a[k];
                    a[k]=a[j];
                    a[j]=z;
                }
                
            }
            
        }
        
        if (a[1] != a[2]) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl << a[0] << " " << a[0] << " " << a[2] << endl;
		}
    

        

    }
    
    return 0;
}
