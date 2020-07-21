#include<stdio.h>
#define MAX     100
int main()
{
    int iNo = 0, i = 0, j = 0,k = 0, iCnt = 0;
    printf("Enter the total prime numbers you want\n");
    scanf("%d", &iCnt);

    for (k = 0; j < iCnt; k++)
    {
        iNo = k;
        for (i = (iNo / 2); i > 1; i--)
        {
            if ((iNo % i) == 0)
            {
                break;
            }
        }
        if(i == 1)
        {
            printf("%d ",iNo);
            j++;
        }   
    }
    return 0;
}