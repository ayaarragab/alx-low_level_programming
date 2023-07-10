#include "main.h"
/**
 * read_textfile - implementation of fread
 * @filename: file
 * @letters: n_letters
 * Return: number of read letters or 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t total_read;
	size_t fd;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if ((int)fd == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	total_read = read(fd, buffer, letters);
	if (total_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	buffer[letters] = '\0';
	write(1, buffer, letters);
	close(fd);
	free(buffer);
	return (total_read);
}
