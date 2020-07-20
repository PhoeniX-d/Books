#include<stdio.h>
#define MAXLINE     80
int main()
{
    char cLine[MAXLINE];
    int iCnt;
    printf("Enter the line \n");
    scanf("%[^\n]", cLine);
    for (iCnt = 0; cLine[iCnt] != '\0'; iCnt++)
    {
        if (
            ( cLine[iCnt] >= 'a' && cLine[iCnt] < 'z') || 
            ( cLine[iCnt] >= 'A' && cLine[iCnt] < 'Z') || 
            ( cLine[iCnt] >= '0' && cLine[iCnt] < '9')
           )
           {
               cLine[iCnt] = cLine[iCnt] + 1;
           }
           else if(cLine[iCnt] == 'z')
           {
                cLine[iCnt] = 'a';
           }
            else if (cLine[iCnt] == 'Z')
           {
                cLine[iCnt] = 'A';
           }
           else if(cLine[iCnt] == '9')
           {
                cLine[iCnt] = '0';
           }
           else
           {
               cLine[iCnt] = '.';
           }
           putchar(cLine[iCnt]);
    }
        return 0;
}