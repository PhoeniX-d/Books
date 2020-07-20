#include<stdio.h>
#include<math.h>
#define TRUE    1
#define FALSE   0

int main()
{
    int flag = TRUE, cnt = 0;
    float guess, root, test, error;

    printf("Initial guess\n");
    scanf("%f", &guess);
    while(flag)
    {
        cnt++;
        if(cnt == 50)
            flag = FALSE;
        test = 10.0 - 3.0 * guess * guess;
        if(test > 0)
        {
            root = pow(test, 0.2);
            printf("\nIteration no : %2d", cnt);
            printf("    x = %7.5f", root);
            error = fabs(root - guess);
            if(error > 0.00001)
                guess = root;
            else
            {
                flag = FALSE;
                printf("\n\nRoot = %7.5g", root);
                printf("    No. of iterarions %2d", cnt);
            }
        }
        else
        {
            flag = FALSE;
            printf("\nOutof range Try Again Guess!!");
        }
    }
    if(( cnt == 50) && (error > 0.00001))
    {
        printf("Conergence not obtained after 50 iterations\n");
    }
    return 0;
}