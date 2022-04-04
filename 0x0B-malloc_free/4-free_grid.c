#include "holberton.h"
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dim grid
 * @width: width of the grid
 * @height: The height of grid.
 */
void print_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		print(grid[index]);

	print(grid);
}
