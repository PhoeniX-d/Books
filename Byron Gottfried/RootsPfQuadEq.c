 /* program to find real roots of quadratic equation of form ax^2 + bx + c */
 
#include<stdio.h>
#include<math.h>

int main()
{
    float fa, fb, fc, fd, fX1, fX2, fCal, fTemp1, fTemp2;

    printf("a = ");
    scanf("%f", &fa);
    if(fa == 0)
    {
        printf("ERROR : Please Provide +ve value for a");
        return 1;
    }
    printf("b = ");
    scanf("%f", &fb);
    printf("c = ");
    scanf("%f", &fc);

    printf("You've entered : %gx^2 + %gx + %g\n", fa, fb, fc);
    fTemp1 = fb * fb;
    fTemp2 = 4 * fa * fc;
    fCal = fTemp1 - fTemp2;
    if (fCal < 0)
    {
        fCal = -fCal;
    }
    fd = sqrt(fCal);
    fX1 = (-fb + fd) / ( 2 * fa );
    fX2 = (-fb - fd) / ( 2 * fa );

    printf("real roots of quadratic equarions is\n");
    printf("X1 = %g\n", fX1);
    printf("X2 = %g\n", fX2);

    return 0;
}