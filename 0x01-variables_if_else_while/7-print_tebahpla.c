#include <stdio.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print lowercase in reverse
 * Return: Always 0
 *
 */
int main(void)
{
char low;
for (low = 'z'; low >= 'a'; low--)
putchar(low);
putchar('\n');
return (0);
}
