#include "main.h"

/**
 * get_endianness - Checks the endianness of var.
 *
 *
 *
 * Return: 0 If big-endian.
 *         1 If little-endian.
 */

int get_endianness(void)
{
	char *n;
	int m = 1;

	m = (char *)&n;

	return (*m);
	
}
