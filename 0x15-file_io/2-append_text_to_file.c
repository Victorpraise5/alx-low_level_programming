#include "main.h"


/**
 * append_text_to_file - appends text at the end of a file
 *                       if filename is NULL, return -1
 *                       file not created it doesn't exist
 * @filename: name of file to append text to
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);
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
