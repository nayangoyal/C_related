#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char a[101], b[101];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", a, b);
        int l1= strlen(a);
        int d=0;
        if (l1>1)
        {
            for (int j = 0; j < l1; j++)
            {
                int c=0;
                for (int k = 0; k < l1; k++)
                {
                    if (a[j]==b[k])
                    {
                        c++;
                    }
                    
                }
                if (c>=2)
                {
                    printf("YES\n");
                    break;
                }else
                {
                    d++;
                }
                
                
                
                
            }
            if (d==l1)
            {
                printf("NO\n");
            }
            
            
        }else
        {
            printf("NO\n");
        }
        
            
        
        
    }
    
    return 0;
}
