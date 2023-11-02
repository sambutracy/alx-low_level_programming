#include "main.h"

/**
 * _calloc - allocates memory for an array consisting of @nmemb elements,
 * each of @size bytes, and returns a pointer to allocated memory.
 *
 * @nmemb: Number of ellements in array
 * @size: size in bytes for each element
 *
 * Return: a pointer to the new allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int y;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (y = 0; y < (nmemb * size); y++)
		x[y] = 0;
	return (x);
}
