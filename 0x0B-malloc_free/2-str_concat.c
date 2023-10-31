#include "main.h"
#include <stdlib.h>

/**
 * str_concat - entry poiunt for function to concatenates two strings.
 * @s1: input value for char 1
 * @s2: inputvalue for char 2
 * Return: char if successful
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	char *nul = "";
	unsigned int i, j, t, s;

	i = j = t = s = 0;
	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;
	while (s1[i] != '\0')
		i += 1;
	while (s2[j] != '\0')
		j += 1;
	j += 1;
	cat = malloc((i + j) * sizeof(*cat));
	if (cat == NULL)
		return (NULL);
	while (s1[t] != '\0')
	{
		cat[t] = s1[t];
		t += 1;
	}
	while (s2[s] != '\0')
	{
		cat[t] = s2[s];
		s += 1;
		t += 1;
	}
	cat[t] = '\0';
	return (cat);
}
