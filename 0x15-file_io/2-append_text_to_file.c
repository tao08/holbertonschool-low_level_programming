#include "holberton.h"
/**
 * append_text_to_file - append a file
 * @filename: filename
 * @text_content: text content
 * Return: append file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int count, file, contex = 0;

	if (filename == NULL)
	{
		return (-1);

	}
	count = open(filename, O_WRONLY | O_APPEND);
	if (count == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[contex])
		{
			contex++;
		}
	}
	file = write(count, text_content, contex);

	if (file == -1)
	{
		return (-1);
		close(count);
	}
	return (1);
}
