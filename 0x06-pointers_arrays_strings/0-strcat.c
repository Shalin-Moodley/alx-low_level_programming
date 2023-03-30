#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: destination
 * @src: source
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
	dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
	dest[dlen] = src[i];
	dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
