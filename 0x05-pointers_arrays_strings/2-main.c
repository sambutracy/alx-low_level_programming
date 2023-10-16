#include "main.h"
#include <stdio.h>

/**
 * main - checks code
 *
 * Return: 0 if successful
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
