#include "main.h"

/**
  *binary_to_uint - it converts a binary number to an unsigned int
  *@b: the string containing the binary number
  *
  *Return: the converted number
  */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int deci_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		deci_val = 2 * deci_val + (b[i] - '0');
	}

	return (deci_val);
}
