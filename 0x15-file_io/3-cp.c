#include "main.h"
#include <stdio.h>
#define BUFFER_SIZE 1024
/**
 * error_generator - error generator
 * @type: type of operation
 * @argv: vector array
 * Return: nothing
*/
void error_generator(char *type, char *argv[])
{
	if (strcmp(type, "argc") == 0)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (strcmp(type, "write") == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	else if (strcmp(type, "read") == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
}
/**
 * main - main function
 * @argc: length of argv array
 * @argv: vector array
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	ssize_t fd1, fd2, read_bytes, written_bytes, close1, close2;

	mode_t previous_umask = umask(0);
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_generator("argc", argv);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		error_generator("read", argv);
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	umask(previous_umask);
	if (fd2 == -1)
		error_generator("write", argv);
	while ((read_bytes = read(fd1, buffer, 1024)) > 0)
	{
		written_bytes = write(fd2, buffer, read_bytes);
		if (written_bytes != read_bytes)
			error_generator("write", argv);
	}
	close1 = close(fd1);
	close2 = close(fd2);
	if (close1 == -1 || close2 == -1)
	{
		if (close1 == -1)
		{
			dprintf(2, "Error: sdCan't close fd %ld\n", fd1);
			exit(100);
		}
		else
		{
			dprintf(2, "Error:ds Can't close fd %ld\n", fd2);
			exit(100);
		}
	}
	return (0);
}
