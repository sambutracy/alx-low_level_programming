#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = 0;
	int s = n;

	for (; t < s; t++)
	{
		dest[t] = src[t];
		n--;
	}
	return (dest);
}
