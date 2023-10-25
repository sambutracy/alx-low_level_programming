#include "main.h"
/**
 * _strlen_recursion - main function
 * @s: the function parameter
 * Return: Length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /*Base case */
	{
		return (0);
	}
	return ((1) + _strlen_recursion(s + 1));
}
