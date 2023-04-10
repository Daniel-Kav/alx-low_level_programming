#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to bit number to set
 * @index: index at which to set bit value
 *
 *
 * Return: -1 if an error Else 1
 * dan
 */


int clear_bit(unsigned long int *x, unsigned int index)
{
	unsigned long int k;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	k = ~(1 << index);
	*x = *x & k;

	return (1);
}
