/* convert English to pigltin, one line at a time */

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAXLINE     80
void Initialize(char [], char []);
void AcceptInput(char[]);
int CountWords(char[]);
void Convert(int, char[], char[]);
void Display(char[]);

int main()
{
    char cEng[MAXLINE], cPln[MAXLINE];
    int iWords;

    printf("Welcome\n");
    printf("Type END to exit\n");

    do
    {
        Initialize(cEng, cPln);
        AcceptInput(cEng);

        if(toupper(cEng[0]) == 'E' && toupper(cEng[1]) == 'N' && toupper(cEng[2]) == 'D' )
            break;
        iWords = CountWords(cEng);
        Convert(iWords, cEng, cPln);
        Display(cPln);

    } while (iWords > 0);
   
    return 0;
}

void Initialize(char cEng[], char cPln[])
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < MAXLINE; iCnt++)
    {
        cEng[iCnt] = cPln[iCnt] = ' ';
    }
}
int CountWords(char cEng[])
{
    int iCount = 0;
    for (int i = 0; i < MAXLINE; i++)
    {
        if(cEng[i] == ' ' && cEng[i + 1] != ' ')
        {
            iCount++;
        }
    }
    return iCount;
}
void AcceptInput(char cEng[])
{
    int i = 0;
    char c;

    while((c = getchar()) != '\n')
    {
        cEng[i++] = c;
    }
}
void Convert(int iWords, char cEng[], char cPln[])
{
    int n = 0, i = 0, c1 = 0, c2;

    for (n = 1; n <= iWords; n++)
    {
        i = c1;
        while(cEng[i] != ' ')
        {
            c2 = i++;
        }
        for (i = c1; i < c2; i++)
        {
            cPln[i + (n - 1)] = cEng[i + 1];
        }
        cPln[c2 + (n - 1)] = cEng[c1];
        cPln[c2 + n] = 'a';

        c1 = c2 + 2;
    }
}
void Display(char cPln[])
{
    int i = 0;
    for (i = 0; i < MAXLINE; i++)
    {
        putchar(cPln[i]);
    }
    printf("\n");
}