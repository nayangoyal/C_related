#include<stdio.h>
#include<string.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    char a[n][100];
    for(int i=0; i<n; i++)
    {
        scanf(" %s", a[i]);
    }
    int b[n];
    for (int i = 0; i < n; i++)
    {
        int c=0;
        for (int j = i+1; j < n; i++)
        {
            if (strcmp(a[i],a[j])==0)
            {
                c++;
            }
            
        }
        b[i]=c;
    }
    
    int d, max=0;
    for (int i = 0; i < n; i++)
    {
        if (max<b[i])
        {
            max=b[i];
            d=i;
        }
        
    }
    
    printf("%s", a[d]);
    return 0;
}