#include "main.h"

/**
 *dan code
 * print_binary - Prints a binary notation of a number.
 * @n: number to be printed in binary.
 */

void print_binary(unsigned long int t)
{
	if (t > 1)
		print_binary(t >> 1);

	_putchar((t & 1) + '0');
}
