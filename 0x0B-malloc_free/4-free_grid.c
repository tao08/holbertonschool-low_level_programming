#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - this is a funtion free a grid
 * @grid: this is a variable
 * @height: this is a variable
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int coneccion = 0;

	while (coneccion < height)
	{
		free(grid[coneccion]);
		coneccion++;
	}
	free(grid);
}
