#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - allocates memory to a 2D array
 *@width: array column
 *@height: array row
 *Return: NULL if failure and pointer to 2D array if success
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (height == 0 || width == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
