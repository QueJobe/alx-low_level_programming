#include "main.h"

/**
 * times_table - printing the times table
 * Return: returns the times table
 */
void times_table(void)
{
	int r, c, n;

	for (r = 0; r <= 9; r++)
	{
		_putchar(48);
		_putchar(',');
		_putchar(' ');

		for (c = 1; c <= 9; c++)
		{
			n = r * c;
			if ((n / 10) > 0)
			{
				_putchar ((n / 10) + 48);
			}
			else
			{
				_putchar(' ');
			}
			_putchar((n % 10) + 48);

			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
