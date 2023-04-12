#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a pointer to a 2D array
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to a 2D array and NUll
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		arr[i] = malloc(sizeof(int) * width);
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
