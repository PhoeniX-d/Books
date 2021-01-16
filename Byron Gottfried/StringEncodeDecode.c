#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TLENGTH     10
int main()
{
    char cTimeHr[TLENGTH],cTimeMil[TLENGTH -2],c = '\0';
    
    int iCnt = 0,iH1 = 0, iH2 = 0, iHH[3];
    printf("Enter the Time in 12Hr format\n");
    while((c = getchar()) != '\n')
    {
        cTimeHr[iCnt++] = c;
    }
    printf("%d\n", iCnt);
    if(cTimeHr[iCnt - 1] == 'M' && (cTimeHr[iCnt - 2] == 'A' || cTimeHr[iCnt - 2] == 'P'))
    {
        for (int i = 0,j = 0; i < iCnt && j < 3; i = i + 3, j++)
        {
            iH1 = (int)cTimeHr[i + 1] - '0';
            iH2 = (int)cTimeHr[i] - '0';
            iHH[j] = (iH2 * 10) + (iH1 % 10);
            printf("i = %d\n", i);
            printf("j = %d\n", j);
            printf("j = %d\n", iHH[j]);
        }        
    }
    return 0;
}