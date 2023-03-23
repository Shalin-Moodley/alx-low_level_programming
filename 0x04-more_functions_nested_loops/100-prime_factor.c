#include "main.h"
#include <math.h>
/**
 * main - prints largest prime factor
 * Return: Always 0
 */
int main(void)

{
	long x, maxfactor;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= sqaure; x++)
	{
	if (number % x == 0)
	{
	maxfactor = number / x;
	}
	}
	printf("%ld\n", maxfactor);
	return (0);
}
