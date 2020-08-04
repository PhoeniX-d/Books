#include<stdio.h>
#include<math.h>

typedef union
{
	float fexp;
	float nexp;
}nvals;

typedef struct 
{
	float x;
	char flag;
	nvals exp;
}values;

float power(values a);

int main()
{
	values a;
	int i;
	float n, y;

	printf("y = x^n\n\nEnter a value for x : ");
	scanf("%f", &a.x);
	printf("Enter the value of n : ");
	scanf("%f", &n);

	i = (int)n;
	a.flag = (i == n) ? 'i' : 'f';
	if(a.flag == 'i')
		a.exp.nexp = i;
	else
		a.exp.nexp = n;

	if(a.flag == 'f' && a.x < 0.0)
	{
		printf("Error\n");
	}
	else
	{
		y = power(a);
		printf("y = %.5f\n", y);
	}
	return 0;
}

float power(values a)
{
	int i; float y = a.x;
	if(a.flag == 'i')
	{
		if(a.exp.nexp == 0)
		{
			y = 1.0;
		}
		else
		{
			for(i = 1; i < fabs(a.exp.nexp); i++)
			{
				y = y * a.x;
			}
			if(a.exp.nexp < 0)
			{
				y = 1.0/y;
			}
		}
	}
	else
	{
		y = exp(a.exp.fexp * log(a.x));
	}

	return y;
}