#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file
 * @text_content: A pointer to a string
 * Return: If the function fails - -1
 */

int create_file(const char *filename, char *text_content)
{
int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

if (filename == NULL)
{
return (-1);
}
if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
ssize_t len = strlen(text_content);
ssize_t bytes_written = write(fd, text_content, len);
if (bytes_written != len)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
