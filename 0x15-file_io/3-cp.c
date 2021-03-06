#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * main - read a text
 * @argc: arguments
 * @argv: positions
 * Return: an integer
 */
int main(int argc, char *argv[])
{
	char caracter[1024];
	int file__from, file_to, file_read, file_write;


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file__from file_to\n");
		exit(97);
	}
	file__from = open(argv[1], O_RDONLY);
	if (file__from == -1)
	{
		dprintf(STDERR_FILENO, "Error:Can't read from file%s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}
	while ((file_read = read(file__from, caracter, 1024)))
	{
		file_write = write(file_to, caracter, file_read);
		if (file_write != file_read)
		{
			dprintf(STDERR_FILENO, "Error:Can't write to%s\n", argv[1]);
			exit(99);
		}
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
		exit(100);
	}
	if (close(file__from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
		exit(100);
	}
	return (0);
}
