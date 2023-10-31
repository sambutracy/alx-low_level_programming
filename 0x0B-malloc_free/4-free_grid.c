#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function freeing a 2 dimensional grid once created
 * by alloc_grid function.
 * @grid: array value to free
 * @height: value for array height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
