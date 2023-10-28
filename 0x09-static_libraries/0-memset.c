#include "main.h"

/**
 * _memset - to fill a block of memory with a specific value
 * @s: function to start address of memory to be filled
 * @b: funtion for the desired value
 * @n: number of bytes
 *
 * Return: new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
