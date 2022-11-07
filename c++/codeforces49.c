#include<stdio.h>
#include<string.h>

int main()
{
    char given[3];
    scanf("%s", given);
    char s1[3],s2[3],s3[3],s4[3],s5[3];
    scanf("%s %s %s %s %s", s1, s2, s3, s4, s5);
    int k=0;
    for (int i = 0; given[i]!='\0'; i++)
    {
        if (given[i]==s1[i])
        {
            printf("YES");
            break;
        }

        if (given[i]==s2[i])
        {
            printf("YES");
            break;
        }

        if (given[i]==s3[i])
        {
            printf("YES");
            break;
        }

        if (given[i]==s4[i])
        {
            printf("YES");
            break;
        }

        if (given[i]==s5[i])
        {
            printf("YES");
            break;
        }
        k++;
    }
    
    if (k==2)
    {
        printf("NO");
    }
    
    return 0;
}
