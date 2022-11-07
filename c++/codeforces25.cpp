#include<iostream>
using namespace std;


int elem(int row, int col)
{
    if (row == 1 || col == 1)
    {
        return 1;
    }else
    {
        return elem(row - 1, col) + elem(row, col - 1);
    }
}
int main ()
{
    int n;
    cin>>n;
    cout<<elem(n,n);
    // cout<<a[n][n];
    return 0;
}
