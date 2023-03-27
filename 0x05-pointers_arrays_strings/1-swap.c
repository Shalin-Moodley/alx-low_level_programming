#include <stdio.h>
/**
 * swap_int - swaps the values of 2 integers
 * @a: first integer
 * @b: second integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
