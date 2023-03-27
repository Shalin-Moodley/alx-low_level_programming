#include <unistd.h>
/**
 * _putchar - write c to stdout
 * @c: printable
 * Return: 1
 * On Error: -1
 */
int _putchar(char c)

{
	return (write(1, &c, 1));
}
