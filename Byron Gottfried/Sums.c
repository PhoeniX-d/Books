#include<stdio.h>
#define     MAX     100
int main()
{
    int iCnt = 0,iSum = 0;
   
    for (iCnt = 2; iCnt < MAX; iCnt = iCnt + 3)
    {
        iSum = iSum + iCnt;
    }
     printf("Using for Loop %d\n",iSum);
    iCnt = 2;
    iSum = 0;
    do
    {
        iSum = iSum + iCnt;
        iCnt = iCnt + 3;
    } while (iCnt < MAX);
    printf("\nUsing do-while Loop %d\n",iSum);

    iCnt = 2;
    iSum = 0;
    while (iCnt < MAX)
    {
        iSum = iSum + iCnt;
        iCnt = iCnt + 3; 
    }
    printf("\nUsing while Loop %d\n",iSum);
    return 0;
}