#include<stdio.h>

typedef struct hello
{
	int i;
	int j;
}Hello;
int main()
{
	Hello h1 = {11, 21};
	Hello h2 = h1;
	printf("h1.i = %d , h1.j = %d\n",h1.i, h1.j);
	printf("h2.i = %d , h2.j = %d\n",h2.i, h2.j);
	return 0;
}