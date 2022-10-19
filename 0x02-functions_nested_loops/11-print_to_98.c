#include "main.h"
#include <stdio.h>
/**
  * print_to_98 - print natural numbers from n to 98
  * @n: integer type number
  *
  * Return: void
  */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf ("%i, " , n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf ("98\n");
}
	
