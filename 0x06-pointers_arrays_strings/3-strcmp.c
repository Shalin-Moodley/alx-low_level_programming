#include "main.h"
/**
 * _strcmp - compares pointers
 * @s1: first pointer
 * @s2: second pointer
 * Return: if str1 < str2, negative difference.
 * If str1 == str2, 0.
 * If str1 > str2, positive difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
