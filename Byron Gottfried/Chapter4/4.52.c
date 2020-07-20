#include<stdio.h>

int main()
{
	char text[80];
	int i, tag = 0;

	printf("Enter the text\n");
	for(i = 0; (text[i] = getchar()) != '\n' ; i++)
		;
	printf("You've entered\n");
	tag = i;
	for(i = 0; i < tag; i++)
	{
		putchar(text[i]);
	}

	return 0;
}

/*
Enter the text
You've entered
c:\Users\Pranav\Desktop\C\Concepts\Chapter4Sol>.\4.52.exe c
*/