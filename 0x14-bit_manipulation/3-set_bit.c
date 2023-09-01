#include "main.h"

/**
 * set_bit - this sets a bit in  a given index to 1
 * @n:this  points to the num to change
 * @index: this is the index of the bit to set to 1
 *
 * Return: 1- for failure, 1 for success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
