#include <stdio.h>

void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
int leading_zeroes = 1;

while (mask != 0)
{
if ((n & mask) != 0)
{
leading_zeroes = 0;
putchar('1');
}
else if (!leading_zeroes)
{
putchar('0');
}

mask >>= 1;
}

if (leading_zeroes)
{
putchar('0');
}
}
