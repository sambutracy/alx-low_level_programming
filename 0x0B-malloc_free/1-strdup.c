#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * with a copy of the string
 * @str: input value
 * Return: char
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i += 1;
	i += 1;
	dup = malloc(i * sizeof(*dup));
	if (dup == NULL)
		return (NULL);
	while (j < i)
	{
		dup[j] = str[j];
		j += 1;
	}
	return (dup);
}
