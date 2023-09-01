#include "main.h"

/**
 * get_bit - this returns the value of a bit at an index in a decimal num
 * @n:a  search for num
 * @index:this describes the index of the bit
 *
 * Return:this should return the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

