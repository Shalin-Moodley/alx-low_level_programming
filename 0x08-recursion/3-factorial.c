#include "main.h"
/**
 * factorial - find factorial of number
 * @n: number
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n <= 1)
	return (1);
	return (n * factorial(n - 1));
}
