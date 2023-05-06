#include "main.h"
/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number
 * @index: index of the bit
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask = 1UL << index;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
return (n & mask) ? 1 : 0;
}
