/* Include necessary headers */
#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of n or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - A helper function to calculate the square root.
 * @n: The number to calculate the square root of.
 * @i: The current guess for the square root.
 * Return: The square root of n or -1
 * if n does not have a natural square root.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i == n) /* If i^2 equals n, we found the square root */
	{
		return (i);
	}
	if (i * i > n) /* If i^2 exceeds n, it has no natural square root */
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
