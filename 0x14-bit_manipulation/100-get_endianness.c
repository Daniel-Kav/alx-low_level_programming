#include "main.h"

/**
 * get_endianness - Checks the endianness of var.
 *
 *
 *
 * Return: 0 If big-endian.
 *         1 If little-endian.
 */

int get_endianes(void)
{
	char *y;
	int x  = 1;

	y = (char *)&x;

	return (*y);
	
}
