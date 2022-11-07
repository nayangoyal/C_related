#include<stdio.h>
#include<string.h>

int main()
{
    char b[]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    char a;
    char c[101];
    scanf("%c", &a);
    if (a=='R')
    {
        scanf("%s", c);
        for (int i = 0; c[i]!='\0'; i++)
        {
            for (int j = 0; j < 30; j++)
            {
                if (c[i]==b[j])
                {
                    printf("%c", b[j-1]);
                }   
            }
        }
        
    }else
    {
        scanf("%s", c);
        for (int i = 0; c[i]!='\0'; i++)
        {
            for (int j = 0; j < 30; j++)
            {
                if (c[i]==b[j])
                {
                    printf("%c", b[j+1]);
                }   
            }
        }
    }
    
    return 0;
}
