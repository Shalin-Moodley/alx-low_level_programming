#include "main.h"
/**
 * get_endianness - checksmachine
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
unsigned int value = 0x01;
unsigned char *bytes = (unsigned char *) &value;

return ((bytes[0] == 0x01) ? 1 : 0);
}
