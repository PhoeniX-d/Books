/* program to calculate volume and area of sphere */
#include <stdio.h>
#define PI      (22/7)

int main()
{
    float fVol, fArea, fRadius;
    printf("Enter the radius pf sphere\n");
    scanf("%f", &fRadius);
    if(fRadius < 0)
    {
        fRadius = -fRadius;
    }

    fVol = (4.0 / 3.0) * PI * fRadius * fRadius * fRadius;
    fArea = 4.0 * PI * fRadius * fRadius;

    printf("Volume of sphere %5.4f\n", fVol);
    printf("Area of sphere %5.4f\n", fArea);
    return 0;
}