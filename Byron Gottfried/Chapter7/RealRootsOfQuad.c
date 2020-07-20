#include<stdio.h>
#include<math.h>

void FindRoots(float, float, float);

int main()
{
    float fa = 0.0, fb = 0.0, fc = 0.0;
    printf("Enter the values of a, b, c\n");
    printf("a = "); scanf("%f",&fa);
    printf("b = "); scanf("%f",&fb);
    printf("c = "); scanf("%f",&fc);
    
    printf("Qudratic Equation is\t: %+gx^2 %+gx %+g\n", fa, fb, fc);
    if(fa == 0)
    {
        printf("x^2 term cannot be 0\n");
        return 1;
    }
    FindRoots(fa, fb, fc);
    return 0;
}

void FindRoots(float fa, float fb, float fc)
{
    float fTemp1 = 0.0, fX1 = 0.0, fX2 = 0.0;

    fTemp1 = (fb * fb) - (4 * fa * fc);
    fTemp1 = (fTemp1 < 0) ? -fTemp1 : fTemp1;

    fX1 = (-fb + sqrt(fTemp1)) / 2 * fa;
    fX2 = (-fb - sqrt(fTemp1)) / 2 * fa;

    printf("Real roots of given quation are\nX1 = %5.5f\nX2 = %5.5f\n", fX1, fX2);
}