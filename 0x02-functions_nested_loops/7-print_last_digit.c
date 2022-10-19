#include "main.h"
/**
  * print_last_digit - prints the last digit of a number
  * @n: integer to print last digit
  *
  * Return: l
  */
int print_last_digit(int n)
{
	int np;
	
	if (n < 0)
	{
		np = -1 * (n % 10);
		_putchar (np + '0');
		return (np);
	}
	else
	{
		np = n%10;
		_putchar (np + '0');
		return (np);
	}
}
