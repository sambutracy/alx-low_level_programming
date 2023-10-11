#include <unistd.h>

/**
 * _putchar -it writes char to stdout
 * @c: the character to print
 *
 * Return: On success, 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
