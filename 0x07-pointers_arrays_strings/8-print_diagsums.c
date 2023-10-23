#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, t;

	sum1 = 0;
	sum2 = 0;

	for (t = 0; t < size; t++)
	{
		sum1 = sum1 + a[t * size + t];
	}
	for (t = size - 1; t >= 0; t--)
	{
		sum2 += a[t * size + (size - t - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
