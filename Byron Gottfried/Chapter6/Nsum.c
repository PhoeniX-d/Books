#include<stdio.h>
#define     MAX     100
int main()
{
    int iCnt = 0, iN = 0, iNstart = 0, iNstop = 0,iSum = 0;
    printf("Enter the value of nstart\t");
    scanf("%d", &iNstart);
    printf("Enter the value of nstop\t");
    scanf("%d", &iNstop);
    iN = iNstart;

    for (iCnt = iNstart; iCnt <= iNstop; iCnt = iCnt + iN)
    {
       iSum = iSum + iCnt;
    }
    printf("Using for Loop %d\n",iSum);

    iSum = 0;
    iCnt = iNstart;
    do
    {
        iSum = iSum + iCnt;
        iCnt = iCnt + iN;
    } while (iCnt <= iNstop);
    printf("\nUsing do-while Loop %d\n",iSum);

    iSum = 0;
    iCnt = iNstart;
    while (iCnt <= iNstop)
    {
        iSum = iSum + iCnt;
        iCnt = iCnt + iN; 
    }
     printf("\nUsing while Loop %d\n",iSum);
    return 0;
}