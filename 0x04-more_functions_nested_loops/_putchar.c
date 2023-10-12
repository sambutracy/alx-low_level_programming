#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The charactr to print
 *
 * Return: If true 1
 * if there's an error, -1 and error set
 */
int _putchar(char c)
{
	return (write(1,&c, 1));
}
