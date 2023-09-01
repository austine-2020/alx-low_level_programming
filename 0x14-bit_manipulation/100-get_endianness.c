#include "main.h"

/**
 * get_endianness - required to check if a machine is little or big
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
