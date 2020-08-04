#include<stdio.h>
#include<ctype.h>

int main()
{
	FILE *fp = NULL;
	char c;
	fp = fopen("sample.dat", "w+");
	if(fp == NULL)
	{
		printf("Cannot open file!\n");
		fclose(fp);
		return 1;
	}
	do
	{
		putc(toupper(c = getchar()), fp);
	}while(c != '\n');

	fclose(fp);

	return 0;
}
