#include <stdio.h>
#include "main.h"
/**
 * _putchar - to write the char c to stdout
 * @c: The char to print
 *
 * Return: 1 On success
 * On error, -1 returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
