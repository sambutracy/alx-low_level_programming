#include "main.h"
#include <stdio.h>

/**
 * main - to check the code
 * @a: an array of integers
 * @n: number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int t;

	t = 0;
	while (t < n)
	{
		if (t != 0)
		{
			printf(", ");
		}
		printf("%d", a[t]);t++;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
	
	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	return (0);
}
