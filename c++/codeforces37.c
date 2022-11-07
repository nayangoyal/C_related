#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char a[51];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", a);
        int d=0;
        for (int j = 0; a[j]!='\0'; j++)
        {
            if (a[j]=='B')
            {
                d++;
            }
            
        }
        int l1=strlen(a);
        if (d*2==l1)
        {
            printf("YES\n");
        }else
        {
            printf("NO\n");
        }
        
        
    }
    
    return 0;
}
