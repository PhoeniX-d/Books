#include<stdio.h>

int main()
{
    char text[80];
    int i = 0, limit = 0;
    scanf("%[^\n]", text);
    printf("Encoded String\n");
    for (i = 0; text[i] != '\0';i++)
    {
        putchar(text[i] - 30);
    }
    printf("\nDecoded String\n");
    for (i = 0; text[i] != '\0';i++)
    {
        putchar(text[i]);
    }
    return 0;
}