#include "main.h"
#include <stdio.h>

/*
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98];
	char *ptr;
	int t;

	for (t = 0; t < 98 - 1; t++)
	{
		s1[t] = '*';
	}
	s1[t] = '\0';
	printf("%s\n", s1);
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
	printf("%s\n", s1);
	printf("%s\n", ptr);
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
	printf("%s", s1);
	printf("%s", ptr);
	for (t = 0; t < 98; t++)
	{
		if (t % 10)
		{
			printf(" ");
		}
		if (!(t % 10) && t)
		{
			printf("\n");
		}
		printf("0x%02x", s1[t]);
	}
	printf("\n");
	return (0);
}
