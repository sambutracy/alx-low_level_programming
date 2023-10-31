#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of char
 * @size: input size
 * @c: input character
 * Return: char if successful
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int j = 0;

	if (size != 0)
		ar = malloc(size * sizeof(char));
	else
		return (NULL);
	if (ar == NULL)
		return (NULL);
	while (j < size)
	{
		ar[j] = c;
		j += 1;
	}
	return (ar);
}
