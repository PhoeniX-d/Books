#include<stdio.h>
#include<string.h>
#define MAXLINE            80
#define isalphaX(c)     ((c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')? 1:0)

int main()
{
    char s[MAXLINE],line[MAXLINE];
    int i = 0, j = 0;

    printf("Enter the string\n");
    scanf("%[^\n]", s);
    while(s[i] != '\0')
    {
        if(isalphaX(s[i]))
        {
            if(s[i] >= 'a' && s[j] <= 'z')
            {
                line[j] = s[i] - 32;
            }
            else
            {
                line[j] = s[i];
            }
            j++;
        }
        i++;
    }
    line[j] = '\0';
    printf("%d %d \n", i, j);  
    i = 0;
    j = j - 1;
    for (i = 0; i <= j; i++, j--)
    {
        if (line[i] != line[j]) break;
    }
    printf("%d %d \n", i, j);
    if(i >= j)
    {
        printf("Entered string is palindrome\n%s",s);
    }
    else
    {
        printf("Entered s is not palindrome\n%s", s);
    }
    return 0;
}