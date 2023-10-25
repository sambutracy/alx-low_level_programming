#include "main.h"
/**
 * _puts_recursion - the main function
 * @s: the function parameter
 *
 * Return: 0 if successful
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
