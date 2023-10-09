#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a  function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: an int variable
 * @height: another int variable
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
