#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * return - no return.
 */

void times_table(void)
{
	int i, c, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (c = 1; c <= 9; c++)
		{
			result = i * c;

			_putchar(' ');
			_putchar(',');
			
			if (result <= 9)
			{
				_putchar(',');
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

		}
	_putchar('\n');
	}
}
