#include<stdio.h>

int main()
{
	char line[12] = "lower-case";
	printf(":%15s:%15.5s:%.5s:\n",line, line, line);
	printf(":%-15s:%-15.5s:%-.5s:\n",line, line, line);
	return 0;
}

/*
:     lower-case:          lower:lower:
:lower-case     :lower          :lower:
*/