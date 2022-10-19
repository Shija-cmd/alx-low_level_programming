#include "main.h"
/**
  * print_sign - checks for sign
  *@n: integer to check
  *
  * Return: 0 or 1
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar (48);
		return (0);
	}
	else
	{
		_putchar (45);
		return (-1);
	}
}
