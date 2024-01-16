#include "main.h"

/**
 * _islower - checks if the char is lowercase
 * @c: the char for checking
 * Return: 1 if lowercase, else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
