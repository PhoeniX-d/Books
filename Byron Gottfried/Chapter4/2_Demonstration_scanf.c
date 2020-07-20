#include<stdio.h>

int main()
{
	int i;
	float x;
	char c;

	char s[20];
	
	printf("Output of 2_Demonstration_scanf\n");
	
	printf("Input : \n");
	scanf("%[^\n]",s);
	scanf("%3d %5f %c", &i, &x, &c);

	printf("Output for : %s :\t",s);
	
	printf("%d %f %c\n",i , x, c);
	return 0;
}