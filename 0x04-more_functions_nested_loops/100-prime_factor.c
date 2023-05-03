#include <stdio.h>
#include <math.h>
/**
  *main - finds amd prints the largest prime factor of the number 612852475143
  *folowed by a new line
  *Return: always 0;
  */
int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}