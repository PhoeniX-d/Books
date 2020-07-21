#include<stdio.h>
#include<ctype.h>

int main()
{
    char s[80];
    printf("Enter the string\n");
    scanf("%[^\n]",s);
    for (int i = 0; *(s + i) != '\0'; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z' )
            s[i] = (s[i] - 32);
        else if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = (s[i] + 32);
       // s[i] = (isupper(s[i])) ? tolower(s[i]) : toupper(s[i]);
    }
    printf("\n%s\n", s);
    return 0;
}