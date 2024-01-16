#include "main.h"
/**
 * _strstr - The Entry point
 * @haystack: input value
 * @needle: input value
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *t = haystack;
		char *s = needle;

		while (*t == *s && *s != '\0')
		{
			t++;
			s++;
		}
		if (*s == '\0')
			return (haystack);
	}
	return (0);
}
