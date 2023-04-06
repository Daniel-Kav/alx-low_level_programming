#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit to set
 * @index: The index to set the value of bit
 *
 *
 *
 * dan code
 * Return: 1 if error, else -1
 */

int set_bit(unsigned long int *x, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	set = 1 << index;
	*x = *x | set;

	return (1);


}
