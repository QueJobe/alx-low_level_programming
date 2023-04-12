#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2D array grid
 * @grid: double pointer to grid
 * @height: passes interger value
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
