#include<stdio.h>
#define MAXSTR      80
int main()
{
    int i = 0;
    char s[MAXSTR];
    printf("Enter the String\n");
    while((s[0] = getchar()) != '*')
    {
        for (i = 1; (s[i] = getchar()) != '\n'; i++)
            ;
        printf("Converted :\n");
        for (int j = 0; j < i; j++)
        {
            if(s[j] >= 'a' && s[j] <= 'z')
            {
                s[j] = s[j] - 32;
            }
            putchar(s[j]);
        }
        printf("\nEnter the String\n");
    }
    return 0;
}