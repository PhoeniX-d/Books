#include<stdio.h>

int main()
{
	short ix, iy;
	long lx, ly;
	double dx, dy;
	char s[30];

	scanf("%[^\n]",s);
	scanf("%hd %d %lf",&ix, &lx, &dx);
	printf("Output for : %s \n",s);
	printf("%%hd = %hd %%d = %d %%f = %lf\n",ix, lx, dx);
	scanf("%3ho %7X %15le",&iy, &ly, &dy);
	printf("%%3ho = %3ho %%7X = %7X %%15le = %15e\n",iy, ly, dy);
	
	return 0;
}