#include <iostream>
using namespace std;

int binary_search(int arr[], int x, int low, int high)
{
    if(low>high)
    {
        return 0;
    }else
    {
        int mid=(low+high)/2;
        if(x==arr[mid])
        {
            return mid;
        }else
        {
            if (x<arr[mid]&&x>arr[mid-1])
            {
                return mid;
            }else
            {
                if (x>arr[mid])
                {
                    return binary_search(arr, x, mid+1, high);
                }else
                {
                    return binary_search(arr, x, low, mid-1);
                }
                
            }
            
        }
    }


}
int main()
{
    int n;
    cin >> n;
    int a[n], g[n], f = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        f = f + a[i];
        g[i] = f;
    }
    int m, e;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        int e = binary_search(g, b[i], 0, n - 1);
        cout << e + 1 << endl;
    }

    return 0;
}
