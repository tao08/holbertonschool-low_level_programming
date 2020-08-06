#include "holberton.h"
/**
 *create_file - create a file
 * @filename: filename
 * @text_content: text content
 * Return: create file
 */
int create_file(const char *filename, char *text_content)
{
	int count, contex, tenor = 0;




	if (filename == NULL)
	{
		return (-1);

	}
	count = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (count == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[tenor])
		{
			tenor++;
		}
	}
	contex = write(count, text_content, tenor);

	if (contex == -1)
	{
		return (-1);
		close(count);
	}
	return (1);
}
