#include<stdio.h>
#include<ctype.h>

int main()
{
	FILE *fp = NULL;
	char c;
	fp = fopen("sample.dat", "a");
	if(fp == NULL)
	{
		printf("Cannot open file!\n");
		fclose(fp);
		return 1;
	}
	do
	{
		fputc(toupper(c = getchar()), fp);
	}while(c != '\n');

	fclose(fp);

	return 0;
}
