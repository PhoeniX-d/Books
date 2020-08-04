#include<stdio.h>
#include<ctype.h>
#define BUFF	50
int main()
{
	FILE *fp = NULL;
	char c[BUFF];
	fp = fopen("sample.dat", "r+");
	if(fp == NULL)
	{
		printf("Cannot open file!\n");
		fclose(fp);
		return 1;
	}
	while(gets(c) != NULL)
	{
		fprintf(fp, "%s",c);
	}
	fclose(fp);
	return 0;
}
