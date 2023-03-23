#include "main.h"
/**
 * _isdigit - checks if its a digit
 * @x: Number being checked
 * Return: 1 for character that will be a digit or 0 for any else
 */
int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
