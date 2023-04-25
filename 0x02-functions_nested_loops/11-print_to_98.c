#include "main.h"
/**
  *print_to_98 - prints all natural numbers from n to 98
  *followed by a new line
  *@n: print from this number
  */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				_putchar(48 + i);
			}
			else if (i == 98)
			{
				_putchar(48 + i);
				_putchar('\n');
			}
		}
		else if (n >= 98)
		{
			for (j = n; j >= 98; j--);
			{
				if (j != 98)
				{
					_putchar(48 + j);
				}
				else if (j == 98)
				{
					_putchar(48 + j);
				}
                          }
	       }
	}
}
