#include<stdio.h>
int main()
{
    int iFirst = 0, iSecocnd = 1, iThird = 0, iNo = 0;
    printf("Enter total numbers\n");
    scanf("%d", &iNo);
    for (int i = 0; i < iNo; i++)
    {
        printf("%d\t", iFirst);
        iThird = iFirst + iSecocnd;
        iFirst = iSecocnd;
        iSecocnd = iThird;
    }
    return 0;
}