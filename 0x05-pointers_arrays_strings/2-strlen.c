#include <stdio.h>
/**
 * _strlen - returns length
 * @str: string
 * Return: the length if @str
 */
size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
