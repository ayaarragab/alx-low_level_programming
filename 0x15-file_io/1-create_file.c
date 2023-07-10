#include "main.h"
/**
 * creat_file - creats a file
 * @filename:  file
 * @text_content: content
 * Return: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t tw;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	tw = write(fd, filename, strlen(text_content));
	if (tw == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
