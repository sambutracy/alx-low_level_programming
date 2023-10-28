#include "main.h"
/**
 * _strlen - it returns the length of a string
 * @s: input string
 * Return: value of length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
