#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees memory of grid
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees a 2 dimensional grid
 * grid previously created by your alloc_grid function
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
