#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n-1],c[n-2];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n-1; i++)
    {
        cin>>b[i];
    }
    sort(b, b + (n-1));
    for (int i = 0; i < n-2; i++)
    {
        cin>>c[i];
    }
    sort(c, c + (n-2));
    int d=0;
    for (int i = 0; i < n-1; i++)
    {
        if (a[i]!=b[i])
        {
            cout<<a[i]<<endl;
            break;
        }
        d++;
    }
    if (d==n-1)
    {
        cout<<a[n-1];
    }
    int e=0;
    for (int i = 0; i < n-2; i++)
    {
        if (b[i]!=c[i])
        {
            cout<<b[i]<<endl;
            break;
        }
        e++;
    }
    if (e==n-2)
    {
        cout<<b[n-2];
    }
    return 0;
}
