#include<stdio.h>

int main()
{
	int a, b, c;
	char s[20];
	printf("Output of 1_Demonstration_scanf\n");
	printf("Input : \n");
	scanf("%[^\n]",s);
	scanf("%3d %3d %3d", &a, &b, &c);
	printf("Output for : %s :\t",s);
	printf("%d %d %d\n",a, b, c);
	return 0;
}