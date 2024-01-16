#include "main.h"

/**
 * _isalpha - checks to see if it is alphabetic
 * @c: The character to check
 *
 * Return: 1 is c is alphabetic char, 0 if other
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
