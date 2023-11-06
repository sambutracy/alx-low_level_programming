#include <studio.h>
/**
 * main - entry point
 * Return: 0 on success
 */
int main(void)
{
	const char *filename = __FILE__;

	while (*filename)
	{
		_putchar(*filename);
		filename++;
	}
	_putchar('\n');
	return (0);
}
