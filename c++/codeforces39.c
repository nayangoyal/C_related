#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int t, n, a, b;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &n, &a, &b);
        // char s1[n+1];
        for (int j = 0; j < n; ++j)
        {
            printf("%c", 'a'+j%b);
        }
        printf("\n");
    }
    
    return 0;
}

