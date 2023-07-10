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
	ssize_t total_read, total_written;
	size_t fd;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
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
		free(buffer);
		return (0);
	}
	buffer[letters] = '\0';
	total_written = write(STDOUT_FILENO, buffer, letters);
	if (total_written == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (total_read);
}
