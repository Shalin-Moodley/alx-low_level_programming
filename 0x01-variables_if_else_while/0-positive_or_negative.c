#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints number
 * Return: Always
 *
 */
int main(void)
{
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
print("%d is negative\n", n);
}
return (0);
}