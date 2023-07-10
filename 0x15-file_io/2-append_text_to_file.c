#include "main.h"
/**
 * append_text_to_file - appends
 * @filename: file
 * @text_content: content buff
 * Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t tw;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (fd && text_content == NULL)
	{
		close(fd);
		return (1);
	}
	else if (text_content == NULL)
		return (-1);
	tw = write(fd, text_content, strlen(text_content));
	if (tw == -1)
	{
		close(fd);
		return (1);
	}
	close(fd);
	return (1);
}
