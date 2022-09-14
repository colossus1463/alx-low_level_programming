#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int num, nult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (nult = 1; nult <= 9; nult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * nult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}

