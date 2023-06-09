#include "main.h"
/**
 * _pow_recursion - finds power of x raised by y
 * @x: number
 * @y: multiply number by this many times
 * Return: x raised by y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	if (y == 0)
	return (1);
	return (x * _pow_recursion(x, y - 1));
}
