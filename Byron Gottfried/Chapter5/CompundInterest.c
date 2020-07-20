/* program to find compound interest */
#include<stdio.h>
#include<math.h>

int main()
{
    float fInterest, fRate, fPrinciple, fCI;
    int iYears;

    printf("Enter the principle amount\n");
    scanf("%f", &fPrinciple);
    printf("Enter the Rate of interest\n");
    scanf("%f", &fRate);
    printf("Enter the number of years\n");
    scanf("%d", &iYears);

    fInterest = fRate / 100;
    fCI = fPrinciple *  pow((1 + fInterest), iYears);

    printf("Compound interest is %.3f ", fCI);

    return 0;
}