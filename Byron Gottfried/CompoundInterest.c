#include<stdio.h>
#include<math.h>
 int main()
 {
    float p = 0.0, r = 0.0, f = 0.0, i = 0.0;
    int n = 0;
    printf("Enter the principle\n");
    scanf("%f", &p);
    if(p < 0)
       p = -p;
       
    while (p != 0)
    {
        printf("Enter the rate\n");
        scanf("%f", &r);
        if(r < 0)
           r = -r;
        printf("Enter the years\n");
        scanf("%d", &n);
        if(n < 0)
           n = -n;
       
        i = r / 100;
        f = p * (pow((1+i), n));

        printf("Compound Interest is %.5f\n",f);
        
        printf("Enter the principle\n");
        scanf("%f", &p);
        if(p < 0)
            p = -p;
    }
     return 0;
 }