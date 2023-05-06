#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets a bit
 * @n: pointer
 * @index: index
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = ~(1UL << index);

if (index >= sizeof(unsigned long int) * 8 || n == NULL)
{
return (-1);
}
*n &= mask;

return (1);
}
