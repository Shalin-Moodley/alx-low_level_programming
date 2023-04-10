#include "main.h"
/**
 * _memset - stores value
 * @s: start point
 * @b: value
 * @n: num bytes to be changed
 * Return: changed array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
