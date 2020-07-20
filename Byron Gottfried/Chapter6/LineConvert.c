#include<stdio.h>
#include<ctype.h>

#define MAXLINE 80

int main()
{
    int i = 0;
    char s[MAXLINE];
    printf("Enter the string\n");
    scanf("%[^\n]", s);
    printf("To lower case\n");
    while(s[i] != '\0')
    {
        putchar(tolower(s[i]));
        i++;
    }
    i = 0;
    printf("\nToggle case\n");
    while(s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            putchar(s[i] - 32);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            putchar(s[i] + 32);
        }
        else if(s[i] >= '0' && s[i] <= '9')
        {
            putchar('0');
        }
        else 
        {
            putchar('*');
        }
        i++;
    }
    
    return 0;
}