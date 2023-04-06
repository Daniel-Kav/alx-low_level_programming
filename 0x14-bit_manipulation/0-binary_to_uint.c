#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *dan code.
 * Return: [0]  If b is NULL or contains chars not 0 or 1
 *         else - the converted number.
 */

unsigned int binary_to_uint(const char *dan)
{
	int len;
	unsigned int num;

	num = 0;
	if (!dan)
		return (0);
	for (len = 0; dan[len] != '\0'; len++)
	{
		if (dan[len] != '0' && dan[len] != '1')
			return (0);
	}
	for (len = 0; dan[len] != '\0'; len++)
	{
		num <<= 1;
		if (dan[len] == '1')
			num += 1;
	}
	return (num);
}
