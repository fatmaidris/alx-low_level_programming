#include "main.h"

/**
 * _strlen - returns length
 * @s: the string which length to check
 *
 * Return: integer length og string
 *
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: ame of the file
 * @text_content: text to write
 *
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, rext_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
