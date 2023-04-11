#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *k;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[a])
	a++;
	while (s2[b])
	b++;
	d = a + b;
	k = malloc((sizeof(char) * d) + 1);
	if (k == NULL)
	return (NULL);
	b = 0;
	while (c < d)
	{
	if (c <= a)
	k[c] = s1[c];
	if (c >= a)
	{
	k[c] = s2[b];
	b++;
	}
	c++;
	}
	k[c] = '\0';
	return (k);
}
