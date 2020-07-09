#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - retorna a un  puntero
 * @width: this is  a variable integer parameter
 * @height:  this is a variable integer parameter
 * Return: int pointer
 */
int **alloc_grid(int width, int height)
{
	int g, y;
	int **pt = NULL;
	/** chech if parameter are 0 or less */
	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}
	/** create memory for my malloc type double pointer */
	pt = malloc(sizeof(int *) * height);
	/** check if my ptr is on succes */
	if (pt == NULL)
	{
		return (NULL);
	}
	/** opening spaces in the height for the width in each height*/
	for (g = 0 ; g < height ; g++)
	{
		/** opening spaces for the width*/
		pt[g] = malloc(sizeof(int) * width);
		if (pt[g] == NULL)
		{
			for (; g >= 0 ; g--)
			{
				free(pt[g]);
			}
			free(pt);
			return (NULL);
		}
	}
	/** fill the array both dimensions with 0 */
	for (g = 0; g < height; g++)
	{
		for (y = 0; y < width; y++)
			pt[g][y] = 0;
	}
	return (pt);
}
