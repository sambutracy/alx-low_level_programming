#include "main.h"
/**
 * string_toupper - transforms all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int t;

	t = 0;
	while (n[t] != '\0')
	{
		if (n[t] >= 'a' && n[t] <= 'z')
			n[t] = n[t] - 32;
		t++;
	}
	return (n);
}
