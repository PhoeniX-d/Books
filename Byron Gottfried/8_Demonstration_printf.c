#include<stdio.h>
int main()
{
	double x = 5000.0, y = 0.0025;
	printf("%f %f %f %F\n",x, y, x*y, x/y );
	printf("%E %E %E %E\n",x, y, x*y, x/y );
	return 0;
}