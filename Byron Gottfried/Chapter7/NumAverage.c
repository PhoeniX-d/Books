#include<stdio.h>
/*
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
*/
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

extern double Power(double dNum, int iNum)
{
    int i = 0;
    double dRet = 1.0;
    if(iNum > 0)
    {
        for (i = 1; i <= iNum; i++)
        {
            dRet = dRet * dNum;
        }
    }
    else
    {
        dRet = 1.0;
        for (i = 1; i <= -(iNum);i++)
        {
            dRet = dRet / dNum;
        }
    }
    
    if(dNum == 1.0)
    {
        return 0;
    }
    else
    {
        return dRet;
    }
}