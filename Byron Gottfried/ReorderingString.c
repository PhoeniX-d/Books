#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXLEN 15
#define MAXSTR 10

void ReorderString(int n, char *x[]);

int main()
{
    int i = 0, n = 0;
    char **x = NULL;
    printf("Enter strings on seperate lines below\n");
    printf("Type \'END\' when finished (max 12)\n");
    x = (char **)malloc(sizeof(char *) * MAXSTR);
    do
    {
        x[n] = (char *)malloc(sizeof(char) * MAXLEN);
        printf("String  %d: ", n + 1);
        scanf("%s", x[n]);
    } while (strcmp(x[n++], "END"));

    ReorderString(--n, x);

    printf("\nReorderd list of strings\n");
    for (i = 0; i < n; i++)
    {
        printf("\nString %d:%s", i + 1, x[i]);
    }
    return 0;
}

void ReorderString(int n, char *x[])
{
    char *temp;
    int i, item;
    for (item = 0; item < n - 1; item++)
        for (i = item + 1; i < n; ++i)
        {
            if(stricmp(x[item], x[i]) > 0)
            {
                temp = x[item];
                x[item] = x[i];
                x[i] = temp;
            }
        }
}