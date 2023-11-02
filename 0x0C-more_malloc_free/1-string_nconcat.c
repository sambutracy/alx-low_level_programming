#include "main.h"
/**
 * string_nconcat - Concatenates two strings,
 * up to the first n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 * Return: A pointer to the newly allocated concatenated string,
 * or NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	result = (char *)malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
		exit(98);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (i = 0; i < n; i++)
		result[i + j] = s2[j];

	result[i + j] = '\0';
	return (result);
}
