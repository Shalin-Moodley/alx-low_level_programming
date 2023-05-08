#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer
 * @text_content: The string to add
 * Return: If the function fails or filename is NULL - -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd = open(filename, O_WRONLY | O_APPEND);

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
