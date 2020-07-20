#include<stdio.h>

int main()
{
	int i, j, k;
	
	/*scanf("%d %d %d",&i, &j, &k);
	printf("%d %d %d\n",i, j, k);
	scanf("%d %o %x",&i, &j, &k);
	printf("%d %o %x\n",i, j, k);
	scanf("%x %x %o",&i, &j, &k);
	printf("%x %x %o\n",i, j, k);*/

	scanf("%6d %6d %6d",&i, &j, &k);
	printf("%d %d %d\n",i, j, k);
	scanf("%8d %8o %8x",&i, &j, &k);
	printf("%d %o %x\n",i, j, k);
	scanf("%7x %7x %7o",&i, &j, &k);
	printf("%x %x %o\n",i, j, k);
	
	return 0;
}
/*
147 258 369
183 245 fcb
bee fee 666
*/
/*123456 7 123456
789 1234567 8
6985632 7 4444444
*/