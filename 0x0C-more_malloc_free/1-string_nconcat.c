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
	unsigned int len1 = 0, len2 = 0, i;
	unsigned int total_length = 0;

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
	total_length = len1 + n;
	result = (char *)malloc(sizeof(char) * (total_length + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (i = 0; i < n; i++)
		result[len1 + i] = s2[i];

	result[total_length] = '\0';
	return (result);
}
/**
 * main - Entry point for testing the string_nconcat function.
 * Return: Always 0.
 */
int main(void)
{
	char s1[] = "Hello, ";
	char s2[] = "World!";
	char *concatenated;

	concatenated = string_nconcat(s1, s2, 6);
	if (concatenated != NULL)
	{
		printf("Concatenated: %s\n", concatenated);
		free(concatenated);
	}
	return (0);
}
