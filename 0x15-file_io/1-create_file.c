#include "main.h"

/**
 * create_file - creates a file
 *               if filename is NULL, return -1
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_APPEND | O_TRUNC | O_RDWR, 00600);
	int i = 0;

	if (filename == NULL)
		return (-1);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	else
	{
		while (*(text_content + i) != '\0')
		{
			write(fd, (text_content + i), 1);
			i++;
		}
			close(fd);
			return (1);
	}
	return (-1);
}
