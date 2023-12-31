#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: memory to be freed
 * @height: size of array.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[(height - 1) - i]);
	free(grid);
}
