#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 D array of int
 * @width: input value for row
 * @height: input value for column
 * Return: int on success
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, t, s;

	i = j = t = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (s = 0; s < i; s++)
				free(arr[s]);
			free(arr);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (t = 0; t < width; t++)
			arr[j][t] = 0;
	}
	return (arr);
}
