#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of the number or -1 if n is less than 0.
 */
int factorial(int n)
{
	if (n < 0) /* Error case: if n is less than 0 */
	{
		return (-1);
	}
	if (n == 0) /* Base case: factorial of 0 is 1 */
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
