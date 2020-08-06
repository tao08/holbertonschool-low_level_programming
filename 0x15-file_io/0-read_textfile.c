#include <stdio.h>
#include "holberton.h"
/**
 *
 *read_textfile - read a text
 * @filename: filename
 * @letters: letters
 *Return: ssize
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int cont;
	char *punter;
	ssize_t _read, _write;

	if (filename == NULL)
	{
		return (0);
	}
	cont = open(filename, O_RDONLY);
	if (cont == -1)
	{
		return (0);
	}
	punter = malloc(sizeof(char) * letters);
	if (punter == NULL)
	{
		close(cont);
		return (0);
	}
	_read = read(cont, punter, letters);
	if (_read == -1)
	{
		return (0);
	}
	close(cont);
	_write = write(STDOUT_FILENO, punter, _read);

	return (_write);
}
