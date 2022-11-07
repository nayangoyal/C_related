#include<stdio.h>
#include<string.h>

int main()
{
    char a[100001];
    int g[100005];
    scanf("%s", a);
    int n,b,c;
    scanf("%d", &n);
    int k=0;
    for (int i = 1; a[i]!='\0'; i++)
    {
        if (a[i]==a[i-1])
        {
            k++;
        }
        g[i]=k;
    }

    while (n--)
    {
        scanf("%d %d", &b, &c);
        printf("%d\n", (g[c-1]-g[b-1]));
    }
    
    
    return 0;
}
