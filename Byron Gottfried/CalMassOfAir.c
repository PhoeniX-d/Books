 /* calculate mass of air in a tire */
#include<stdio.h>

int main()
{
    float p, v, m, t;
    printf("Enter volume, in cubic feet\n");
    scanf("%f", &v);
    printf("Enter pressure, in psi\n");
    scanf("%f", &p);
    printf("Enter tenperature, in degree F\n");
    scanf("%f", &t);

    m = (p * v) / 0.37 * (t + 460.0);
    printf("Mass of Air is %g pounds \n", m);
    return 0;
}