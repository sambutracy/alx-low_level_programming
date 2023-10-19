#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int k;
	int t;

	for (k = 0; k < n--; k++)
	{
		t = a[k];
		a[k] = a[n];
		a[n] = t;
	}
}
