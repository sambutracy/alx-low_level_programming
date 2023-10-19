#include "main.h"

/* 
 * _strcat - it concentrates 2 strings
 * @dest: This is an input value
 * @src: this is an input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int t;
	int j;

	t = 0;

	while (dest[t] != '\0')
	{
		t++;
	}
	
	j = 0;
	while (src[j] != '\0')
	{
		dest[t] = src[j];
		t++;
		j++;
	}

	dest[t] = '\0';
	
	return (dest);
}
