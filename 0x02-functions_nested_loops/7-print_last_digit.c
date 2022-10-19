#include "main.h"
/**
  * print_last_digit - prints the last digit of a number
  * @n: integer to print last digit
  *
  * Return: 1
  */
int print_last_digit(int n)
{
	int l, p;

	l = n % 10;
	if (l < 0)
		l = -1;
	p = '0' + l;
	{
	_putchar (p);
	}
	return (1);
}
