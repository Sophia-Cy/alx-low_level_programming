#include "main.h"

/**
  *flip_bits - it counts the number of bits to change
  *to get from one number to another
  *@n: the first number
  *@m: the second number
  *
  *Return: the number of bits to change
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int curr;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = exclusive >> i;
		if (curr & 1)
			count++;
	}

	return (count);
}
