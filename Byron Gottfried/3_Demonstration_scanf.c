#include<stdio.h>

int main()
{
	short ix, iy;
	long lx, ly;
	double dx, dy;
	char s[30];

	scanf("%[^\n]",s);
	scanf("%hd %ld %lf",&ix, &lx, &dx);
	printf("Output for : %s \n",s);
	printf("%%hd = %hd %%ld = %ld %%lf = %lf",ix, lx, dx);
	scanf("%3ho %7lx %15le",&iy, &ly, &dy);
	printf("%%3ho = %3ho %%7lx = %7lx %%15le = %15le",iy, ly, dy);
	
	return 0;
}