#include "main.h"
#include <stdlib.h>
/**
 * free_grid -  frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: pointer to arr of ints
 * @height: num of rows
 * Return: nothing or frees memory
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
