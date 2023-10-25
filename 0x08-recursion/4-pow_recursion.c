#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: The result of x^y or -1 if y is less than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /* Error case: if y is less than 0 */
	{
		return (-1);
	}
	if (y == 0) /* Base case: x^0 is 1 */
	{
		return (1);
	} /* Recursive call to calculate x^y */
	return (x * _pow_recursion(x, y - 1));
}
