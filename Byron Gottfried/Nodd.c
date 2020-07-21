#include<stdio.h>
#define MAX     100
int main()
{
    int j = 0,k = 0, iCnt = 0;
    printf("Enter the total prime numbers you want\n");
    scanf("%d", &iCnt);

    for (k = 2; j < iCnt; k++)
    {
        if(k % 2 != 0)
        {
            printf("%d ", k);
            j++;
        }
    }
    return 0;
}