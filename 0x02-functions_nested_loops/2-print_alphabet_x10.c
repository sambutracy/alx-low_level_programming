#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * in lower case, then followed by a new line
 *
 * Return: always zero
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
