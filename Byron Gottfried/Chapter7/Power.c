#include<stdio.h>

double Power(double fNum, int iPow);

int main()
{
    double dNum = 0.0, dAnswer = 0.0;
    int iPow = 0;
    printf("Enter the Number\n");
    scanf("%lf", &dNum);
    printf("Enter the power\n");
    scanf("%d", &iPow);
    dAnswer = Power(dNum, iPow);
    printf("Answer is = %g\n", dAnswer);
    return 0;
}

double Power(double dNum, int iNum)
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