#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints sum of args
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;
	unsigned int i, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
		e = argv[x];
		for (i = 0; i < strlen(e); i++)
		{
		if (e[i] < 48 || e[i] > 57)
		{
		printf("Error\n");
		return (1);
		}
		}
		sum += atoi(e);
		e++;
		}
		printf("%d\n", sum);
	}
	else
	{
	printf("0\n");
	}
	return (0);
}
