#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Defines the entry point
 * Return: success
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
