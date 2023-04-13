#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  nested loop to make a grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array		
 */
int **alloc_grid(int width, int height)
{
	int **bee;
	int y, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	bee = malloc(sizeof(int *) * height);

	if (bee == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		bee[y] = malloc(sizeof(int) * width);

		if (bee[y] == NULL)
		{
			for (; y >= 0; y--)
				free(bee[y]);

			free(bee);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (z = 0;  z < width; z++)
			mee[y][z] = 0;
	}
	return (bee);
}
