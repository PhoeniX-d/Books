#include<stdio.h>

float Average(int);

int main()
{   
    float fRet = 0.0;
    int iNum = 0;
    printf("Enter the total numbers\n");
    scanf("%d", &iNum);
    fRet = Average(iNum);
    printf("Average of %d is %f\n", iNum, fRet);
    return 0;
}

float Average(int iNum)
{
    float fSum = 0.0, x = 0.0;
    int iNo = iNum;
    while(iNum != 0)
    {
        printf("x = ");
        scanf("%f", &x);
        fSum = fSum + x;
        iNum--;
    }

    return fSum/iNo;
}