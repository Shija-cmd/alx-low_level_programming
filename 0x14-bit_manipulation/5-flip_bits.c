#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip.
 * @n: Number one.
 * @m: Number two.
 *
 * Return: Number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
