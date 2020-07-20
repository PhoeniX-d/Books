#include<stdio.h>
int main()
{
	int i = 123;
	float x = 12.0, y = -3.3;
	printf(":%6d:%7.0f:%10.1e:\n",i, x, y);
	printf(":%-6d:%-7.0f:%-10.1e:\n",i, x, y);
	printf(":%+6d:%+7.0f:%+10.1e:\n",i, x, y);
	printf(":%-+6d:%-+7.0f:%-+10.1e:\n",i, x, y);
	printf(":%+-6d:%+-7.0f:%+-10.1e:\n",i, x, y);
	printf(":%+-7.0f:%#7.0f:%7g:%#7g:\n",x, x, y, y);

	return 0;
}

/*
:   123:     12:  -3.3e+00:
:123   :12     :-3.3e+00  :
:  +123:    +12:  -3.3e+00:
:+123  :+12    :-3.3e+00  :
:+123  :+12    :-3.3e+00  :
:+12    :    12.:   -3.3:-3.30000:
*/