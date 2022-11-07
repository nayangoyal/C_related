#include<stdio.h>
#include<stdlib.h>
#include<string.h>





int main()
{
    int t, v;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &v);
        char a[v+1];
        scanf("%s", a);
        int c=0;
        for (int j = 0; a[j]!='\0'; j++)
        {
            if (a[j]=='(')
            {
                c++;
            }else
            {
                if (c!=0)
                {
                    c--;
                }else
                {
                    continue;
                }
                
            }
            
        }
        printf("%d\n", c);

    }
      
    return 0;
}
