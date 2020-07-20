#include <stdio.h>

int main() /* use of flags with unsigned decimal, octal and hexadecimal numbers */
{
	int i = 1234, j = 01777, k = 0xa08c;
	printf(":%8u:%8o:%8x:\n", i, j, k);
	printf(":%-8u:%-8o:%-8x:\n", i, j, k);
	printf(":%#8u:%#8o:%#8X:\n", i, j, k);
	printf(":%08u:%08o:%08X:\n", i, j ,k);
	return 0;
} 

/* 

:    1234:    1777:    a08c:
:1234    :1777    :a08c    :
:    1234:   01777:  0XA08C:
:00001234:00001777:0000A08C:
 
*/