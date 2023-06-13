#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid -This one here will free  the two diemnsional array 
 * @grid: this is the 2 dimensional grid
 * @height: This will be the height dimension of grid
 * Description: here we will be  freeing memory of grid
 * Return:THis will show absolutely nothing
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


















