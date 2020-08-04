#include<stdio.h>
#include<ctype.h>

int main()
{
	FILE *fp = NULL;
	char c;
	fp = fopen("sample.dat", "r");
	if(fp == NULL)
	{
		printf("Cannot open file!\n");
		fclose(fp);
		return 1;
	}
	do
	{
		putchar(tolower(c = getc(fp)));
	}while(c != EOF);
	fclose(fp);

	return 0;
}
