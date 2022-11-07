#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    char a[101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", a);
        int l1 = strlen(a);
        if (l1%2!=0)
        {
            printf("NO\n");
        }else
        {
            char st1[101], st2[101];
            int mid = l1/2;
            int j=0,k=0;

            for(j = 0; j < mid; j++) {
                st1[j]= a[j];
            }
            st1[j] = '\0';

            for(j = mid, k = 0; j <= l1; j++, k++) {
            st2[k]= a[j];
            }
            if (strcmp(st1, st2)==0)
            {
                printf("YES\n");
            }else
            {
                printf("NO\n");
            }
            
        }
            
    }
        
        
    
    
    return 0;
}
