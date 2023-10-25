#include "main.h"

/**
 * _print_rev_recursion - main function
 * @s: a funtion parameter
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* Base case*/
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s); /* Print the current character*/
}
