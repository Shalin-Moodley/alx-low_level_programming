#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum
 * @n: num
 * @...: condition for summation
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int x, sum = 0;

	va_start(a, n);

	for (x = 0; x < n; x++)
		sum += va_arg(a, int);

	va_end(a);

	return (sum);
}
