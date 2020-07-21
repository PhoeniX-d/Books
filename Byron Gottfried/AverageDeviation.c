/* Program to find average and deviation */
#include<stdio.h>
#include<stdlib.h>

float fAvg = 0.0, fSum = 0.0;
void DisplayDeviation(float [], int);
void CalcAverage(float[], int);

int main()
{
    int iNo = 0, i = 0;
    float *fArr = NULL;
    printf("Enter the total number of elements\n");
    scanf("%d", &iNo);
    
    fArr = (float *)malloc(sizeof(float) * iNo);
    printf("Enter the numbers\n");
    for (i = 0; i < iNo; i++)
    {
        scanf("%f", &fArr[i]);
    }
    printf("\n")
    CalcAverage(fArr, iNo);
    DisplayDeviation(fArr, iNo);
    free(fArr);
    return 0;
}

void CalcAverage(float fArr[], int iNo)
{
    float fSum = 0.0;
    if(fArr == NULL)
        return;
    for (int i = 0; i < iNo; i++)
    {
        fSum = fSum + fArr[i];
    }
    fAvg = fSum / iNo;
    printf("Average is %5.3f\n", fAvg);
}

void DisplayDeviation(float fArr[], int iNo)
{
    float fDev = 0.0;
    int i = 0;
    printf("\nNumbers\t\tDevitions:\n");
    for (i = 0; i < iNo; i++)
    {
        fDev = fArr[i] - fAvg;
        printf("%g\t\t%f\n",fArr[i], fDev);
    }

}
