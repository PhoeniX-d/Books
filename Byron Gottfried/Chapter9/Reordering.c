/* Program to reorder numbers in decreasing order */

#include<stdio.h>

void Reorder(float[], int);
int main()
{
    int iNo = 0, i = 0;
    float *fArr = NULL;

    printf("How many numbers you want\n");
    scanf("%d", &iNo);
    fArr = (float *)malloc(sizeof(float) * iNo);
    printf("Enter the numbers\n");
    for (i = 0; i < iNo; i++)
    {
        scanf("%f", &fArr[i]);
    }

    printf("Entered Elements\n");
    for (i = 0; i < iNo; i++)
    {
        printf("%3g ", fArr[i]);
    }
    printf("\n");
    Reorder(fArr, iNo);
    printf("After reordering Elements are :\n");
    for (i = 0; i < iNo; i++)
    {
        printf("%3g ", fArr[i]);
    }
    printf("\n");

    return 0;
}

void Reorder(float fArr[], int iNo)
{
    char flag;
    int i = 0, j = 0;
    float fTemp = 0.0;
    for (i = 0; i < iNo - 1; i++)
    {
        flag = 0;
        for (j = i + 1; j < iNo; j++)
        {
            if(fArr[i] < fArr[j])
            {
                fTemp = fArr[i];
                fArr[i] = fArr[j];
                fArr[j] = fTemp;
                flag = 1;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
}