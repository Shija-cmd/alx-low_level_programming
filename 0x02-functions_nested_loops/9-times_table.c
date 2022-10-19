#include "main.h"
/**
  * times_table - print the times table
  *
  * Return: Always 0.
  */
void times_table(void)
{
	int x = 0;
	int y;
	int z;

	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			z = x * y;
			if (z > 9)
			{
				_putchar (z / 10 + '0');
				_putchar (z % 10 + '0');
			}
			else if (y != 0)
			{
				_putchar (',');
				_putchar (' ');
			}
			y++;
		}
		_putchar ('\n');
		x++;
	}
}
